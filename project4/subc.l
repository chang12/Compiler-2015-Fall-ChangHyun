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

"write_int" 	{ return WRITE_INT; }

{id}	{
		   struct id *entered  = enter(ID, yytext, yyleng);
		   yylval.idptr = entered;
		   return entered->lextype;
		}

{integer_const}	{
				   yylval.intval = atoi(yytext);
				   return INTEGER_CONST;
				}
"||"			{ return LOGICAL_OR; }
"&&"			{ return LOGICAL_AND; }
"<"		|
"<="	|
">"		|
">="			{ 
					yylval.stringval = yytext;
					return RELOP; }
"=="	|
"!="			{ 
					yylval.stringval = yytext;
					return EQUOP; }
"++"			{ return INCOP; }
"--"			{ return DECOP; }
"->"			{ return STRUCTOP; }

\"({special-char}|[^\\\"\n])*\"	{
			/* String Variable */
		   yylval.stringval = yytext;
		   return STRING;
		}
'({special-char}|[^\\'\n])'	{
			/* Character Variable */
		   yylval.stringval = yytext;
		   return CHAR_CONST;
		}
","		{ return ','; }
";"|"("|")"|"["|"]"|"{"|"}"|"!"|"*"|"/"|"%"|"+"|"-"|"&"|"|"|"="|"." { return yytext[0]; }


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

void write_startup_code()
{
	fprintf(codefile, "\tshift_sp 1\n");
	fprintf(codefile, "\tpush_const EXIT\n");
	fprintf(codefile, "\tpush_reg fp\n");
	fprintf(codefile, "\tpush_reg sp\n");
	fprintf(codefile, "\tpop_reg fp\n");
	fprintf(codefile, "\tjump main\n");
	fprintf(codefile, "EXIT:\n");
	fprintf(codefile, "\texit\n");
}
   
int main(int argc, char* argv[])
{
   // Create STL hash table
   hcreate(101);

   // Initialize hash table
   static char *keyword[] = { "int", "char", "void", "struct", "return", "if", "else", "while", "for", "break", "continue", NULL, "write_int"};
   static int tokentype[] = { TYPE, TYPE, VOID, STRUCT, RETURN, IF, ELSE, WHILE, FOR, BREAK, CONTINUE, 0, WRITE_INT};
   int i;
   for(i = 0; keyword[i] != NULL; i++)
      enter(tokentype[i], keyword[i], strlen(keyword[i]));

   init_type();

   if(argc >= 2) 
   {
   	  yyin = fopen(argv[1], "r");

	  filename = (char*)malloc(sizeof(char)*(strlen(argv[1])));
	  strcpy(filename, argv[1]);
	  filename[strlen(filename)-1]='s';

	  codefile = fopen(filename, "w");
	  write_startup_code();
   }
   else 
   {
   	  yyin = stdin;
	  filename = NULL;
   }
   if(!yyin) {
      printf("Can't open input stream!\n");
      exit(1);
   }
	
   yyparse();
   fclose(yyin);
   fclose(codefile);
   return 0;
}
