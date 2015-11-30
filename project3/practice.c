#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int foo(int x, int y);

int foo(int x, int z)
{
	return x+z;
}


struct a{
	int* x;
	int y;
};

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

	printf("%d\n",foo(2,3));

	/*
	int* heapint = (int*)malloc(sizeof(int));
	*heapint = 100;

	struct a str1;
	str1.x = heapint;
	str1.y = 10;
	struct a str2;
	str2.x = heapint;
	str2.y = 10;

	printf("%d\n",*str1.x);
	printf("%d\n",*str2.x);
*/

//	fprintf(stderr,"%s",strcat(errorMsg,strcat(a," test")));
//	printf("%s\n",strcat(error,strcat(a, " test")));
}

void yyerror(char *s)
{
	fprintf(stderr,"\n%s\n",s);
}


