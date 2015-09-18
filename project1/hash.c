#include <subc.h>
#include <search.h>
#include <string.h>

id* enter(int flag, char* str, int length){
	id* data = (id*)malloc(sizeof(id));
	data->tokentype = flag;
	char* name = (char*)malloc(length);
	strcpy(*name, *str);
	data->name = name;
	data->count = 0;

	ENTRY item;
	item.key = name;
	item.data = data;

	return hsearch(item,ENTER);
};
