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

#define  HASH_TABLE_SIZE   1001

struct id *enter(int lextype, char *str, int length) {
   /* implementaion is almost same with Project1 Code */
   
   /****************************************************
   Use hash table of STL <search.h>
   FOr searching, set name as a key of ENTRY item
   ****************************************************/
   ENTRY item;
   ENTRY* result;

   item.key = str;

   result = hsearch(item, FIND);

   struct id* data;

   /***************************************************************
   1) result isn't null : detected str already exists in hash table
		- return result's data to lexer
   2) result is null : new identifier
   		- make id entity
		- save the id entity in heap
		- save the id entity in hash table
		- return that id entity
   ***************************************************************/
   if(result)
   {
		   data = result->data;
   }
   else
   {
		   data = (struct id*)malloc(sizeof(struct id));

		   data->lextype = lextype;
		   data->name = (char*)malloc(sizeof(char)*length);
		   strncpy(data->name, str, length);

		   item.data = data;
		   item.key = data->name;

		   result = hsearch(item, ENTER);
   }

   return data;

}
