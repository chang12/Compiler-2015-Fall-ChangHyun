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

	int a[10];
	int i;
	for(i=0;i<10;i++) a[i] = 3;

	fprintf(stderr,"%p\n",a);
	a[5] = 4;
	fprintf(stderr,"%d\n",*(a+5));
}

void yyerror(char *s)
{
	fprintf(stderr,"\n%s\n",s);
}


