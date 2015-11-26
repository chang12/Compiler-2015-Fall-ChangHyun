%{
/*
 * File Name   : subc.y
 * Description : a skeleton bison input
 */

#include "subc.h"
#define INT 	100
#define CHAR	101

int    yylex ();
int    yyerror (char* s);
void 	REDUCE(char* s);

%}

/* yylval types */
%union {
	int				intval;
	char			*stringval;
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
%type<declptr>		unary
%token<idptr> 		TYPE VOID STRUCT RETURN IF ELSE WHILE FOR BREAK CONTINUE
%token				PRINT
%token<stringval>	ID CHAR_CONST STRING STRUCTOP LOGICAL_OR LOGICAL_AND RELOP EQUOP INCOP DECOP
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
			printf("TYPE: %p\n",$1);
			yyerror("!!!! practice !!!!");
		}
		| VOID{
			REDUCE("type_specifier -> VOID");
		}
		| struct_specifier{
			REDUCE("type_specifier -> struct_specifier");
		}
		;

struct_specifier
		: STRUCT ID '{' def_list '}'{
			REDUCE("struct_specifier -> STRUCT ID '{' def_list '}'");
		}
		| STRUCT ID{
			REDUCE("struct_specifier -> STRUCT ID");
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
		}
		| /* empty */{
			REDUCE("pointers -> epsilon");
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
			REDUCE("def -> type_specifier pointers ID");
		}
		| type_specifier pointers ID '[' const_expr ']' ';'{
			REDUCE("def -> type_specifier pointers ID '[' const_expr ']' ';'");
		}
		| type_specifier ';'{
			REDUCE("def -> type_specifier ';'");
		}
		| func_decl ';'{
			REDUCE("def -> func_decl ';'");
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
		}
		| '(' unary ')'{
			REDUCE("unary -> '(' unary ')'");
		} 
		| INTEGER_CONST{
			REDUCE("unary -> INTEGER_CONST");
			$$ = makenumconstdecl(inttype, $1);
		}
		| CHAR_CONST{
			REDUCE("unary -> CHAR_CONST");
		}
		| STRING{
			REDUCE("unary -> STRING");
		}
		| ID{
			REDUCE("unary -> ID");
		}
		| '-' unary	%prec '!'{
			REDUCE("unary -> '-' unary");
		}
		| '!' unary{
			REDUCE("unary -> '!' unary");
		}
		| unary INCOP{
			REDUCE("unary -> unary INCOP");
		}
		| unary DECOP{
			REDUCE("unary -> unary DECOP");
		}
		| INCOP unary{
			REDUCE("unary -> INCOP unary");
		}
		| DECOP unary{
			REDUCE("unary -> DECCOP unary");
		}
		| '&' unary	%prec '!'{
			REDUCE("unary -> '&' unary");
		}
		| '*' unary	%prec '!'{
			REDUCE("unary -> '*' unary");
		}
		| unary '[' expr ']'{
			REDUCE("unary -> unary '[' expr ']'");
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

struct decl	*maketypedecl(int type)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = TYPE;
	result->type = NULL;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = type;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

//	printf("result: %p\n", result)
	return result;
}

struct decl	*makenumconstdecl(struct decl* type, int value)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = INTEGER_CONST;
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

	result->declclass = CHAR_CONST;
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

	declare(enter(ID, "int", 3), inttype);
	declare(enter(ID, "char", 4), chartype);
	declare(enter(ID, "void", 4), voidtype);
	
	returnid = enter(ID, "*return", 7);
}

struct decl *findcurrentdecl(struct id* name)
{
	struct ste* entry = cscope->top;

	while(entry)
	{
		if(entry->name==name) break;
		else entry = entry->prev;
	}

	return entry->decl;
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


