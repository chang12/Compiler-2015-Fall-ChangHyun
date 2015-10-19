/***************************************************************
 * File Name    : hash.c
 * Description
 *      This is an implementation file for the open hash table.
 *
 ****************************************************************/

#include "subc.h"
#include <search.h>
#include <stdlib.h>
#include <string.h>

#define  HASH_TABLE_SIZE   101

struct nlist {
   struct nlist *next;
   id *data;
};

static struct nlist *hashTable[HASH_TABLE_SIZE];

unsigned hash(char *name) {
   /* implementation is given here */
}

id *enter(int lextype, char *str, int length) {
   /* implementation is given here */
   
   char* name = (char*)malloc(sizeof(char)*(length+1));
   strncpy(name, str, length);

   ENTRY item;
   ENTRY* result;

   item.key = name;

   result = hsearch(item, FIND);

   id* data;

   if(result)
   {
		   data = result->data;
   }
   else
   {
		   data = (id*)malloc(sizeof(id));

		   data->lextype = lextype;
		   data->name = name;

		   item.data = data;

		   result = hsearch(item, ENTER);
   }

   return data;

}

id *lookup(char *name) {
   /* implementation is given here */
}

