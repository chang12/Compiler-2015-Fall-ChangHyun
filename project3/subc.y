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
%left 	'[' ']' '(' ')' '.' STRUCTOP

/* Token and Types */
%type<boolval>		pointers
%type<declptr>		type_specifier struct_specifier expr or_expr or_list and_expr and_list binary unary const_expr
%token<idptr> 		TYPE VOID STRUCT RETURN IF ELSE WHILE FOR BREAK CONTINUE ID
%token				PRINT
%token<stringval>	CHAR_CONST STRING STRUCTOP LOGICAL_OR LOGICAL_AND RELOP EQUOP INCOP DECOP
%token<intval>		INTEGER_CONST

%%
program
		: ext_def_list{
			REDUCE("program -> ext_def_list");
		}	
		;

ext_def_list
		: ext_def_list ext_def{
			REDUCE("ext_def_list -> ext_def_list ext_def");
		}
		| /* empty */{
			REDUCE("ext_def_list -> epsilon");
		}
		;

ext_def
		: type_specifier pointers ID ';'{
			REDUCE("ext_def -> type_specifier pointers ID ';'");
		}
		| type_specifier pointers ID '[' const_expr ']' ';'{
			REDUCE("ext_def -> type_specifier pointers ID '[' const_expr ']' ';'");
		}
		| func_decl ';'{
			REDUCE("ext_def -> func_decl ';'");			
		}
		| type_specifier ';'{
			REDUCE("ext_def -> type_specifier ';'");
		}
		| func_decl compound_stmt{
			REDUCE("ext_def -> func_decl compound_stmt");
		}
		| PRINT{
			printste();
		}
		;

type_specifier
		: TYPE{
			REDUCE("type_specifier -> TYPE");
			if(!strcmp($1->name,"int")) $$ = inttype;
			else if(!strcmp($1->name,"char")) $$ = chartype;
			else $$ = NULL;
		}
		| VOID{
			REDUCE("type_specifier -> VOID");
			$$ = voidtype;
		}
		| struct_specifier{
			REDUCE("type_specifier -> struct_specifier");
		}
		;

struct_specifier
		: STRUCT ID '{' 
			{
				push_scope();	
			}
		  	def_list
			{
				// 여기서 ID는 VAR의 ID가 아니라, struct type을 나타내는 ID
				struct ste* fields = pop_scope();
				$<declptr>$ = NULL;
				if(findstructdecl($2)) yyerror("\n2 error: redeclaration(struct)\n");
				else declare($2, ($<declptr>$=makestructdecl(fields)));
			}
			'}'
			
			{
				$$ = $<declptr>6;
				REDUCE("struct_specifier -> STRUCT ID '{' def_list '}'");
				// 새로운 struct type을 생성함
			}
		| STRUCT ID{
			REDUCE("struct_specifier -> STRUCT ID");
			// ID로 미리 정의되어있는 struct type 인지 확인한다.
			struct decl* structdecl = findstructdecl($2);
			$$ = NULL;
			if(structdecl) $$ = structdecl;
			else
			{
				char errorMsg[50] = "\nerror: struct ";
				yyerror(strcat(errorMsg, strcat($2->name, " is not defined\n")));
			}

		}
		;

func_decl
		: type_specifier pointers ID '(' ')'{
			REDUCE("func_decl -> type_specifier pointers ID '(' ')'");
		}
		| type_specifier pointers ID '(' VOID ')'{
			REDUCE("func_decl -> type_specifier pointers ID '(' VOID ')'");
		}
		| type_specifier pointers ID '(' param_list ')'{
			REDUCE("func_decl -> type_specifier pointers ID '(' param_list ')'");
		}
	;

pointers
		: '*'{
			REDUCE("pointers -> '*'");
			$$ = true;
		}
		| /* empty */{
			REDUCE("pointers -> epsilon");
			$$ = false;
		}
		;

param_list  /* list of formal parameter declaration */
		: param_decl{
			REDUCE("param_list -> param_decl");
		}
		| param_list ',' param_decl{
			REDUCE("param_list -> param_list ',' param_decl");
		}
		;

param_decl  /* formal parameter declaration */
		: type_specifier pointers ID{
			REDUCE("param_decl -> type_specifier pointers ID");
		}
		| type_specifier pointers ID '[' const_expr ']'{
			REDUCE("param_decl -> type_specifier pointers ID '[' const_expr ']'");
		}
		;

def_list    /* list of definitions, definition can be type(struct), variable, function */
		: def_list def{
			REDUCE("def_list -> def_list def");
		}
		| /* empty */{
			REDUCE("def_list -> epsilon");
		}
		;

def
		: type_specifier pointers ID ';'{
			// ID 값으로 동일 scope에 존재하는 값인지 여부 체크
			// 재정의하면 error
			struct decl* declptr = findcurrentdecl($3);
			if(declptr)
			{
				// 동일 name으로 존재하더라도, struct 정의라면 허용한다.
				// ex) struct a{}; 하고 int a; 해도 문제 X
				// 그러므로 findcurrentdecl로 반환된 declclass 까지 반환한다.
				// 위의 내용을 findcurrentdecl 에서 수행하도록 옮겼다.
				char errorMsg[100] = "\nerror: redeclaration of ";
				yyerror(strcat(errorMsg, strcat($3->name,"\n")));
			}
			else
			{
				if($1)
				{
					if($2)
					{
						// VAR PTR
						declare($3, makevardecl(makeptrdecl(makevardecl($1))));
					}
					else
					{
						// VAR
						declare($3, makevardecl($1));
					}
				}
			}
			REDUCE("def -> type_specifier pointers ID");
		}
		| type_specifier pointers ID '[' const_expr ']' ';'{
			REDUCE("def -> type_specifier pointers ID '[' const_expr ']' ';'");
			// ID integrity
			struct decl* declptr = findcurrentdecl($3);
			if(declptr)
			{
				char errorMsg[100] = "\nerror: redeclaration of ";
				yyerror(strcat(errorMsg, strcat($3->name,"\n")));
			}
			else
			{
				// TYPE integrity
				if($1)
				{
					// Array size integrity
					if($5)
					{
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
					
				}
			}
		}
		| type_specifier ';'{
			REDUCE("def -> type_specifier ';'");
		}
		| func_decl ';'{
			REDUCE("def -> func_decl ';'");
		}
		| PRINT{
			printste();
		}
		;

compound_stmt
		: '{' local_defs stmt_list '}'{
			REDUCE("compound_stmt -> '{' local_defs stmt_list '}'");
		}
		;

local_defs  /* local definitions, of which scope is only inside of compound statement */
		:	def_list{
			REDUCE("local_defs -> def_list");
		}
		;

stmt_list
		: stmt_list stmt{
			REDUCE("stmt_list -> stmt_list stmt");
		}
		| /* empty */{
			REDUCE("stmt_list -> epsilon");
		}
		;

stmt
		: expr ';'{
			REDUCE("stmt -> expr");
		}
		| compound_stmt{
			REDUCE("stmt -> compound_stmt");
		}
		| RETURN ';'{
			REDUCE("stmt -> RETURN ';'");
		}
		| RETURN expr ';'{
			REDUCE("stmt -> RETURN expr ';'");
		}
		| ';'{
			REDUCE("stmt -> ';'");
		}
		| IF '(' expr ')' stmt{
			REDUCE("stmt -> IF '(' expr ')' stmt");
		}
		| IF '(' expr ')' stmt ELSE stmt{
			REDUCE("stmt -> IF '(' expr ')' stmt ELSE stmt");
		}
		| WHILE '(' expr ')' stmt{
			REDUCE("stmt -> WHILE '(' expr ')' stmt");
		}
		| FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt{
			REDUCE("stmt -> FOR '(' expr_E ';' expr_e ';' expr_e ')' stmt");
		}
		| BREAK ';'{
			REDUCE("stmt -> BREAK ';'");
		}
		| CONTINUE ';'{
			REDUCE("stmt -> CONTINUE ';'");
		}
		| PRINT{
			printste();
		}
		;

expr_e
		: expr{
			REDUCE("expr_e -> expr");
		}
		| /* empty */{
			REDUCE("expr_e -> epsilon");
		}
		;

const_expr
		: expr{
			REDUCE("const_expr -> expr");
		}
		;

expr
		: unary '=' expr{
			bool result = false;
			if(check_is_var($1))
			{
				if(check_compatible($1, $3)) $$ = $1;
				else
				{
					yyerror("\nerror: LHS and RHS are not same type\n");
					$$ = NULL;
				}
			}
			else
			{
				yyerror("\nerror: LHS is not a varaible\n");
				$$ = NULL;
			}
			REDUCE("expr -> unary '=' expr");
		}
		| or_expr{
			REDUCE("expr -> or_expr");
		}
		;

or_expr
		: or_list{
			REDUCE("or_expr -> or_list");
		}
		;

or_list
		: or_list LOGICAL_OR and_expr{
			REDUCE("or_list -> or_list LOGICAL_OR and_expr");
		}
		| and_expr{
			REDUCE("or_list -> and_expr");
		}
		;

and_expr
		: and_list{
			REDUCE("and_expr -> and_list");
		}
		;

and_list
		: and_list LOGICAL_AND binary{
			REDUCE("and_list -> and_list LOGICAL_AND binary");
		}
		| binary{
			REDUCE("and_list -> binary");
		}
		;

binary
		: binary RELOP binary{
			REDUCE("binary -> binary RELOP binary");
		}
		| binary EQUOP binary{
			REDUCE("binary -> binary EQUOP binary");
		}
		| binary '+' binary{
			REDUCE("binary -> binary '+' binary");
		}
		| binary '-' binary{
			REDUCE("binary -> binary '-' binary");
		}
		| unary %prec '='{
			REDUCE("binary -> unary");
		}
		;

unary
		: '(' expr ')'{
			REDUCE("unary -> '(' expr ')'");
			$$ = $2;
		}
		| '(' unary ')'{
			REDUCE("unary -> '(' unary ')'");
			$$ = $2;
		} 
		| INTEGER_CONST{
			REDUCE("unary -> INTEGER_CONST");
			$$ = makenumconstdecl(inttype, $1);
		}
		| CHAR_CONST{
			REDUCE("unary -> CHAR_CONST");
			$$ = makecharconstdecl(chartype, $1);
		}
		| STRING{
			REDUCE("unary -> STRING");
			$$ = makestringconstdecl(stringtype, $1);
		}
		| ID{
			REDUCE("unary -> ID");

			// ID에 대응되는 decl이 없다면, findcurrentdecl은 NULL을 리턴
			
			// debug
	


			struct decl* declptr = findcurrentdecl($1);

			char errorMsg[100] = "\nerror: undefined variable ";

			declptr? : yyerror(strcat(errorMsg, strcat($1->name, "\n")));
			$$ = declptr;
		}
		| '-' unary	%prec '!'{
			REDUCE("unary -> '-' unary");
			// $2 는 integer여야 한다
			if($2->type==inttype) $$ = $2;
			else
			{
				yyerror("\nerror: not int type\n");
				$$ = NULL;
			}
		}
		| '!' unary{
			REDUCE("unary -> '!' unary");
			if($2->type==inttype) $$ = $2;
			else
			{
				yyerror("\nerror: not int type\n");
				$$ = NULL;
			}
		}
		| unary INCOP{
			REDUCE("unary -> unary INCOP");
			$$ = checkINCOPDECOP($1);
		}
		| unary DECOP{
			REDUCE("unary -> unary DECOP");
			$$ = checkINCOPDECOP($1);
		}
		| INCOP unary{
			REDUCE("unary -> INCOP unary");
			$$ = checkINCOPDECOP($2);
		}
		| DECOP unary{
			REDUCE("unary -> DECCOP unary");
			$$ = checkINCOPDECOP($2);
		}
		| '&' unary	%prec '!'{
			REDUCE("unary -> '&' unary");
			if(check_is_var($2))
			{
				$$ = makeconstdecl(makeptrdecl($2));
			}
			else
			{
				$$ = NULL;
			}
		}
		| '*' unary	%prec '!'{
			REDUCE("unary -> '*' unary");
			if(check_is_var($2))
			{
				if($2->type->typeclass==PTR) $$ = $2->type->ptrto;
			}
			else $$ = NULL;

		}
		| unary '[' expr ']'{
			REDUCE("unary -> unary '[' expr ']'");
			// RHS의 unary는 const 이고, type의 typeclass는 array 인가?
			// expr는 int type VAR 이거나, INT_CONST 인가?
			// 조건을 충족한다면, elementvar로 VAR을 넘겨준다.
			
			$$ = arrayaccess($1, $3);
		}
		| unary '.' ID{
			REDUCE("unary -> unary '.' ID");
		}
		| unary STRUCTOP ID{
			REDUCE("unary -> unary STRUCTOP ID");
		}
		| unary '(' args ')'{
			REDUCE("unary -> unary '(' args ')'");
		}
		| unary '(' ')'{
			REDUCE("unary -> unary '(' ')'");
		}
		;

args    /* actual parameters(function arguments) transferred to function */
		: expr{
			REDUCE("args -> expr");
		}
		| args ',' expr{
			REDUCE("args -> args ',' expr");
		}
		;

%%

/*  Additional C Codes 
 	Implemnt REDUCE function here */

int yyerror (char* s)
{
	fprintf (stderr, "%s\n", s);
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
}

struct ste* pop_scope()
{
	struct ste* result = NULL;
	struct ste* currtop = cscope->top;

	while(cscope->top!=cscope->prev->top)
	{
		cscope->top = currtop->prev;
		currtop->prev = result;
		result = currtop;
		currtop = cscope->top;
	}
	
	struct sse* temp = cscope;
	cscope = cscope->prev;
	free(temp);

	return result;
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

	return result;
}

struct decl* makeptrdecl(struct decl* vardecl)
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
	result->ptrto = vardecl;
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

	return result;
}

struct decl	*makestructdecl(struct decl* fields)
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
	char* string = (char*)malloc(sizeof(char)*(length+1));
	strncpy(string, value, length);

	result->declclass = CONST;
	result->type = type;
	result->value = 0;
	result->charconst = '\0';
	result->string = string;
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
	entry->name = idptr;
	entry->decl = declptr;
	entry->prev = cscope->top;
	cscope->top = entry;
//	printf("entry: %p\n", entry);
//	printf("top: %p\n", cscope->top);
	return;
}


void init_type()
{
	cscope = (struct sse*)malloc(sizeof(struct sse));
	cscope->prev = NULL;
	cscope->top = NULL;
	inttype = maketypedecl(INT);
	chartype = maketypedecl(CHAR);
	voidtype = maketypedecl(VOID);

	declare(enter(TYPE, "int", 3), inttype);
	declare(enter(TYPE, "char", 4), chartype);
	declare(enter(VOID, "void", 4), voidtype);
	
	returnid = enter(ID, "*return", 7);

	// TEST
//	char* s = ("abcedfg%s","xyz");
//	printf("%s",s);
//	struct ste* temp1 = NULL;
//	struct ste* temp2 = NULL;
//	printf("NULL test\n");
//	printf(temp1==temp2? "true\n" : "false\n");
//	struct ste* temp1 = cscope->top;
//	struct ste* temp2 = temp1->prev;
//	printf("temp1: %p\n", temp1);
//	printf("temp2: %p\n", temp2);
//	struct ste* temp3 = cscope->top;
//	printf(temp1==temp3? "true\n" : "false\n");
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
//		if((entry->name==name)&&(entry->decl->typeclass==STRUCT)) break;
		else entry = entry->prev;
	}
	return entry? entry->decl : NULL;
}

struct decl* checkINCOPDECOP(struct decl* target)
{
	bool isInt = (target->type==inttype);
	bool isChar = (target->type==chartype);
	bool isPtr = (target->type->typeclass==PTR);
	if(isInt || isChar || isPtr) return target;
	else return NULL;
}

bool check_is_var(struct decl* target)
{
	if(target->declclass==VAR) return true;
	else return false;
}

bool check_is_array(struct decl* declptr)
{
	bool result = false;
	if(declptr->declclass==CONST)
	{
		if(declptr->type->typeclass==ARRAY) result = true;
	}
	if(!result) yyerror("\nerror: not array type \n");
	return result;
}

bool check_is_struct_type(struct decl* target)
{
	bool result = false;
	if(check_is_var(target))
	{
		if(target->type->typeclass==STRUCT) result = true;
	}
	return result;
}

bool check_compatible(struct decl* declptr1, struct decl* declptr2)
{
	bool result = false;

	if(declptr1 && declptr2) 
	{
		if(declptr1->type==declptr2->type) result = true;
		else if((declptr1->type->typeclass==PTR)&&(declptr2->type->typeclass==PTR))
		{
			
			if(declptr1->type->ptrto->type==declptr2->type->ptrto->type) result = true;	
		}

	}
		
	return result;
}

struct decl* arrayaccess(struct decl* arrayptr, struct decl* indexptr)
{

	struct decl* result = NULL;

	if(check_is_array(arrayptr))
	{
		if(indexptr->type == inttype) result = arrayptr->type->elementvar;
		else yyerror("\nerror: not a int type index\n");
	}
}

void printste()
{
	struct ste* entry;
	for(entry=cscope->top;entry;entry=entry->prev)
	{
		printf("%p\t%p\t%s\t%d\t%d\n", entry, entry->name, entry->name->name,entry->decl->declclass,entry->decl->typeclass);
	}
	printf("\n");
	printf("cscope: %s\n",cscope->top->name->name);
}


