/******************************************************
 * File Name   : subc.h
 * Description
 *    This is a header file for the subc program.
 ******************************************************/

#ifndef __SUBC_H__
#define __SUBC_H__

#include <stdio.h>
#include <strings.h>

/* 
	structure for ID 
	define id as type named id
*/
typedef struct id {
      char *name;
      int lextype;
} id;

/* 
	For hash table 
	In this project code, only use "enter" function
*/
unsigned hash(char *name);
id *enter(int lextype, char *str, int length);
id *lookup(char *name);

int read_line();

#endif
