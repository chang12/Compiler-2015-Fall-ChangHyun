#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
//	char errorMsg[50] = "error: ";
//	char* a = (char*)malloc(sizeof(char)*4);
//	a = "abc";

//	yyerror(strcat(errorMsg, strcat(a, " test")));

	struct a{
		int b;
		int c;
	};

	struct a b;
	b.b = 3;
	b.c = 5;

	printf("%d\n",b.b);
	b.b = 100;
	printf("%d\n",(&b)->b);

//	fprintf(stderr,"%s",strcat(errorMsg,strcat(a," test")));
//	printf("%s\n",strcat(error,strcat(a, " test")));
}

void yyerror(char *s)
{
	fprintf(stderr,"\n%s\n",s);
}


