#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
//	char errorMsg[50] = "error: ";
//	char* a = (char*)malloc(sizeof(char)*4);
//	a = "abc";

//	yyerror(strcat(errorMsg, strcat(a, " test")));

	int* i;
	*i = 3;
	int* j = NULL;
	bool k = true;
	printf(i&&k? "NOT NULL\n":"NULL\n");
	printf(j&&k? "NOT NULL\n":"NULL\n");


//	fprintf(stderr,"%s",strcat(errorMsg,strcat(a," test")));
//	printf("%s\n",strcat(error,strcat(a, " test")));
}

void yyerror(char *s)
{
	fprintf(stderr,"\n%s\n",s);
}


