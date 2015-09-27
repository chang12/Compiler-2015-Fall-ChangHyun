#include "hash.h"
#include <stdio.h>
#include <search.h>
#include <string.h>
#include <stdlib.h>

id* enter(int flag, char* str, int length){

	if(flag==0){
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
	} else{
		

	};

};
