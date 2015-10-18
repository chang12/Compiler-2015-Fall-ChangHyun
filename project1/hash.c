#include "hash.h"
#include <stdio.h>
#include <search.h>
#include <string.h>
#include <stdlib.h>

id* enter(int flag, char* str, int length){
	
	/************************************************
	Copy detected identifier or keyword (str) in heap
	************************************************/
	char* name = (char*)malloc(sizeof(char));
	strcpy(name, str);

	/************************************************
	Use hash table of standard library <search.h>
	For searching, set name as a key of ENTRY item
	************************************************/
	ENTRY item;
	ENTRY* result;

	item.key = name;

	result = hsearch(item, FIND);

	id* data;

	/****************************************************************************
	1) result is not null : detected str already exists in hash table
		- increases count
		- return result's data to print in main function
	2) result is null : new identifier
		- make id entity
		- save the id entity in heap
		- save the id entity in hash table
		- return that id entity
	****************************************************************************/
	if(result)
	{
		data = result->data;
		(data->count)++;
	}
	else
	{
		data = (id*)malloc(sizeof(id));
		
		data->tokentype = flag;
		data->name = name;
		data->count = flag==KEYWORD? 0 : 1;
		
		item.data = data;

		result = hsearch(item, ENTER);
	}

	return data;

};

