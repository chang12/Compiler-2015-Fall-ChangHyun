#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	char a[100] = "test";
	char *b = " my";
	// yyerror(strcat(a, b));
	printf("%s\n",strcat(a,b));
}

void yyerror(char *s)
{
	fprintf(stderr,"\n%s\n",s);
}


