%{
/**************************************************************
* File Name   : subc.l
*
* Description
*	This is a skeleton input file to lex.
*
* Which tool to use
*	The GNU lex-clone, flex/flex++ is recommended to use.
*	It supports a C++ mode.
*	For any information about flex, refer to flex.man.
*
*	Good Luck!
*
***************************************************************/

/**************************************************************/
/* This section will appear at the head of lex.yy.c/lex.yy.cc */
/**************************************************************/
#define KEYWORD 	0
#define IDENFITIER	1

#include "hash.h"
/***************************************************************
{Other useful code segments can be here.}
***************************************************************/
int commentdepth=0;
%}

letter				[A-Za-z_]
alnum				[A-Za-z0-9_]
digit				[0-9]
whitespace			[ \t\n]
integerconstant		([1-9]+{digit}*)|0
floatconstant		{digit}+.{digit}*([eE][+-]?{digit}+)?

ID					{letter}{alnum}+

OP					"("|")"|"["|"]"|"{"|"}"|"->"|"."|","|".."|"\\"|"!"|"~"|"++"|"--"|"*"|"/"|"%"|"+"|"-"|"<<"|">>"|"<"|"<="|">"|">="|"=="|"!="|"&"|"^"|"|"|"&&"|"||"|"?"|":"|";"|"="|"+="|"-="|"*="|"/="|"%="|"&="|"^="|"|="|"<<="|">>="

%start AA BB

%%
{letter}			{printf("Letter");}
{alnum}				{printf("Alnum");}
{floatconstant}		{printf("float!!");}

{OP}				{printf("OP\t%s\n",yytext);}

{ID}				{}

%%


void initHash() 
{
	int i;

	char* keyWord[]={
		"auto", "break", "case", "char", "continue", "default", "do",
		"double", "else", "extern", "float", "for", "goto", "if", "int",
		"long", "register", "return", "short", "sizeof", "static", "struct"
		"switch", "typedef", "union", "unsigned", "void", "while", "\0"
	};

	hcreate(100);

	// Initilize Hash Table with Keywords 
	for (i = 0; strcmp(keyWord[i], "\0") !=0; i++) {
		enter(KEYWORD, keyWord[i], strlen(keyWord[i]));
	}
}

int main(int argc, char** argv)
{
	id* temp;

	++argv;
	--argc;

	if (argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		yyin = stdin;
	}

	initHash();

	BEGIN AA;
	yylex ();

	return 0;
}

