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
struct id {
	char	*name;
	int		lextype;
};

struct ste {
	struct id	*name;
	struct decl	*decl;
	struct ste	*prev;
};

struct decl {
	int				declclass;		// DECL Class: VAR, CONST, FUNC, TYPE
	struct decl		*type;			// VAR, CONST: pointer to its type decl
	int				value;			// CONST: value of integer const
	float			real_value;		// CONST: value of float const
	struct ste		*formals;		// FUNC: ptr to formals list
	struct decl		*returntype;	// FUNC: ptr to return TYPE decl
	int				typeclass;		// TYPE: type class: int, array, ptr
	struct decl		*elementvar;	// TYPE(array): ptr to element VAR decl
	int				num_indev;		// TYPE(array): number of elements
	struct ste		*fieldlist;		// TYPE(struct): ptr to field list
	struct decl		*ptrto;			// TYPE(pointer): type of the pointer
	int				size;			// ALL: size in bytes
	struct ste		**scope;		// VAR: scope when VAR declared
	struct decl		*next;			// For list_of_variables declarations
									// Or parameter check of function call
};
/* 
	For hash table 
	In this project code, only use "enter" function
*/
unsigned hash(char *name);
struct id *enter(int lextype, char *str, int length);
struct id *lookup(char *name);

int read_line();

#endif
