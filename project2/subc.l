%{
/*
 * File Name   : subc.l
 * Description : a skeleton flex input
 */

#include "subc.h"
#include "subc.tab.h"
static int comment_depth = 0;
static int lineno = 1;

%}

/* regular definitions */
letter		[A-Za-z_]
digit		[0-9]
id		{letter}({letter}|{digit})*
integer_const	([1-9]{digit}*)|"0"
white-space		[ \t]+
special-char	\\[nt]


%x COMMENT
%%

"int" 	|
"char"			{ return TYPE; }
"struct" 		{ return STRUCT;}
{integer_const}	{
				   yylval.intVal = atoi(yytext);
				   return INTEGER_CONST;
				}
"return"		{ return RETURN; }
"if"			{ return IF; }
"else"			{ return ELSE; }
"while"			{ return WHILE; }
"for"			{ return FOR; }
"break"			{ return BREAK; }
"continue"		{ return CONTINUE; }
"+="	|
"-="	|
"*="	|
"/="	|
"%="			{ 
					yylval.stringVal = yytext;
					return ASSIGNOP; 
				}
"||"			{ return LOGICAL_OR; }
"&&"			{ return LOGICAL_AND; }
"<"		|
"<="	|
">"		|
">="			{ 
					yylval.stringVal = yytext;
					return RELOP; }
"=="	|
"!="			{ 
					yylval.stringVal = yytext;
					return EQUOP; }
"++"			{ return PLUS_PLUS; }
"--"			{ return MINUS_MINUS; }
"."				{ return STRUCTOP; }


{id}	{
		   id *entered  = enter(ID, yytext, yyleng);
		   yylval.stringVal = entered->name;
		   return entered->lextype;
		}
\"({special-char}|[^\\\"\n])*\"	{
			/* String Variable */
		   yylval.stringVal = yytext;
		   return STRING;
		}
'({special-char}|[^\\'\n])'	{
			/* Character Variable */
		   yylval.stringVal = yytext;
		   return CHAR_CONST;
		}
","		{ return ','; }
";"|"("|")"|"["|"]"|"{"|"}"|"!"|"*"|"/"|"%"|"+"|"-"|"&"|"|"|"=" { return yytext[0]; }


{white-space}
<*>\n		   ++lineno;
<INITIAL,COMMENT>"/*"	{
		   ++comment_depth;
		   BEGIN (COMMENT);
		}
<COMMENT>"*/"	   if(--comment_depth == 0) BEGIN (INITIAL);
<COMMENT>.		 {}


%%

int read_line()
{
   return lineno;
}
   
int main(int argc, char* argv[])
{
   // Create STL hash table
   hcreate(101);

   // Initialize hash table
   static char *keyword[] = { "int", "char", "struct", "return", "if", "else", "while", "for", "break", "continue", NULL };
   static int tokentype[] = { TYPE, TYPE, STRUCT, RETURN, IF, ELSE, WHILE, FOR, BREAK, CONTINUE, 0 };
   int i;
   for(i = 0; keyword[i] != NULL; i++)
      enter(tokentype[i], keyword[i], strlen(keyword[i]));

   if(argc >= 2) yyin = fopen(argv[1], "r");
   else yyin = stdin;
   if(!yyin) {
      printf("Can't open input stream!\n");
      exit(1);
   }
	
   yyparse();
   fclose(yyin);
   return 0;
}
