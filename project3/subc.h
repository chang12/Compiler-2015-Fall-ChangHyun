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
	int				value;			// INT_CONST: value of integer const
	char			charconst;		// CHAR_CONST: value of char const
	char			*string;		// STRING: value of string
	struct ste		*formals;		// FUNC: ptr to formals list
	struct decl		*returntype;	// FUNC: ptr to return TYPE decl
	int				typeclass;		// TYPE: type class: int, array, ptr
	struct decl		*elementvar;	// TYPE(array): ptr to element VAR decl
	int				num_index;		// TYPE(array): number of elements
	struct ste		*fieldlist;		// TYPE(struct): ptr to field list
	struct decl		*ptrto;			// TYPE(pointer): type of the pointer
	struct ste		**scope;		// VAR: scope when VAR declared
	struct decl		*next;			// For list_of_variables declarations
									// Or parameter check of function call
};

struct sse {
	struct ste	*top;
	struct sse	*prev;
}; 

struct sse* cscope;
struct id*	returnid;
struct decl* inttype;
struct decl* chartype;
struct decl* voidtype;

/* 
	For hash table 
	In this project code, only use "enter" function
*/
unsigned hash(char *name);
struct id *enter(int lextype, char *str, int length);
struct id *lookup(char *name);

int read_line();

/*
	Functions used in Project3 
*/
struct decl *maketypedecl(int type);
struct decl *makenumconstdecl(struct decl* type, int value);
struct decl *makecharconstdecl(struct decl* type, char* value);
void declare(struct id* idptr, struct decl* declptr);
void init_type();
struct decl *findcurrentdecl(struct id* name);

// special function for debugging
void printste();

#endif
