#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>

typedef struct _id{
	int tokentype ;
	char *name;
	int count;
} id;

id* enter(int flag, char* str, int length) {

	id* data = (id*)malloc(sizeof(id));
	data->tokentype = flag;
	char* name = (char*)malloc(sizeof(char));
	strcpy(name, str);
	data->name = name;
	data->count = 1;

	ENTRY item;
	ENTRY* result;

	item.key = name;
	item.data = data;

	result = hsearch(item, ENTER);

	return data;

}

void initHash()
{
	int i;

	char* keyWord[]={
		"auto", "break", "case", "char", "continue", "\0"
	};

	for (i=0; strcmp(keyWord[i], "\0")!=0; i++) {
		enter(1, keyWord[i], strlen(keyWord[i]));
	}
}


void main() {

	int is_success;
	is_success = hcreate(100);

	initHash();

	ENTRY item;
	ENTRY* result;
	item.key = "auto";

	result = hsearch(item, FIND);

	id* id_back = result->data;
	int count_back = id_back->count;

	printf("count: %d\n",count_back);




	/*
	Entry* result;

	Entity* entity = (Entity*)malloc(sizeof(Entity));
	entity->count = 1;

	result->data = entity;

	int count_back = (**result).count;

	//Entity* entity_back = result->data;
	//entity_back->count += 1;
	//int count_back = entity_back->count;

	*/
}
