#include <stdio.h>
#include <strings.h>

typedef struct id {
	int tokentype;
	char *name;
	int count;
} id;

id* enter(int flag, char* str, int length);
