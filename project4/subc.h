/******************************************************
 * File Name   : subc.h
 * Description
 *    This is a header file for the subc program.
 ******************************************************/

#ifndef __SUBC_H__
#define __SUBC_H__

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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
	int			 offset;
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
	int				size;			
	int 			offset;
};

struct sse {
	struct ste	*top;
	struct sse	*prev;
};

struct ose {
	int 		 offset;
	struct ose 	*prev;
};

struct sse* cscope;
struct ose* coffset;
char* 		clabel;
struct id*	returnid;
struct decl* inttype;
struct decl* chartype;
struct decl* stringtype;
struct decl* voidtype;

char* filename;
FILE* codefile;

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
void push_scope();
struct ste* pop_scope();
void push_stelist(struct ste* formals);

struct decl* makevardecl(struct decl* type);
struct decl* makeptrdecl(struct decl* ptrtodecl);
struct decl* makearraydecl(struct decl* elementvar);
struct decl* maketypedecl(int typeclass);
struct decl* makestructdecl(struct ste* fields);
struct decl* makefuncdecl(struct decl* returntypedecl);
struct decl* makeconstdecl(struct decl* type);
struct decl* makenumconstdecl(struct decl* type, int value);
struct decl* makecharconstdecl(struct decl* type, char* value);
struct decl* makestringconstdecl(struct decl* type, char* value);

struct decl* checkINCOPDECOP(struct decl* target);
bool check_is_var(struct decl* target);
bool check_is_const(struct decl* target);
bool check_is_int(struct decl* target);
bool check_is_ptr(struct decl* target);
bool check_is_type(struct decl* target);
bool check_is_char(struct decl* target);
bool check_is_array(struct decl* declptr);
bool check_is_struct_var(struct decl* target);
bool check_is_struct_type(struct decl* target);
bool check_compatibledecl(struct decl* declptr1, struct decl* declptr2);
bool check_compatibletype(struct decl* type1, struct decl* type2);
bool check_samereturntype(struct decl* type, struct decl* newtype, bool pointers);
bool check_sameformals(struct decl* decl1, struct decl* decl2);
struct decl* check_funccall(struct decl* funcdecl, struct decl* args);

void declare(struct id* idptr, struct decl* declptr);
void init_type();
struct decl* findcurrentdecl(struct id* name);
struct decl* findstructdecl(struct id* name);
struct decl* findfuncdecl(struct id* name);
struct decl* findwholedecl(struct id* name);
bool findreturnid();

struct decl* arrayaccess(struct decl* arrayptr, struct decl* indexptr);
struct decl* structaccess(struct decl* structptr, struct id* fieldid);
struct decl* structptraccess(struct decl* structptr, struct id* fieldid);
struct decl* copydecl(struct decl* declptr);

struct decl* plustype(struct decl* op1, struct decl* op2);
struct decl* minustype(struct decl* op1, struct decl* op2);
struct decl* optype(struct decl* op1, struct decl* op2);
struct decl* logicaltype(struct decl* op1, struct decl* op2);


void connectdecl(struct ste* start);

void write_assign(struct decl* lhs, struct decl* rhs);

// special function for debugging
void printste(struct ste* start);

// 프로젝트4 관련 함수들
void write_assign(struct decl* lhs, struct decl* rhs);

#endif
