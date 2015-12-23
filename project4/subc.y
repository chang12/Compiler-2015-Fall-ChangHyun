%{
/*
 * File Name   : subc.y
 * Description : a skeleton bison input
 */

#include "subc.h"
#define INT 	100
#define CHAR	101
#define PTR		102
#define VAR		103
#define CONST	104
#define ARRAY	105
#define FUNC	106

int    yylex ();
int    yyerror (char* s);
void 	REDUCE(char* s);

%}

/* yylval types */
%union {
	int				intval;
	char			*stringval;
	bool			boolval;
	struct id		*idptr;
	struct decl		*declptr;
	struct ste		*steptr;
}

/* Precedences and Associativities */
%left	','
%right	'='
%left	LOGICAL_OR
%left	LOGICAL_AND
%left	'|'
%left	'&'
%left	EQUOP
%left	RELOP
%left	'+' '-'
%left	'*' '/' '%' 
%right	'!' INCOP DECOP
%right 	'[' ']' '(' ')' '.' ELSE
%left STRUCTOP
%left WRITE_INT

/* Token and Types */
%type<boolval>		pointers param_list
%type<declptr>		type_specifier struct_specifier expr or_expr or_list and_expr and_list binary unary const_expr func_decl param_decl args
%token<idptr> 		TYPE VOID STRUCT RETURN IF ELSE WHILE FOR BREAK CONTINUE ID WRITE_INT WRITE_STRING
%token				PRINT
%token<stringval>	CHAR_CONST STRING STRUCTOP LOGICAL_OR LOGICAL_AND RELOP EQUOP INCOP DECOP
%token<intval>		INTEGER_CONST

%%
program
		: ext_def_list
		;

ext_def_list
		: ext_def_list ext_def
		| /* empty */
		;

ext_def
		: type_specifier pointers ID ';'{

			if($2)
			{
				// VAR PTR declaration
				declare($3, makevardecl(makeptrdecl(makevardecl($1))));
				coffset->offset = coffset->offset + 1;
			}
			else
			{
				// VAR declaration
				declare($3, makevardecl($1));
				coffset->offset = coffset->offset + $1->size;
			}

		}
		| type_specifier pointers ID '[' const_expr ']' ';'{

			if($5->declclass==CONST)
			{
				if($5->type==inttype)
				{
					struct decl* elementvar;
					if($2)
					{
						elementvar = makevardecl(makeptrdecl(makevardecl($1)));
					}
					else
					{
						elementvar = makevardecl($1);
					}
					declare($3, makeconstdecl(makearraydecl(elementvar)));
				}
			}
		}
		| func_decl ';'{
			// 프로젝트4 에서는 이 Grammar는 쓰이지 않을 것이다.
		}
		| type_specifier ';'{
		}
		| func_decl compound_stmt{
			// Semantic error가 있는 코드는 입력되지 않으므로,
			// 프로젝트3에서 func_decl에 대한 value를 체크한 내역은 지웠다.
		}
		;

type_specifier
		: TYPE{
			if(!strcmp($1->name,"int")) $$ = inttype;
			else if(!strcmp($1->name,"char")) $$ = chartype;
		}
		| VOID{
			$$ = voidtype;
		}
		| struct_specifier{
			$$ = $1;
		}
		;

struct_specifier
		: STRUCT ID '{' 
			{
				push_scope();	
			}
		  	def_list '}'
			{
				struct ste* fields = pop_scope();
				declare($2, $$=makestructdecl(fields));
			}
		| STRUCT ID{
			// ID로 미리 정의되어있을 struct type의 decl을 받아와서 올린다.
			$$ = findstructdecl($2);
		}
		;

func_decl
		: type_specifier pointers ID '(' ')'{
			fprintf(codefile, "%s:\n", $3->name);
			clabel = $3->name;
			// function을 정의하면서, 선언까지 함께 해주기 때문에
			// 당연히 존재하지 않는 func 이름일 것이다.

			struct decl* funcdecl = NULL;

			if($2) 
			{
				funcdecl = makefuncdecl(makeptrdecl(makeconstdecl($1)));
				declare($3, funcdecl);
				$$ = funcdecl;
			}
			else
			{
				funcdecl = makefuncdecl($1);
				declare($3, funcdecl);
				$$ = funcdecl;
			}
		}
		| type_specifier pointers ID '(' VOID ')'{

			struct decl* funcdecl = NULL;

			if($2) 
			{
				funcdecl = makefuncdecl(makeptrdecl(makeconstdecl($1)));
				declare($3, funcdecl);
				$$ = funcdecl;
			}
			else
			{
				funcdecl = makefuncdecl($1);
				declare($3, funcdecl);
				$$ = funcdecl;
			}

		}
		| type_specifier pointers ID '(' {
			
			// FUNC declare 는 param_list 를 확인한 뒤로 미룬다
			struct decl* funcdecl = NULL;
			struct decl* returntypedecl = NULL;

			if($2) 
			{
				returntypedecl = makeptrdecl(makeconstdecl($1));
				$<declptr>$ = makefuncdecl(returntypedecl);
			}
			else
			{
				returntypedecl = $1;
				$<declptr>$ = makefuncdecl(returntypedecl);
			}
			push_scope();
			declare(returnid,returntypedecl);

		}
		  param_list ')'{

			struct ste*	formals = pop_scope();
			connectdecl(formals);
			struct decl* funcdecl = $<declptr>5;

			funcdecl->formals = formals->prev;
			$$ = funcdecl;
			declare($3, funcdecl);

		}
	;

pointers
		: '*'{
			$$ = true;
		}
		| /* empty */{
			$$ = false;
		}
		;

param_list  /* list of formal parameter declaration */
		: param_decl{
			$$ = $1;
		}
		| param_list ',' param_decl{
			$$ = $1 && $3;
		}
		;

param_decl  /* formal parameter declaration */
		: type_specifier pointers ID{

			if($2)
			{
				// VAR PTR
				struct decl* declptr = makevardecl(makeptrdecl(makevardecl($1)));
				declare($3, declptr);
				$$ = declptr;
			}
			else
			{
				// VAR
				struct decl* declptr = makevardecl($1);
				declare($3, declptr);
				$$ = declptr;
			}

		}
		| type_specifier pointers ID '[' const_expr ']'{

			// CONST 이고, type이 inttype
			if($5->declclass==CONST)
			{
				if($5->type==inttype)
				{
					struct decl* elementvar;
					if($2)
					{
						elementvar = makevardecl(makeptrdecl(makevardecl($1)));
					}
					else
					{
						elementvar = makevardecl($1);
					}
					struct decl* declptr = makeconstdecl(makearraydecl(elementvar));
					declare($3, declptr);
					$$ = declptr;
				}
			}
					
		}
		;

def_list    /* list of definitions, definition can be type(struct), variable, function */
		: def_list def
		| /* empty */
		;

def
		: type_specifier pointers ID ';'{
		
			if($2)
			{
				// VAR PTR
				declare($3, makevardecl(makeptrdecl(makevardecl($1))));
				coffset->offset = coffset->offset + 1;
			}
			else
			{
				// VAR
				declare($3, makevardecl($1));
				coffset->offset = coffset->offset + $1->size;
			}

		}
		| type_specifier pointers ID '[' const_expr ']' ';'{

				// CONST 이고, type이 inttype
				if($5->declclass==CONST)
				{
					if($5->type==inttype)
					{
						struct decl* elementvar;
						if($2)
						{
							elementvar = makevardecl(makeptrdecl(makevardecl($1)));
						}
						else
						{
							elementvar = makevardecl($1);
						}	
						declare($3, makeconstdecl(makearraydecl(elementvar)));
					}
				}

		}
		| type_specifier ';'
		| func_decl ';'
		;

compound_stmt
		: '{' {
			push_scope();
			if(!findcurrentdecl(returnid))
			{
				if($<declptr>0)
				{
					if($<declptr>0->declclass == FUNC)
					{
						declare(returnid, $<declptr>0->returntype);
						push_stelist($<declptr>0->formals);
					}
				}
			}

		} local_defs {
			fprintf(codefile, "\tshift_sp %d\n", coffset->offset);
			fprintf(codefile, "%s_start:\n", clabel);
		} stmt_list '}'{
			pop_scope();
			fprintf(codefile, "%s_final:\n", clabel);
			fprintf(codefile, "\tpush_reg fp\n");
			fprintf(codefile, "\tpop_reg sp\n");
			fprintf(codefile, "\tpop_reg fp\n");
			fprintf(codefile, "\tpop_reg pc\n");
			fprintf(codefile, "%s_end:\n", clabel);
		}
		;

local_defs  /* local definitions, of which scope is only inside of compound statement */
		:	def_list{
		}
		;

stmt_list
		: stmt_list stmt{
		}
		| /* empty */{
		}
		;

stmt
		: expr ';'{
			int sp_shift;
			if(check_is_ptr($1)) 
			{
				yyerror("check1");
				sp_shift = -$1->type->ptrto->type->size;
			}
			else if(check_is_var($1)) 
			{
				yyerror("check2");
				sp_shift = -$1->type->size;
			}
			fprintf(codefile, "\tshift_sp %d\n", sp_shift);
		}
		| compound_stmt{
		}
		| RETURN ';'{
		}
		| RETURN expr ';'{
		}
		| ';'{
		}
		| IF '(' expr ')' stmt{
		}
		| IF '(' expr ')' stmt ELSE stmt{
		}
		| WHILE '(' expr ')' stmt{
		}
		| FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt{
		}
		| BREAK ';'{
		}
		| CONTINUE ';'{
		}
		| PRINT{
			printste(cscope->top);
		}
		| WRITE_INT '(' expr ')' {
			fprintf(codefile, "\twrite_int\n");
		}
		| WRITE_STRING '(' STRING ')'{
			fprintf(codefile, "str_%d. string %s\n", cstring, $3);
			fprintf(codefile, "\tpush_const str_%d\n", cstring);
			fprintf(codefile, "\twrite_string\n");
			cstring++;
		}
		;

expr_e
		: expr{
		}
		| /* empty */{
		}
		;

const_expr
		: expr{
			$$ = $1;
		}
		;

expr
		: unary '=' {
			// unary에 값을 assign 할 것이므로, 현재 stack top을 복사해둔다.
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
		} expr{
			$$ = $1;
			// assign 하고 나서는 expr 이므로 값을 위에 띄울 것이다.
			// 그러므로 fetch 해준다.
			fprintf(codefile, "\tassign\n");
			fprintf(codefile, "\tfetch\n");
		}
		| or_expr{
			$$ = $1;
		}
		;

or_expr
		: or_list{
			$$ = $1;
		}
		;

or_list
		: or_list LOGICAL_OR and_expr{
			$$ = logicaltype($1, $3);
		}
		| and_expr{
			$$ = $1;
		}
		;

and_expr
		: and_list{
			$$ = $1;
		}
		;

and_list
		: and_list LOGICAL_AND binary{
			$$ = logicaltype($1, $3);
		}
		| binary{
			$$ = $1;
		}
		;

binary
		: binary RELOP binary{
			$$ = optype($1, $3);
		}
		| binary EQUOP binary{
			$$ = optype($1, $3);
		}
		| binary '+' binary{
			$$ = plustype($1, $3);
		}
		| binary '-' binary{
			$$ = minustype($1, $3);
		}
		| unary %prec '='{
			$$ = $1;
			// unary가 VAR라면 이 시점에서 fetch 해줘야한다.
			// 이 시점 윗단에서는 대응되는 값이 올려져있어야 하기 때문이다.
			if(check_is_var($1))
			{
				fprintf(codefile, "\tfetch\n");
			}
		}
		;

unary
		: '(' expr ')'{
			$$ = $2;
		}
		| '(' unary ')'{
			$$ = $2;
		} 
		| INTEGER_CONST{
			$$ = makenumconstdecl(inttype, $1);
			// INTEGER_CONST로 REDUCE 되는 경우에는, 해당 값을 올려놓는다.
			fprintf(codefile, "\tpush_const %d\n", $1);
		}
		| CHAR_CONST{
			$$ = makecharconstdecl(chartype, $1);
		}
		| STRING{
			$$ = makestringconstdecl(stringtype, $1);
		}
		| ID{
			REDUCE("unary -> ID");
			$$ = findwholedecl($1);
			// $$->declclass = VAR;
			// ID로 REDUCE 되는 경우에는, ID가 담겨있는 주소값(정수)를 올려놓는다.
			fprintf(codefile, "\tpush_reg fp\n");
			fprintf(codefile, "\tpush_const %d\n", 1 + $$->offset);
			fprintf(codefile, "\tadd\n");
		}
		| '-' unary	%prec '!'{
			// $2 는 type이 inttype 이어야 한다.
			$$ = $2;
		}
		| '!' unary{
			// $2 는 type이 inttype 이어야 한다.
			$$ = $2;
		}
		| unary INCOP{
			$$ = checkINCOPDECOP($1);
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_const 1\n");
			fprintf(codefile, "\tadd\n");
			fprintf(codefile, "\tassign\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_const 1\n");
			fprintf(codefile, "\tsub\n");
		}
		| unary DECOP{
			$$ = checkINCOPDECOP($1);
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_const 1\n");
			fprintf(codefile, "\tsub\n");
			fprintf(codefile, "\tassign\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_const 1\n");
			fprintf(codefile, "\tadd\n");
		}
		| INCOP unary{
			REDUCE("unary -> INCOP unary");
			$$ = checkINCOPDECOP($2);
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_const 1\n");
			fprintf(codefile, "\tadd\n");
			fprintf(codefile, "\tassign\n");
			fprintf(codefile, "\tfetch\n");
		}
		| DECOP unary{
			$$ = checkINCOPDECOP($2);
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_const 1\n");
			fprintf(codefile, "\tsub\n");
			fprintf(codefile, "\tassign\n");
			fprintf(codefile, "\tfetch\n");
		}
		| '&' unary	%prec '!'{
			$$ = makeconstdecl(makeptrdecl($2));
		}
		| '*' unary	%prec '!'{
			$$ = $2->type->ptrto;
			// int *i;
			// *i = 10; 이런건 가능했잖아?
			// 그러면 $$를 CONST로 강제할 것이 아니라, 그대로 둬야 한다.
			// 단지 fetch 만 한번 해둘 뿐이다.
			fprintf(codefile, "\tfetch\n");
		}
		| unary '[' expr ']'{
			// RHS의 unary는 const 이고, type의 typeclass는 array 인가?
			// expr는 int type VAR 이거나, INT_CONST 인가?
			// 조건을 충족한다면, elementvar로 VAR을 넘겨준다.
			$$ = arrayaccess($1, $3);
		}
		| unary '.' ID{
			$$ = structaccess($1, $3);
		}
		| unary STRUCTOP ID{
			$$ = structptraccess($1, $3);
		}
		| unary '(' args ')'{
			yyerror("check function call");
			$$ = check_funccall($1, $3);
		}
		| unary '(' ')'{
			$$ = check_funccall($1, NULL);
		}
		;

args    /* actual parameters(function arguments) transferred to function */
		: expr{
			$$ = copydecl($1);
		}
		| expr ',' args{
			$1->next = $3;
			$$ = $1;
		}
		;

%%

/*  Additional C Codes 
 	Implemnt REDUCE function here */

int yyerror (char* s)
{
	if(filename) fprintf(stderr, "%s:",filename);
	fprintf(stderr,"%d: ",read_line());
	fprintf(stderr, "%s\n", s);
}

void REDUCE(char* s)
{
	printf("%s\n",s);
}

void push_scope()
{
	struct sse* sseptr = (struct sse*)malloc(sizeof(struct sse));
	sseptr->top = cscope->top;
	sseptr->prev = cscope;
	cscope = sseptr;

	struct ose* oseptr = (struct ose*)malloc(sizeof(struct ose));
	oseptr->offset = 0;
	oseptr->prev   = coffset;
	coffset = oseptr;
}

struct ste* pop_scope()
{
	struct ste* result = NULL;
	struct ste* currtop = cscope->top;
	struct ste* dummy = (struct ste*)malloc(sizeof(struct ste*));
	dummy->prev = NULL;
	struct ste* strbottom = dummy;
	struct ste* strtop = dummy;

	while(cscope->top!=cscope->prev->top)
	{
		cscope->top = currtop->prev;
		if(check_is_struct_type(currtop->decl))
		{
			strbottom->prev = currtop;
			strbottom = currtop;
			strbottom->prev = NULL;
		}
		else
		{
			currtop->prev = result;
			result = currtop;
		}
		currtop = cscope->top;
	}
	
	struct sse* temp = cscope;
	cscope = cscope->prev;
	free(temp);

	if(strtop->prev) 
	{
		strbottom->prev = cscope->top;
		cscope->top = strtop->prev;
	}
	free(dummy);

	return result;
}

void push_stelist(struct ste* formals)
{
	struct ste* entry = formals;
	while(entry)
	{
		declare(entry->name, entry->decl);
		entry = entry->prev;
	}
}

struct decl* makevardecl(struct decl* type)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = VAR;
	result->type = type;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = 0;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	result->offset = coffset->offset;

	return result;
}

struct decl* makeptrdecl(struct decl* ptrtodecl)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = TYPE;
	result->type = NULL;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = PTR;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = ptrtodecl;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl* makearraydecl(struct decl* elementvar)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = TYPE;
	result->type = NULL;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = ARRAY;
	result->elementvar = elementvar;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl	*maketypedecl(int typeclass)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = TYPE;
	result->type = NULL;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = typeclass;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;
	result->size = 1;

	return result;
}

struct decl	*makestructdecl(struct ste* fields)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = TYPE;
	result->type = NULL;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = STRUCT;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = fields;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl	*makefuncdecl(struct decl* returntypedecl)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = FUNC;
	result->type = NULL;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = returntypedecl;
	result->typeclass = 0;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl	*makeconstdecl(struct decl* type)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = CONST;
	result->type = type;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = 0;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl	*makenumconstdecl(struct decl* type, int value)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = CONST;
	result->type = type;
	result->value = value;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = 0;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl	*makecharconstdecl(struct decl* type, char* value)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));

	result->declclass = CONST;
	result->type = type;
	result->value = 0;
	result->charconst = *value;
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = 0;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl	*makestringconstdecl(struct decl* type, char* value)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	int length = strlen(value);

	result->declclass = CONST;
	result->type = type;
	result->value = 0;
	result->charconst = '\0';
	result->string = (char*)malloc(sizeof(char)*length);
	strncpy(result->string, value, length);
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = 0;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

void declare(struct id* idptr, struct decl* declptr)
{
	struct ste* entry = (struct ste*)malloc(sizeof(struct ste));
	entry->name   = idptr;
	entry->decl   = declptr;
	entry->prev   = cscope->top;
	cscope->top = entry;
	return;
}


void init_type()
{
	cscope = (struct sse*)malloc(sizeof(struct sse));
	cscope->prev = NULL;
	cscope->top = NULL;

	coffset = (struct ose*)malloc(sizeof(struct ose));
	coffset->offset = 0;
	coffset->prev = NULL;

	cstring = 0;

	inttype = maketypedecl(INT);
	chartype = maketypedecl(CHAR);
	voidtype = maketypedecl(VOID);

	declare(enter(TYPE, "int", 3), inttype);
	declare(enter(TYPE, "char", 4), chartype);
	declare(enter(VOID, "void", 4), voidtype);
	
	returnid = enter(ID, "*return", 7);
}

struct decl* findcurrentdecl(struct id* name)
{
	struct ste* entry = cscope->top;
	struct ste* last = cscope->prev? cscope->prev->top : NULL;

	while(entry!=last)
	{
		if(entry->name==name) break;
		else entry = entry->prev;
	}

	return (entry!=last? (entry->decl->declclass==TYPE? NULL : entry->decl) : NULL);
}

struct decl* findstructdecl(struct id* name)
{
	struct ste* entry = cscope->top;
	while(entry)
	{
		if(entry->name==name)
		{
			if(entry->decl->declclass==TYPE)
			{
				if(entry->decl->typeclass==STRUCT) break;
			}

		}
		else entry = entry->prev;
	}
	return entry? entry->decl : NULL;
}

struct decl* findfuncdecl(struct id* name)
{
	struct ste* entry = cscope->top;
	while(entry)
	{
		if(entry->name==name)
		{
			if(entry->decl->declclass==FUNC) break;
		}
		else entry = entry->prev;
	}
	return entry? entry->decl : NULL;
}

struct decl* findwholedecl(struct id* name)
{
	struct ste* entry = cscope->top;
	while(entry)
	{
		if(entry->name == name) break;
		else entry = entry->prev;
	}
	return entry? entry->decl : NULL;
}

bool findreturnid()
{
	struct ste* entry = cscope->top;
	struct ste* last = cscope->prev->top;
	while(entry!=last)
	{
		if(entry->name == returnid) break;
		else entry = entry->prev;
	}
	return (entry==last? true : false);
}


struct decl* checkINCOPDECOP(struct decl* target)
{
	bool isInt = (target->type==inttype);
	bool isChar = (target->type==chartype);
	bool isPtr = (target->type->typeclass==PTR);
	if(isInt || isChar || isPtr)
	{
		// 한번 INCOP, DECOP를 거치고 나면 const 로 취급받아야한다.
		// 예를 들어 ++a = 17; 이런 statement를 reject 해야하기 때문이다.
		struct decl* result = makeconstdecl(target->type);
		result->offset = target->offset;
		return result;
	}
	else return NULL;
}

bool check_is_var(struct decl* target)
{
	if(!target) return false;
	else if(target->declclass==VAR) return true;
	else return false;
}

bool check_is_type(struct decl* target)
{
	if(!target) return false;
	else if(target->declclass==TYPE) return true;
	else return false;
}

bool check_is_const(struct decl* target)
{
	if(!target) return false;
	else if(target->declclass==CONST) return true;
	else return false;
}

bool check_is_int(struct decl* target)
{
	if(!target) return false;
	else if(target->type == inttype) return true;
	else return false;
}

bool check_is_ptr(struct decl* target)
{
	if(!target) return false;
	else if(target->type->typeclass == PTR) return true;
	else return false;
}

bool check_is_char(struct decl* target)
{
	if(!target) return false;
	else if(target->type == chartype) return true;
	else return false;
}

bool check_is_array(struct decl* declptr)
{
	bool result = false;
	if(declptr->declclass==CONST)
	{
		if(declptr->type->typeclass==ARRAY) result = true;
	}
	return result;
}

bool check_is_struct_var(struct decl* target)
{
	bool result = false;
	if(check_is_var(target))
	{
		if(target->type->typeclass==STRUCT) result = true;
	}
	return result;
}

bool check_is_struct_type(struct decl* target)
{
	bool result = false;
	if(check_is_type(target))
	{
		if(target->typeclass == STRUCT) result = true;
	}
	return result;
}

bool check_compatibledecl(struct decl* declptr1, struct decl* declptr2)
{
	bool result = false;

	if(declptr1 && declptr2) 
	{
		if(declptr1->type && declptr2->type)
		{
			if(declptr1->type==declptr2->type) result = true;
			else if(check_is_ptr(declptr1))
			{
				if(check_is_ptr(declptr2))
				{
					struct decl* ptr1 = declptr1->type->ptrto;
					struct decl* ptr2 = declptr2->type->ptrto;
					if(ptr1->type==ptr2->type) result = true;
				}
				else if(check_is_array(declptr2))
				{
					struct decl* ptr1 = declptr1->type->ptrto;
					struct decl* ptr2 = declptr2->type->elementvar;
					if(ptr1->type==ptr2->type) result = true;
				}
			}
			else if(check_is_array(declptr1))
			{
				if(check_is_ptr(declptr2))
				{
					struct decl* ptr1 = declptr1->type->elementvar;
					struct decl* ptr2 = declptr2->type->ptrto;
					if(ptr1->type==ptr2->type) result = true;
				}
				else if(check_is_array(declptr2))
				{
					struct decl* ptr1 = declptr1->type->elementvar;
					struct decl* ptr2 = declptr2->type->elementvar;
					if(ptr1->type==ptr2->type) result = true;
				}
			}
		}
	}
	return result;
}

bool check_compatibletype(struct decl* type1, struct decl* type2)
{
	struct decl* declptr1 = (struct decl*)malloc(sizeof(struct decl));
	struct decl* declptr2 = (struct decl*)malloc(sizeof(struct decl));

	declptr1->type = type1;
	declptr2->type = type2;

	bool result = check_compatibledecl(declptr1, declptr2);

	free(declptr1);
	free(declptr2);

	return result;
}

bool check_samereturntype(struct decl* type, struct decl* newtype, bool pointers)
{
	// func_decl 이 이미 존재하는 경우 호출된다.
	// 그러므로 type이 NULL일 경우는 없다.
	
	bool result = false;

	if(pointers)
	{
		if(type->typeclass==PTR)
		{
			result = (type->ptrto->type == newtype);
		}
	}
	else
	{
		result = (type == newtype);
	}

	return result;
}

bool check_sameformals(struct decl* decl1, struct decl* decl2)
{
	bool result = true;
	
	while(decl1)
	{
		if(!decl2)
		{
			result = false;
			break;
		}
		else
		{
			if(decl1->declclass==CONST)
			{
				if(decl2->declclass==CONST)
				{
					struct decl* elementvar1 = decl1->type->elementvar;
					struct decl* elementvar2 = decl2->type->elementvar;
					
					if(elementvar1->type->typeclass==PTR)
					{
						if(elementvar2->type->typeclass==PTR)
						{
							if(elementvar1->type->ptrto != elementvar2->type->ptrto)
							{
								result = false;
								break;
							}
						}
						else
						{
							result = false;
							break;
						}
					}
					else
					{
						if(elementvar1->type != elementvar2->type)
						{
							result = false;
							break;
						}
					}
				}
				else
				{
					result = false;
					break;
				}
			}
			else
			{
				struct decl* type1 = decl1->type;
				struct decl* type2 = decl2->type;

				if(type1->typeclass == PTR)
				{
					if(type2->typeclass = PTR)
					{	
						if(type1->ptrto->type != type2->ptrto->type)
						{
							result = false;
							break;
						}
					}
					else
					{
						result = false;
						break;
					}
				}
				else
				{
					if(type1 != type2)
					{
						result = false;
						break;
					}
				}
			}
		}
		decl1 = decl1->next;
		decl2 = decl2->next;
	}

	// 두번째 정의된 formals의 개수가, 첫번째 정의된 formals의 개수보다 많음
	if(!decl1 && decl2) result = false;
	return result;
}

struct decl* check_funccall(struct decl* funcdecl, struct decl* args)
{

	if(!funcdecl) return NULL;
	else if(funcdecl->declclass != FUNC)
	{
		yyerror("error: not a function");
		return NULL;
	}
	else if(!funcdecl->formals)
	{
		if(!args) return makeconstdecl(funcdecl->returntype);
		else
		{
			yyerror("error: actual args are not equal to formals args");
			return NULL;
		}
	}
	else if(!check_sameformals(funcdecl->formals->decl, args))
	{
		yyerror("error: actual args are not equal to formals args");
		return NULL;
	}
	else
	{
		return makeconstdecl(funcdecl->returntype);
	}
}

struct decl* arrayaccess(struct decl* arrayptr, struct decl* indexptr)
{

	// RHS의 unary는 const 이고, type의 typeclass는 array 인가?
	// expr는 int type VAR 이거나, INT_CONST 인가?
	// 조건을 충족한다면, elementvar로 VAR을 넘겨준다.

	struct decl* result = NULL;

	if(check_is_array(arrayptr))
	{
		if(indexptr->type == inttype) result = arrayptr->type->elementvar;
		else yyerror("error: not a int type index");
	}
	else
	{
		yyerror("error: not array type");
	}
}

struct decl* structaccess(struct decl* structptr, struct id* fieldid)
{
	struct decl* result = NULL;
	if(check_is_struct_var(structptr))
	{
		struct ste* entry = structptr->type->fieldlist;
		while(entry)
		{
			if(entry->name==fieldid) break;
			else entry = entry->prev;
		}
		if(entry) result = entry->decl;
		else yyerror("struct do not have same field");
	}
	else yyerror("error: variable is not struct");

	return result;
}

struct decl* structptraccess(struct decl* structptr, struct id* fieldid)
{
	struct decl* result = NULL;
	if(check_is_var(structptr))
	{
		if(structptr->type->typeclass==PTR)
		{
			result = structaccess(structptr->type->ptrto, fieldid);
		}
		else yyerror("error: variable is not struct pointer");
	}

	return result;
}

struct decl* copydecl(struct decl* declptr)
{
	struct decl* copy = (struct decl*)malloc(sizeof(struct decl));

	copy->declclass = declptr->declclass;
	copy->type = declptr->type;
	copy->value = declptr->value;
	copy->charconst = declptr->charconst;
	copy->string = declptr->string;
	copy->formals = declptr->formals;
	copy->returntype = declptr->returntype;
	copy->typeclass = declptr->typeclass;
	copy->elementvar = declptr->elementvar;
	copy->num_index = declptr->num_index;
	copy->fieldlist = declptr->fieldlist;
	copy->ptrto = declptr->ptrto;
	copy->scope = declptr->scope;
	copy->next = NULL;
}

struct decl* plustype(struct decl* op1, struct decl* op2)
{
	struct decl* result = NULL;
	bool isError = false;
	// 만약 둘중 하나라도 NULL
	if(op1 && op2)
	{
		if(check_is_int(op1))
		{
			if(check_is_int(op2)||check_is_ptr(op2)) result = op2;
			else isError = true;
		}
		else if(check_is_ptr(op1))
		{
			if(check_is_int(op2)) result = op1;
			else isError = true;
		}
		else isError = true;
	}

	if(isError) yyerror("error: not computable");

	return result;
}

struct decl* minustype(struct decl* op1, struct decl* op2)
{
	struct decl* result = NULL;
	bool isError = false;

	if(op1 && op2)
	{
		if(check_is_int(op1) && check_is_int(op2)) result = op1;
		else if(check_is_ptr(op1) && check_is_int(op2)) result = op1;
		else isError = true;
	}

	if(isError) yyerror("error: not computable");

	return result;
}

struct decl* optype(struct decl* op1, struct decl* op2)
{
	bool isError = false;
	
	if(op1 && op2)
	{
		if(check_is_char(op1) && check_is_char(op2)) ;
		else if(check_is_int(op1) && check_is_int(op2)) ;
		else if(check_is_ptr(op1) && check_is_ptr(op2))
		{
			if(op1->type->ptrto->type != op2->type->ptrto->type) isError = true;
		}
		else isError = true;
	}

	if(isError)
	{
		yyerror("error: not computable");
		return NULL;
	}
	else return makenumconstdecl(inttype, 1);
}

struct decl* logicaltype(struct decl* op1, struct decl* op2)
{
	bool isError = false;
	struct decl* result = NULL;

	if(op1 && op2)
	{
		if(!(op1->type==inttype) || !(op2->type==inttype))
		{
			isError = true;
			result = NULL;
		}
		else result = makenumconstdecl(inttype, 1);
	}
	else
	{
		result = NULL;
	}

	if(isError) yyerror("error: not int type");

	return result;
}

void connectdecl(struct ste* start)
{
	struct ste* entry = start;
	if(entry)
	{
		while(entry->prev)
		{
			entry->decl->next = entry->prev->decl;
			entry = entry->prev;
		}
	}

	return;
}

void printste(struct ste* start)
{
	struct ste* entry = start;
	fprintf(stderr,"\n");
	while(entry)
	{
		fprintf(stderr,"pointer: %p\n", entry);
		fprintf(stderr,"decl pointer: %p\n", entry->decl);
		fprintf(stderr,"name: %s\n",entry->name->name);
		fprintf(stderr,"class: %d\n",entry->decl->declclass);
		fprintf(stderr,"typeclass: %d\n",entry->decl->typeclass);
		entry = entry->prev;
	}
	fprintf(stderr,"\n");

}

void write_assign(struct decl* lhs, struct decl* rhs)
{
	// push_reg fp
	// push_const 
//	fprintf(codefile, "\tpush_reg fp\n");
//	fprintf(codefile, "\tpush_const %d\n", 1+lhs->offset);
//	fprintf(codefile, "\tadd\n");
//	fprintf(codefile, "\tpush_const %d\n", rhs->value);
//	fprintf(codefile, "\tassign\n");
//	lhs->value = rhs->value;
}



