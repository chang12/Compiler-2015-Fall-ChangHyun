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

/* Token and Types */
%type<boolval>		pointers param_list
%type<declptr>		type_specifier struct_specifier expr or_expr or_list and_expr and_list binary unary const_expr func_decl param_decl args
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
		}
		| type_specifier pointers ID '[' const_expr ']' ';'{
			REDUCE("ext_def -> type_specifier pointers ID '[' const_expr ']' ';'");

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
		| func_decl ';'{
			REDUCE("ext_def -> func_decl ';'");
			if($1)
			{
				if($1->value == 1)
				{
					yyerror("\nerror: function redeclaration\n");
				}
			}
		}
		| type_specifier ';'{
			REDUCE("ext_def -> type_specifier ';'");
		}
		| func_decl compound_stmt{
			if($1) $1->value = 2;
			REDUCE("ext_def -> func_decl compound_stmt");
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
		  	def_list '}'
			{
				struct ste* fields = pop_scope();
				if(findstructdecl($2))
				{
					yyerror("\nerror: redeclaration\n");
					$$ = NULL;
				}
				else declare($2, $$=makestructdecl(fields));
				REDUCE("struct_specifier -> STRUCT ID '{' def_list '}'");
				// 새로운 struct type을 생성함
			}
		| STRUCT ID{
//			REDUCE("struct_specifier -> STRUCT ID");
			// ID로 미리 정의되어있는 struct type 인지 확인한다.
			struct decl* structdecl = findstructdecl($2);
			$$ = NULL;
			if(structdecl) $$ = structdecl;
			else
			{
				yyerror("\nerror: incomplete type error\n");
			}

		}
		;

func_decl
		: type_specifier pointers ID '(' ')'{
			REDUCE("func_decl -> type_specifier pointers ID '(' ')'");
			
			// 존재하는 func 이름인지 확인
			struct decl* funcdecl = findfuncdecl($3);

			if(funcdecl)
			{
				if(check_samereturntype(funcdecl->returntype, $1, $2))
				{
					if(funcdecl->formals)
					{
						yyerror("\nerror: conflicting types for function\n");
						$$ = NULL;
					}
					else if(funcdecl->value == 2)
					{
						yyerror("\nerror: function redeclaration\n");
						$$ = NULL;
					}
					else
					{
						funcdecl->value = 1;
						$$ = funcdecl;
					}
				}
				else
				{
					yyerror("\nerror: conflicting types for function\n");
					$$ = NULL;
				}
			}
			else
			{
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
		}
		| type_specifier pointers ID '(' VOID ')'{
			REDUCE("func_decl -> type_specifier pointers ID '(' VOID ')'");

			// 존재하는 func 이름인지 확인
			struct decl* funcdecl = findfuncdecl($3);

			if(funcdecl)
			{
				if(check_samereturntype(funcdecl->returntype, $1, $2))
				{
					if(funcdecl->formals)
					{
						yyerror("\nerror: conflicting types for function\n");
						$$ = NULL;
					}
					else if(funcdecl->value == 2)
					{
						yyerror("\nerror: function redeclaration\n");
						$$ = NULL;
					}
					else
					{
						funcdecl->value = 1;
						$$ = funcdecl;
					}
				}
				else
				{
					yyerror("\nerror: conflicting types for function\n");
					$$ = NULL;
				}
			}
			else
			{
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
		}
		| type_specifier pointers ID '(' {
			// FUNC declare 는 param_list 를 확인한 뒤로 미룬다
			struct decl* funcdecl = findfuncdecl($3);

			if(funcdecl)
			{
				if(check_samereturntype(funcdecl->returntype, $1, $2))
				{
					if(funcdecl->value == 2)
					{
						yyerror("\nerror: function redeclaration\n");
						$<declptr>$ = NULL;
					}
					else
					{
						funcdecl->value = 1;
						$<declptr>$ = funcdecl;
					}
				}
				else
				{
					yyerror("\nerror: conflicting types for function\n");
					$<declptr>$ = NULL;
				}
				push_scope();
				declare(returnid, funcdecl->returntype);
			}
			else
			{
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
		}
		  param_list ')'{
			REDUCE("func_decl -> type_specifier pointers ID '(' param_list ')'");
			// param_list 받는 과정에서 error가 발생할 수 있다
			// 그러므로 param_list 의 NULL 여부를 체크한다.
			// 그리고 func_decl 에 declptr을 매기는 작업도, 여기서 해준다.

			struct ste*	formals = pop_scope();
			connectdecl(formals);
			struct decl* funcdecl = $<declptr>5;


			bool clear = true;

			if(!funcdecl)
			{
				$$ = NULL;
				clear = false;
			}
			else if(!$6)
			{
				// funcdecl exists, but param_list error
				if(funcdecl->value == 1) funcdecl->value = 0;
				$$ = NULL;
				clear = false;
			}
			else
			{
				if(funcdecl->value == 1)
				{
					if(!check_sameformals(funcdecl->formals->decl, formals->prev->decl))
					{
						yyerror("\nerror: conflicting types for function\n");
						funcdecl->value = 0;
						$$ = NULL;
						clear = false;
					}
				}
			}

			if(clear)
			{
				funcdecl->formals = formals->prev;
				$$ = funcdecl;
				declare($3, funcdecl);
			}
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
			$$ = $1;
		}
		| param_list ',' param_decl{
			REDUCE("param_list -> param_list ',' param_decl");
			$$ = $1 && $3;
		}
		;

param_decl  /* formal parameter declaration */
		: type_specifier pointers ID{
			REDUCE("param_decl -> type_specifier pointers ID");
			// ID 값으로 동일 scope에 존재하는 값인지 여부 체크
			// 재정의하면 error
			struct decl* declptr = findcurrentdecl($3);
			if(declptr)
			{
				// 동일 name으로 존재하더라도, struct 정의라면 허용한다.
				// ex) struct a{}; 하고 int a; 해도 문제 X
				// 그러므로 findcurrentdecl로 반환된 declclass 까지 반환한다.
				// 위의 내용을 findcurrentdecl 에서 수행하도록 옮겼다.
				char errorMsg[100] = "\nerror: redeclaration of \n";
				yyerror(strcat(errorMsg, strcat($3->name,"\n")));
				$$ = NULL;
			}
			else
			{
				if($1)
				{
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
			}
		}
		| type_specifier pointers ID '[' const_expr ']'{
			REDUCE("param_decl -> type_specifier pointers ID '[' const_expr ']'");
			// ID integrity
			struct decl* declptr = findcurrentdecl($3);
			if(declptr)
			{
				char errorMsg[100] = "\nerror: redeclaration of ";
				yyerror(strcat(errorMsg, strcat($3->name,"\n")));
				$$ = NULL;
			}
			else
			{
				$$ = NULL;
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
								struct decl* declptr = makeconstdecl(makearraydecl(elementvar));
								declare($3, declptr);
								$$ = declptr;
							}
						}
					}
					
				}
			}
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
			if($1)
			{
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
			}
			REDUCE("def -> type_specifier pointers ID");
		}
		| type_specifier pointers ID '[' const_expr ']' ';'{
			REDUCE("def -> type_specifier pointers ID '[' const_expr ']' ';'");

			if($1)
			{
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
		}
		| type_specifier ';'{
			REDUCE("def -> type_specifier ';'");
		}
		| func_decl ';'{
			REDUCE("def -> func_decl ';'");
		}	
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

		} local_defs stmt_list '}'{
			REDUCE("compound_stmt -> '{' local_defs stmt_list '}'");
			pop_scope();
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
			struct decl* type = findwholedecl(returnid);
			if(type != voidtype) 
			{
				yyerror("\nerror: return value is not return type\n");
			}
		}
		| RETURN expr ';'{
			REDUCE("stmt -> RETURN expr ';'");
			struct decl* type = findwholedecl(returnid);
			if($2)
			{
				if(!check_compatibletype($2->type, type))
				{
					yyerror("\nerror: return value is not return type\n");
				}	
			}
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
			printste(cscope->top);
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
				if(check_compatibledecl($1, $3)) $$ = $1;
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
			$$ = logicaltype($1, $3);
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
			$$ = logicaltype($1, $3);
		}
		| binary{
			REDUCE("and_list -> binary");
		}
		;

binary
		: binary RELOP binary{
			REDUCE("binary -> binary RELOP binary");
			$$ = optype($1, $3);
		}
		| binary EQUOP binary{
			REDUCE("binary -> binary EQUOP binary");
			$$ = optype($1, $3);
		}
		| binary '+' binary{
			REDUCE("binary -> binary '+' binary");
			$$ = plustype($1, $3);
		}
		| binary '-' binary{
			REDUCE("binary -> binary '-' binary");
			$$ = minustype($1, $3);
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
			
			struct decl* declptr = findwholedecl($1);

			if(!declptr) yyerror("\nerror: not declared\n");

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
			if(!($$=checkINCOPDECOP($1))) yyerror("\nerror: not char,int,ptr\n");
		}
		| unary DECOP{
			REDUCE("unary -> unary DECOP");
			if(!($$=checkINCOPDECOP($1))) yyerror("\nerror: not char,int,ptr\n");
		}
		| INCOP unary{
			REDUCE("unary -> INCOP unary");
			if(!($$=checkINCOPDECOP($2))) yyerror("\nerror: not char,int,ptr\n");
		}
		| DECOP unary{
			REDUCE("unary -> DECCOP unary");
			if(!($$=checkINCOPDECOP($2))) yyerror("\nerror: not char,int,ptr\n");
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
			$$ = structaccess($1, $3);
		}
		| unary STRUCTOP ID{
			REDUCE("unary -> unary STRUCTOP ID");
			$$ = structptraccess($1, $3);
		}
		| unary '(' args ')'{
			REDUCE("unary -> unary '(' args ')'");
			$$ = check_funccall($1, $3);

		}
		| unary '(' ')'{
			REDUCE("unary -> unary '(' ')'");
			$$ = check_funccall($1, NULL);
		}
		;

args    /* actual parameters(function arguments) transferred to function */
		: expr{
			REDUCE("args -> expr");
			if($1)
			{
				$$ = copydecl($1);
			}
		}
		| expr ',' args{
			REDUCE("args -> args ',' expr");
			if($1 && $3) 
			{
				$1->next = $3;
				$$ = $1;
			}
			else $$ = NULL;
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
	if(isInt || isChar || isPtr) return target;
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
		yyerror("\nerror: not a function\n");
		return NULL;
	}
	else if(!funcdecl->formals)
	{
		if(!args) return makeconstdecl(funcdecl->returntype);
		else
		{
			yyerror("\nerror: actual args are not equal to formals args\n");
			return NULL;
		}
	}
	else if(!check_sameformals(funcdecl->formals->decl, args))
	{
		yyerror("\nerror: actual args are not equal to formals args\n");
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
		else yyerror("\nerror: not a int type index\n");
	}
	else
	{
		yyerror("\nerror: not array type\n");
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
		else yyerror("\nstruct do not have same field\n");
	}
	else yyerror("\nerror: variable is not struct\n");

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
		else yyerror("\nerror: variable is not struct pointer\n");
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

	if(isError) yyerror("\nerror: not computable\n");

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

	if(isError) yyerror("\nerror: not computable\n");

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
		yyerror("\nerror: not computable\n");
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

	if(isError) yyerror("\nerror: not int type\n");

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
		fprintf(stderr,"name: %s\n",entry->name->name);
		fprintf(stderr,"class: %d\n",entry->decl->declclass);
		fprintf(stderr,"typeclass: %d\n",entry->decl->typeclass);
		entry = entry->prev;
	}
	fprintf(stderr,"\n");

}


