/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "subc.y" /* yacc.c:339  */

/*
 * File Name   : subc.y
 * Description : a skeleton bison input
 */

#include "subc.h"
#define INT 	100
#define CHAR	101
#define PTR		102
#define VAR		103
#define CONST	104
#define ARRAY	105
#define FUNC	106

int    yylex ();
int    yyerror (char* s);
void 	REDUCE(char* s);


#line 87 "subc.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "subc.tab.h".  */
#ifndef YY_YY_SUBC_TAB_H_INCLUDED
# define YY_YY_SUBC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LOGICAL_OR = 258,
    LOGICAL_AND = 259,
    EQUOP = 260,
    RELOP = 261,
    INCOP = 262,
    DECOP = 263,
    ELSE = 264,
    STRUCTOP = 265,
    WRITE_INT = 266,
    TYPE = 267,
    VOID = 268,
    STRUCT = 269,
    RETURN = 270,
    IF = 271,
    WHILE = 272,
    FOR = 273,
    BREAK = 274,
    CONTINUE = 275,
    ID = 276,
    WRITE_STRING = 277,
    PRINT = 278,
    CHAR_CONST = 279,
    STRING = 280,
    INTEGER_CONST = 281
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 23 "subc.y" /* yacc.c:355  */

	int				intval;
	char			*stringval;
	bool			boolval;
	struct id		*idptr;
	struct decl		*declptr;
	struct ste		*steptr;

#line 163 "subc.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SUBC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 178 "subc.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   281

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    16,     2,     2,     2,    15,     8,     2,
      21,    22,    13,    11,     3,    12,    23,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    42,
       2,     4,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,    20,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     7,    44,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     5,     6,
       9,    10,    17,    18,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    62,    63,    67,    83,   102,   105,   107,
     114,   118,   121,   128,   127,   136,   143,   164,   182,   182,
     216,   219,   225,   228,   234,   252,   278,   279,   283,   299,
     320,   321,   325,   339,   325,   354,   359,   361,   366,   380,
     382,   384,   386,   388,   390,   392,   394,   396,   398,   400,
     403,   406,   415,   417,   422,   428,   428,   439,   445,   451,
     454,   460,   466,   469,   475,   478,   481,   484,   487,   499,
     502,   505,   510,   513,   516,   525,   529,   533,   547,   561,
     574,   586,   589,   597,   603,   606,   609,   613,   619,   622
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "','", "'='", "LOGICAL_OR",
  "LOGICAL_AND", "'|'", "'&'", "EQUOP", "RELOP", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "INCOP", "DECOP", "'['", "']'", "'('", "')'", "'.'",
  "ELSE", "STRUCTOP", "WRITE_INT", "TYPE", "VOID", "STRUCT", "RETURN",
  "IF", "WHILE", "FOR", "BREAK", "CONTINUE", "ID", "WRITE_STRING", "PRINT",
  "CHAR_CONST", "STRING", "INTEGER_CONST", "';'", "'{'", "'}'", "$accept",
  "program", "ext_def_list", "ext_def", "type_specifier",
  "struct_specifier", "$@1", "func_decl", "@2", "pointers", "param_list",
  "param_decl", "def_list", "def", "compound_stmt", "$@3", "$@4",
  "local_defs", "stmt_list", "stmt", "expr_e", "const_expr", "expr", "$@5",
  "or_expr", "or_list", "and_expr", "and_list", "binary", "unary", "args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    44,    61,   258,   259,   124,    38,   260,
     261,    43,    45,    42,    47,    37,    33,   262,   263,    91,
      93,    40,    41,    46,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,    59,   123,   125
};
# endif

#define YYPACT_NINF -126

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-126)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -126,    19,   130,  -126,  -126,  -126,   -19,  -126,     2,  -126,
      17,   -29,  -126,  -126,   -15,  -126,  -126,  -126,  -126,    -8,
    -126,  -126,   184,    -4,  -126,   130,  -126,    86,   184,   184,
     184,   184,   184,   184,   184,  -126,  -126,  -126,  -126,    29,
    -126,  -126,    42,  -126,    51,   124,    80,  -126,    47,   130,
       3,    28,  -126,  -126,  -126,   189,   189,   189,   189,   189,
     189,    55,    57,    39,   184,   184,   184,   184,   184,   184,
    -126,  -126,  -126,   184,    50,    52,    76,  -126,    70,     7,
    -126,  -126,    82,  -126,   111,  -126,  -126,  -126,  -126,   189,
     124,   160,    53,  -126,  -126,   184,    67,  -126,   118,   100,
    -126,  -126,    89,   130,  -126,     4,   105,    14,   117,   119,
     141,   121,   125,   147,  -126,  -126,  -126,  -126,  -126,   131,
    -126,  -126,   184,  -126,   156,  -126,   184,  -126,   184,  -126,
     134,   184,   184,   184,  -126,  -126,   137,  -126,  -126,   184,
     173,   172,  -126,   176,   177,   153,  -126,   181,   191,   162,
    -126,   148,   148,   184,  -126,  -126,  -126,   185,  -126,   171,
     148,   184,  -126,   193,   148,  -126
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    10,    11,     0,     3,    21,    12,
       0,    15,    20,     8,     0,     7,    32,     9,    13,     0,
      27,    27,     0,    18,     5,    35,    33,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    72,    73,    71,     0,
      54,    57,    58,    60,    61,    63,    68,    16,     0,     0,
      21,     0,    26,    37,    14,    81,    75,    82,    76,    79,
      80,     0,    68,     0,     0,     0,     0,     0,     0,     0,
      55,    77,    78,     0,     0,     0,     0,    17,    21,     0,
      22,    30,     0,    31,     0,    69,    70,     6,    59,    68,
      62,    65,    64,    66,    67,     0,     0,    87,    88,     0,
      84,    85,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    42,    34,    39,    36,     0,
      56,    83,     0,    86,    24,    23,     0,    28,     0,    40,
       0,     0,     0,    53,    47,    48,     0,    38,    89,     0,
       0,     0,    41,     0,     0,     0,    52,     0,     0,     0,
      50,     0,     0,    53,    51,    25,    29,    43,    45,     0,
       0,    53,    44,     0,     0,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,  -126,    -1,  -126,  -126,   214,  -126,   -41,
    -126,   114,   197,  -126,   209,  -126,  -126,  -126,  -126,   -44,
    -125,  -106,   -22,  -126,  -126,  -126,   157,  -126,    27,   -26,
     104
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    50,     9,    21,    51,    49,    14,
      79,    80,    25,    52,   117,    20,    53,    26,    84,   118,
     145,    39,   119,    95,    41,    42,    43,    44,    45,    46,
      99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      40,     8,    55,    56,    57,    58,    59,    60,    62,    82,
     103,    22,    61,    23,    18,    12,    12,    11,    47,     3,
     140,    19,    28,   126,    48,    23,    29,    30,   159,   104,
      31,    32,    33,   148,    24,    34,   163,   102,    89,    89,
      89,    89,    89,    89,    13,    81,   127,    64,    78,    63,
      35,    96,    98,    36,    37,    38,   129,    65,    28,    15,
      16,    70,    29,    30,    68,    69,    31,    32,    33,    77,
      83,    34,    97,   120,    71,    72,    73,    85,    74,    86,
      75,    87,    76,    12,    70,   130,    35,   121,   100,    36,
      37,    38,    90,    91,    92,    93,    94,    71,    72,    73,
      98,    74,    78,    75,    40,    76,   141,   157,   158,   143,
     144,   146,   101,     4,     5,     6,   162,    40,   105,    28,
     165,   122,   123,    29,    30,   124,   128,    31,    32,    33,
      54,   146,    34,    66,    67,    68,    69,   106,   131,   146,
     132,   107,   108,   109,   110,   111,   112,    35,   113,   114,
      36,    37,    38,   115,    16,   116,    28,     4,     5,     6,
      29,    30,   133,   134,    31,    32,    33,   135,   136,    34,
      67,    68,    69,   137,   106,   139,   142,   147,   107,   108,
     109,   110,   111,   112,    35,   113,   114,    36,    37,    38,
     115,    16,    28,   149,   150,   153,    29,    30,   151,   152,
      31,    32,    33,   154,   156,    34,    71,    72,    73,   160,
      74,   155,    75,   161,    76,   164,    10,   125,    27,    17,
      35,    88,     0,    36,    37,    38,   138
};

static const yytype_int16 yycheck[] =
{
      22,     2,    28,    29,    30,    31,    32,    33,    34,    50,
       3,    19,    34,    21,    43,    13,    13,    36,    22,     0,
     126,    36,     8,    19,    28,    21,    12,    13,   153,    22,
      16,    17,    18,   139,    42,    21,   161,    78,    64,    65,
      66,    67,    68,    69,    42,    42,    42,     5,    49,    20,
      36,    73,    74,    39,    40,    41,    42,     6,     8,    42,
      43,     4,    12,    13,    11,    12,    16,    17,    18,    22,
      42,    21,    22,    95,    17,    18,    19,    22,    21,    22,
      23,    42,    25,    13,     4,   107,    36,    20,    36,    39,
      40,    41,    65,    66,    67,    68,    69,    17,    18,    19,
     122,    21,   103,    23,   126,    25,   128,   151,   152,   131,
     132,   133,    36,    27,    28,    29,   160,   139,    36,     8,
     164,     3,    22,    12,    13,    36,    21,    16,    17,    18,
      44,   153,    21,     9,    10,    11,    12,    26,    21,   161,
      21,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     8,    27,    28,    29,
      12,    13,    21,    42,    16,    17,    18,    42,    21,    21,
      10,    11,    12,    42,    26,    19,    42,    40,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,     8,    20,    22,    42,    12,    13,    22,    22,
      16,    17,    18,    22,    42,    21,    17,    18,    19,    24,
      21,    20,    23,    42,    25,    22,     2,   103,    21,    10,
      36,    64,    -1,    39,    40,    41,   122
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    47,     0,    27,    28,    29,    48,    49,    50,
      52,    36,    13,    42,    54,    42,    43,    59,    43,    36,
      60,    51,    19,    21,    42,    57,    62,    57,     8,    12,
      13,    16,    17,    18,    21,    36,    39,    40,    41,    66,
      67,    69,    70,    71,    72,    73,    74,    22,    28,    53,
      49,    52,    58,    61,    44,    74,    74,    74,    74,    74,
      74,    67,    74,    20,     5,     6,     9,    10,    11,    12,
       4,    17,    18,    19,    21,    23,    25,    22,    49,    55,
      56,    42,    54,    42,    63,    22,    22,    42,    71,    74,
      73,    73,    73,    73,    73,    68,    67,    22,    67,    75,
      36,    36,    54,     3,    22,    36,    26,    30,    31,    32,
      33,    34,    35,    37,    38,    42,    44,    59,    64,    67,
      67,    20,     3,    22,    36,    56,    19,    42,    21,    42,
      67,    21,    21,    21,    42,    42,    21,    42,    75,    19,
      66,    67,    42,    67,    67,    65,    67,    40,    66,    20,
      22,    22,    22,    42,    22,    20,    42,    64,    64,    65,
      24,    42,    64,    65,    22,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    48,    48,
      49,    49,    49,    51,    50,    50,    52,    52,    53,    52,
      54,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      58,    58,    60,    61,    59,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    65,    65,    66,    68,    67,    67,    69,    70,
      70,    71,    72,    72,    73,    73,    73,    73,    73,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     2,
       1,     1,     1,     0,     6,     2,     5,     6,     0,     7,
       1,     0,     1,     3,     3,     6,     2,     0,     4,     7,
       2,     2,     0,     0,     6,     1,     2,     0,     2,     1,
       2,     3,     1,     5,     7,     5,     9,     2,     2,     1,
       4,     4,     1,     0,     1,     0,     4,     1,     1,     3,
       1,     1,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     3,     3,     4,     3,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 67 "subc.y" /* yacc.c:1646  */
    {

			if((yyvsp[-2].boolval))
			{
				// VAR PTR declaration
				declare((yyvsp[-1].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[-3].declptr)))));
				coffset->offset = coffset->offset + 1;
			}
			else
			{
				// VAR declaration
				declare((yyvsp[-1].idptr), makevardecl((yyvsp[-3].declptr)));
				coffset->offset = coffset->offset + (yyvsp[-3].declptr)->size;
			}

		}
#line 1396 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 83 "subc.y" /* yacc.c:1646  */
    {

			if((yyvsp[-2].declptr)->declclass==CONST)
			{
				if((yyvsp[-2].declptr)->type==inttype)
				{
					struct decl* elementvar;
					if((yyvsp[-5].boolval))
					{
						elementvar = makevardecl(makeptrdecl(makevardecl((yyvsp[-6].declptr))));
					}
					else
					{
						elementvar = makevardecl((yyvsp[-6].declptr));
					}
					declare((yyvsp[-4].idptr), makeconstdecl(makearraydecl(elementvar)));
				}
			}
		}
#line 1420 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 102 "subc.y" /* yacc.c:1646  */
    {
			// 프로젝트4 에서는 이 Grammar는 쓰이지 않을 것이다.
		}
#line 1428 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 105 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1435 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 107 "subc.y" /* yacc.c:1646  */
    {
			// Semantic error가 있는 코드는 입력되지 않으므로,
			// 프로젝트3에서 func_decl에 대한 value를 체크한 내역은 지웠다.
		}
#line 1444 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 114 "subc.y" /* yacc.c:1646  */
    {
			if(!strcmp((yyvsp[0].idptr)->name,"int")) (yyval.declptr) = inttype;
			else if(!strcmp((yyvsp[0].idptr)->name,"char")) (yyval.declptr) = chartype;
		}
#line 1453 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 118 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = voidtype;
		}
#line 1461 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 121 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1469 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 128 "subc.y" /* yacc.c:1646  */
    {
				push_scope();	
			}
#line 1477 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 132 "subc.y" /* yacc.c:1646  */
    {
				struct ste* fields = pop_scope();
				declare((yyvsp[-4].idptr), (yyval.declptr)=makestructdecl(fields));
			}
#line 1486 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 136 "subc.y" /* yacc.c:1646  */
    {
			// ID로 미리 정의되어있을 struct type의 decl을 받아와서 올린다.
			(yyval.declptr) = findstructdecl((yyvsp[0].idptr));
		}
#line 1495 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 143 "subc.y" /* yacc.c:1646  */
    {
			fprintf(codefile, "%s:\n", (yyvsp[-2].idptr)->name);
			clabel = (yyvsp[-2].idptr)->name;
			// function을 정의하면서, 선언까지 함께 해주기 때문에
			// 당연히 존재하지 않는 func 이름일 것이다.

			struct decl* funcdecl = NULL;

			if((yyvsp[-3].boolval)) 
			{
				funcdecl = makefuncdecl(makeptrdecl(makeconstdecl((yyvsp[-4].declptr))));
				declare((yyvsp[-2].idptr), funcdecl);
				(yyval.declptr) = funcdecl;
			}
			else
			{
				funcdecl = makefuncdecl((yyvsp[-4].declptr));
				declare((yyvsp[-2].idptr), funcdecl);
				(yyval.declptr) = funcdecl;
			}
		}
#line 1521 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 164 "subc.y" /* yacc.c:1646  */
    {

			struct decl* funcdecl = NULL;

			if((yyvsp[-4].boolval)) 
			{
				funcdecl = makefuncdecl(makeptrdecl(makeconstdecl((yyvsp[-5].declptr))));
				declare((yyvsp[-3].idptr), funcdecl);
				(yyval.declptr) = funcdecl;
			}
			else
			{
				funcdecl = makefuncdecl((yyvsp[-5].declptr));
				declare((yyvsp[-3].idptr), funcdecl);
				(yyval.declptr) = funcdecl;
			}

		}
#line 1544 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 182 "subc.y" /* yacc.c:1646  */
    {
			
			// FUNC declare 는 param_list 를 확인한 뒤로 미룬다
			struct decl* funcdecl = NULL;
			struct decl* returntypedecl = NULL;

			if((yyvsp[-2].boolval)) 
			{
				returntypedecl = makeptrdecl(makeconstdecl((yyvsp[-3].declptr)));
				(yyval.declptr) = makefuncdecl(returntypedecl);
			}
			else
			{
				returntypedecl = (yyvsp[-3].declptr);
				(yyval.declptr) = makefuncdecl(returntypedecl);
			}
			push_scope();
			declare(returnid,returntypedecl);

		}
#line 1569 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 202 "subc.y" /* yacc.c:1646  */
    {

			struct ste*	formals = pop_scope();
			connectdecl(formals);
			struct decl* funcdecl = (yyvsp[-2].declptr);

			funcdecl->formals = formals->prev;
			(yyval.declptr) = funcdecl;
			declare((yyvsp[-4].idptr), funcdecl);

		}
#line 1585 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 216 "subc.y" /* yacc.c:1646  */
    {
			(yyval.boolval) = true;
		}
#line 1593 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 219 "subc.y" /* yacc.c:1646  */
    {
			(yyval.boolval) = false;
		}
#line 1601 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 225 "subc.y" /* yacc.c:1646  */
    {
			(yyval.boolval) = (yyvsp[0].declptr);
		}
#line 1609 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 228 "subc.y" /* yacc.c:1646  */
    {
			(yyval.boolval) = (yyvsp[-2].boolval) && (yyvsp[0].declptr);
		}
#line 1617 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 234 "subc.y" /* yacc.c:1646  */
    {

			if((yyvsp[-1].boolval))
			{
				// VAR PTR
				struct decl* declptr = makevardecl(makeptrdecl(makevardecl((yyvsp[-2].declptr))));
				declare((yyvsp[0].idptr), declptr);
				(yyval.declptr) = declptr;
			}
			else
			{
				// VAR
				struct decl* declptr = makevardecl((yyvsp[-2].declptr));
				declare((yyvsp[0].idptr), declptr);
				(yyval.declptr) = declptr;
			}

		}
#line 1640 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 252 "subc.y" /* yacc.c:1646  */
    {

			// CONST 이고, type이 inttype
			if((yyvsp[-1].declptr)->declclass==CONST)
			{
				if((yyvsp[-1].declptr)->type==inttype)
				{
					struct decl* elementvar;
					if((yyvsp[-4].boolval))
					{
						elementvar = makevardecl(makeptrdecl(makevardecl((yyvsp[-5].declptr))));
					}
					else
					{
						elementvar = makevardecl((yyvsp[-5].declptr));
					}
					struct decl* declptr = makeconstdecl(makearraydecl(elementvar));
					declare((yyvsp[-3].idptr), declptr);
					(yyval.declptr) = declptr;
				}
			}
					
		}
#line 1668 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 283 "subc.y" /* yacc.c:1646  */
    {
		
			if((yyvsp[-2].boolval))
			{
				// VAR PTR
				declare((yyvsp[-1].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[-3].declptr)))));
				coffset->offset = coffset->offset + 1;
			}
			else
			{
				// VAR
				declare((yyvsp[-1].idptr), makevardecl((yyvsp[-3].declptr)));
				coffset->offset = coffset->offset + (yyvsp[-3].declptr)->size;
			}

		}
#line 1689 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 299 "subc.y" /* yacc.c:1646  */
    {

				// CONST 이고, type이 inttype
				if((yyvsp[-2].declptr)->declclass==CONST)
				{
					if((yyvsp[-2].declptr)->type==inttype)
					{
						struct decl* elementvar;
						if((yyvsp[-5].boolval))
						{
							elementvar = makevardecl(makeptrdecl(makevardecl((yyvsp[-6].declptr))));
						}
						else
						{
							elementvar = makevardecl((yyvsp[-6].declptr));
						}	
						declare((yyvsp[-4].idptr), makeconstdecl(makearraydecl(elementvar)));
					}
				}

		}
#line 1715 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 325 "subc.y" /* yacc.c:1646  */
    {
			push_scope();
			if(!findcurrentdecl(returnid))
			{
				if((yyvsp[-1].declptr))
				{
					if((yyvsp[-1].declptr)->declclass == FUNC)
					{
						declare(returnid, (yyvsp[-1].declptr)->returntype);
						push_stelist((yyvsp[-1].declptr)->formals);
					}
				}
			}

		}
#line 1735 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 339 "subc.y" /* yacc.c:1646  */
    {
			fprintf(codefile, "\tshift_sp %d\n", coffset->offset);
			fprintf(codefile, "%s_start:\n", clabel);
		}
#line 1744 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 342 "subc.y" /* yacc.c:1646  */
    {
			pop_scope();
			fprintf(codefile, "%s_final:\n", clabel);
			fprintf(codefile, "\tpush_reg fp\n");
			fprintf(codefile, "\tpop_reg sp\n");
			fprintf(codefile, "\tpop_reg fp\n");
			fprintf(codefile, "\tpop_reg pc\n");
			fprintf(codefile, "%s_end:\n", clabel);
		}
#line 1758 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 354 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1765 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 359 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1772 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 361 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1779 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 366 "subc.y" /* yacc.c:1646  */
    {
			int sp_shift;
			if(check_is_ptr((yyvsp[-1].declptr))) 
			{
				yyerror("check1");
				sp_shift = -(yyvsp[-1].declptr)->type->ptrto->type->size;
			}
			else if(check_is_var((yyvsp[-1].declptr))) 
			{
				yyerror("check2");
				sp_shift = -(yyvsp[-1].declptr)->type->size;
			}
			fprintf(codefile, "\tshift_sp %d\n", sp_shift);
		}
#line 1798 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 380 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1805 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 382 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1812 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 384 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1819 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 386 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1826 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 388 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1833 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 390 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1840 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 392 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1847 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 394 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1854 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 396 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1861 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 398 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1868 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 400 "subc.y" /* yacc.c:1646  */
    {
			printste(cscope->top);
		}
#line 1876 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 403 "subc.y" /* yacc.c:1646  */
    {
			fprintf(codefile, "\twrite_int\n");
		}
#line 1884 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 406 "subc.y" /* yacc.c:1646  */
    {
			fprintf(codefile, "str_%d. string %s\n", cstring, (yyvsp[-1].stringval));
			fprintf(codefile, "\tpush_const str_%d\n", cstring);
			fprintf(codefile, "\twrite_string\n");
			cstring++;
		}
#line 1895 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 415 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1902 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 417 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1909 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 422 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1917 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 428 "subc.y" /* yacc.c:1646  */
    {
			// unary에 값을 assign 할 것이므로, 현재 stack top을 복사해둔다.
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
		}
#line 1927 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 432 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-3].declptr);
			// assign 하고 나서는 expr 이므로 값을 위에 띄울 것이다.
			// 그러므로 fetch 해준다.
			fprintf(codefile, "\tassign\n");
			fprintf(codefile, "\tfetch\n");
		}
#line 1939 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 439 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1947 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 445 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1955 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 451 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = logicaltype((yyvsp[-2].declptr), (yyvsp[0].declptr));
		}
#line 1963 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 454 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1971 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 460 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1979 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 466 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = logicaltype((yyvsp[-2].declptr), (yyvsp[0].declptr));
		}
#line 1987 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 469 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1995 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 475 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = optype((yyvsp[-2].declptr), (yyvsp[0].declptr));
		}
#line 2003 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 478 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = optype((yyvsp[-2].declptr), (yyvsp[0].declptr));
		}
#line 2011 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 481 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = plustype((yyvsp[-2].declptr), (yyvsp[0].declptr));
		}
#line 2019 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 484 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = minustype((yyvsp[-2].declptr), (yyvsp[0].declptr));
		}
#line 2027 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 487 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
			// unary가 VAR라면 이 시점에서 fetch 해줘야한다.
			// 이 시점 윗단에서는 대응되는 값이 올려져있어야 하기 때문이다.
			if(check_is_var((yyvsp[0].declptr)))
			{
				fprintf(codefile, "\tfetch\n");
			}
		}
#line 2041 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 499 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 2049 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 502 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 2057 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 505 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makenumconstdecl(inttype, (yyvsp[0].intval));
			// INTEGER_CONST로 REDUCE 되는 경우에는, 해당 값을 올려놓는다.
			fprintf(codefile, "\tpush_const %d\n", (yyvsp[0].intval));
		}
#line 2067 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 510 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makecharconstdecl(chartype, (yyvsp[0].stringval));
		}
#line 2075 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 513 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makestringconstdecl(stringtype, (yyvsp[0].stringval));
		}
#line 2083 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 516 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> ID");
			(yyval.declptr) = findwholedecl((yyvsp[0].idptr));
			// $$->declclass = VAR;
			// ID로 REDUCE 되는 경우에는, ID가 담겨있는 주소값(정수)를 올려놓는다.
			fprintf(codefile, "\tpush_reg fp\n");
			fprintf(codefile, "\tpush_const %d\n", 1 + (yyval.declptr)->offset);
			fprintf(codefile, "\tadd\n");
		}
#line 2097 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 525 "subc.y" /* yacc.c:1646  */
    {
			// $2 는 type이 inttype 이어야 한다.
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 2106 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 529 "subc.y" /* yacc.c:1646  */
    {
			// $2 는 type이 inttype 이어야 한다.
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 2115 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 533 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = checkINCOPDECOP((yyvsp[-1].declptr));
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_const 1\n");
			fprintf(codefile, "\tadd\n");
			fprintf(codefile, "\tassign\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_const 1\n");
			fprintf(codefile, "\tsub\n");
		}
#line 2134 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 547 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = checkINCOPDECOP((yyvsp[-1].declptr));
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_const 1\n");
			fprintf(codefile, "\tsub\n");
			fprintf(codefile, "\tassign\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_const 1\n");
			fprintf(codefile, "\tadd\n");
		}
#line 2153 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 561 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> INCOP unary");
			(yyval.declptr) = checkINCOPDECOP((yyvsp[0].declptr));
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_const 1\n");
			fprintf(codefile, "\tadd\n");
			fprintf(codefile, "\tassign\n");
			fprintf(codefile, "\tfetch\n");
		}
#line 2171 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 574 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = checkINCOPDECOP((yyvsp[0].declptr));
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_reg sp\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tfetch\n");
			fprintf(codefile, "\tpush_const 1\n");
			fprintf(codefile, "\tsub\n");
			fprintf(codefile, "\tassign\n");
			fprintf(codefile, "\tfetch\n");
		}
#line 2188 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 586 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makeconstdecl(makeptrdecl((yyvsp[0].declptr)));
		}
#line 2196 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 589 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr)->type->ptrto;
			// int *i;
			// *i = 10; 이런건 가능했잖아?
			// 그러면 $$를 CONST로 강제할 것이 아니라, 그대로 둬야 한다.
			// 단지 fetch 만 한번 해둘 뿐이다.
			fprintf(codefile, "\tfetch\n");
		}
#line 2209 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 597 "subc.y" /* yacc.c:1646  */
    {
			// RHS의 unary는 const 이고, type의 typeclass는 array 인가?
			// expr는 int type VAR 이거나, INT_CONST 인가?
			// 조건을 충족한다면, elementvar로 VAR을 넘겨준다.
			(yyval.declptr) = arrayaccess((yyvsp[-3].declptr), (yyvsp[-1].declptr));
		}
#line 2220 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 603 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = structaccess((yyvsp[-2].declptr), (yyvsp[0].idptr));
		}
#line 2228 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 606 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = structptraccess((yyvsp[-2].declptr), (yyvsp[0].idptr));
		}
#line 2236 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 609 "subc.y" /* yacc.c:1646  */
    {
			yyerror("check function call");
			(yyval.declptr) = check_funccall((yyvsp[-3].declptr), (yyvsp[-1].declptr));
		}
#line 2245 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 613 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = check_funccall((yyvsp[-2].declptr), NULL);
		}
#line 2253 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 619 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = copydecl((yyvsp[0].declptr));
		}
#line 2261 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 622 "subc.y" /* yacc.c:1646  */
    {
			(yyvsp[-2].declptr)->next = (yyvsp[0].declptr);
			(yyval.declptr) = (yyvsp[-2].declptr);
		}
#line 2270 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2274 "subc.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 628 "subc.y" /* yacc.c:1906  */


/*  Additional C Codes 
 	Implemnt REDUCE function here */

int yyerror (char* s)
{
	if(filename) fprintf(stderr, "%s:",filename);
	fprintf(stderr,"%d: ",read_line());
	fprintf(stderr, "%s\n", s);
}

void REDUCE(char* s)
{
	printf("%s\n",s);
}

void push_scope()
{
	struct sse* sseptr = (struct sse*)malloc(sizeof(struct sse));
	sseptr->top = cscope->top;
	sseptr->prev = cscope;
	cscope = sseptr;

	struct ose* oseptr = (struct ose*)malloc(sizeof(struct ose));
	oseptr->offset = 0;
	oseptr->prev   = coffset;
	coffset = oseptr;
}

struct ste* pop_scope()
{
	struct ste* result = NULL;
	struct ste* currtop = cscope->top;
	struct ste* dummy = (struct ste*)malloc(sizeof(struct ste*));
	dummy->prev = NULL;
	struct ste* strbottom = dummy;
	struct ste* strtop = dummy;

	while(cscope->top!=cscope->prev->top)
	{
		cscope->top = currtop->prev;
		if(check_is_struct_type(currtop->decl))
		{
			strbottom->prev = currtop;
			strbottom = currtop;
			strbottom->prev = NULL;
		}
		else
		{
			currtop->prev = result;
			result = currtop;
		}
		currtop = cscope->top;
	}
	
	struct sse* temp = cscope;
	cscope = cscope->prev;
	free(temp);

	if(strtop->prev) 
	{
		strbottom->prev = cscope->top;
		cscope->top = strtop->prev;
	}
	free(dummy);

	return result;
}

void push_stelist(struct ste* formals)
{
	struct ste* entry = formals;
	while(entry)
	{
		declare(entry->name, entry->decl);
		entry = entry->prev;
	}
}

struct decl* makevardecl(struct decl* type)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = VAR;
	result->type = type;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = 0;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	result->offset = coffset->offset;

	return result;
}

struct decl* makeptrdecl(struct decl* ptrtodecl)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = TYPE;
	result->type = NULL;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = PTR;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = ptrtodecl;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl* makearraydecl(struct decl* elementvar)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = TYPE;
	result->type = NULL;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = ARRAY;
	result->elementvar = elementvar;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl	*maketypedecl(int typeclass)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = TYPE;
	result->type = NULL;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = typeclass;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;
	result->size = 1;

	return result;
}

struct decl	*makestructdecl(struct ste* fields)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = TYPE;
	result->type = NULL;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = STRUCT;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = fields;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl	*makefuncdecl(struct decl* returntypedecl)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = FUNC;
	result->type = NULL;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = returntypedecl;
	result->typeclass = 0;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl	*makeconstdecl(struct decl* type)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = CONST;
	result->type = type;
	result->value = 0;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = 0;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl	*makenumconstdecl(struct decl* type, int value)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	result->declclass = CONST;
	result->type = type;
	result->value = value;
	result->charconst = '\0';
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = 0;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl	*makecharconstdecl(struct decl* type, char* value)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));

	result->declclass = CONST;
	result->type = type;
	result->value = 0;
	result->charconst = *value;
	result->string = NULL;
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = 0;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

struct decl	*makestringconstdecl(struct decl* type, char* value)
{
	struct decl* result = (struct decl*)malloc(sizeof(struct decl));
	int length = strlen(value);

	result->declclass = CONST;
	result->type = type;
	result->value = 0;
	result->charconst = '\0';
	result->string = (char*)malloc(sizeof(char)*length);
	strncpy(result->string, value, length);
	result->formals = NULL;
	result->returntype = NULL;
	result->typeclass = 0;
	result->elementvar = NULL;
	result->num_index = 0;
	result->fieldlist = NULL;
	result->ptrto = NULL;
	result->scope = NULL;
	result->next = NULL;

	return result;
}

void declare(struct id* idptr, struct decl* declptr)
{
	struct ste* entry = (struct ste*)malloc(sizeof(struct ste));
	entry->name   = idptr;
	entry->decl   = declptr;
	entry->prev   = cscope->top;
	cscope->top = entry;
	return;
}


void init_type()
{
	cscope = (struct sse*)malloc(sizeof(struct sse));
	cscope->prev = NULL;
	cscope->top = NULL;

	coffset = (struct ose*)malloc(sizeof(struct ose));
	coffset->offset = 0;
	coffset->prev = NULL;

	cstring = 0;

	inttype = maketypedecl(INT);
	chartype = maketypedecl(CHAR);
	voidtype = maketypedecl(VOID);

	declare(enter(TYPE, "int", 3), inttype);
	declare(enter(TYPE, "char", 4), chartype);
	declare(enter(VOID, "void", 4), voidtype);
	
	returnid = enter(ID, "*return", 7);
}

struct decl* findcurrentdecl(struct id* name)
{
	struct ste* entry = cscope->top;
	struct ste* last = cscope->prev? cscope->prev->top : NULL;

	while(entry!=last)
	{
		if(entry->name==name) break;
		else entry = entry->prev;
	}

	return (entry!=last? (entry->decl->declclass==TYPE? NULL : entry->decl) : NULL);
}

struct decl* findstructdecl(struct id* name)
{
	struct ste* entry = cscope->top;
	while(entry)
	{
		if(entry->name==name)
		{
			if(entry->decl->declclass==TYPE)
			{
				if(entry->decl->typeclass==STRUCT) break;
			}

		}
		else entry = entry->prev;
	}
	return entry? entry->decl : NULL;
}

struct decl* findfuncdecl(struct id* name)
{
	struct ste* entry = cscope->top;
	while(entry)
	{
		if(entry->name==name)
		{
			if(entry->decl->declclass==FUNC) break;
		}
		else entry = entry->prev;
	}
	return entry? entry->decl : NULL;
}

struct decl* findwholedecl(struct id* name)
{
	struct ste* entry = cscope->top;
	while(entry)
	{
		if(entry->name == name) break;
		else entry = entry->prev;
	}
	return entry? entry->decl : NULL;
}

bool findreturnid()
{
	struct ste* entry = cscope->top;
	struct ste* last = cscope->prev->top;
	while(entry!=last)
	{
		if(entry->name == returnid) break;
		else entry = entry->prev;
	}
	return (entry==last? true : false);
}


struct decl* checkINCOPDECOP(struct decl* target)
{
	bool isInt = (target->type==inttype);
	bool isChar = (target->type==chartype);
	bool isPtr = (target->type->typeclass==PTR);
	if(isInt || isChar || isPtr)
	{
		// 한번 INCOP, DECOP를 거치고 나면 const 로 취급받아야한다.
		// 예를 들어 ++a = 17; 이런 statement를 reject 해야하기 때문이다.
		struct decl* result = makeconstdecl(target->type);
		result->offset = target->offset;
		return result;
	}
	else return NULL;
}

bool check_is_var(struct decl* target)
{
	if(!target) return false;
	else if(target->declclass==VAR) return true;
	else return false;
}

bool check_is_type(struct decl* target)
{
	if(!target) return false;
	else if(target->declclass==TYPE) return true;
	else return false;
}

bool check_is_const(struct decl* target)
{
	if(!target) return false;
	else if(target->declclass==CONST) return true;
	else return false;
}

bool check_is_int(struct decl* target)
{
	if(!target) return false;
	else if(target->type == inttype) return true;
	else return false;
}

bool check_is_ptr(struct decl* target)
{
	if(!target) return false;
	else if(target->type->typeclass == PTR) return true;
	else return false;
}

bool check_is_char(struct decl* target)
{
	if(!target) return false;
	else if(target->type == chartype) return true;
	else return false;
}

bool check_is_array(struct decl* declptr)
{
	bool result = false;
	if(declptr->declclass==CONST)
	{
		if(declptr->type->typeclass==ARRAY) result = true;
	}
	return result;
}

bool check_is_struct_var(struct decl* target)
{
	bool result = false;
	if(check_is_var(target))
	{
		if(target->type->typeclass==STRUCT) result = true;
	}
	return result;
}

bool check_is_struct_type(struct decl* target)
{
	bool result = false;
	if(check_is_type(target))
	{
		if(target->typeclass == STRUCT) result = true;
	}
	return result;
}

bool check_compatibledecl(struct decl* declptr1, struct decl* declptr2)
{
	bool result = false;

	if(declptr1 && declptr2) 
	{
		if(declptr1->type && declptr2->type)
		{
			if(declptr1->type==declptr2->type) result = true;
			else if(check_is_ptr(declptr1))
			{
				if(check_is_ptr(declptr2))
				{
					struct decl* ptr1 = declptr1->type->ptrto;
					struct decl* ptr2 = declptr2->type->ptrto;
					if(ptr1->type==ptr2->type) result = true;
				}
				else if(check_is_array(declptr2))
				{
					struct decl* ptr1 = declptr1->type->ptrto;
					struct decl* ptr2 = declptr2->type->elementvar;
					if(ptr1->type==ptr2->type) result = true;
				}
			}
			else if(check_is_array(declptr1))
			{
				if(check_is_ptr(declptr2))
				{
					struct decl* ptr1 = declptr1->type->elementvar;
					struct decl* ptr2 = declptr2->type->ptrto;
					if(ptr1->type==ptr2->type) result = true;
				}
				else if(check_is_array(declptr2))
				{
					struct decl* ptr1 = declptr1->type->elementvar;
					struct decl* ptr2 = declptr2->type->elementvar;
					if(ptr1->type==ptr2->type) result = true;
				}
			}
		}
	}
	return result;
}

bool check_compatibletype(struct decl* type1, struct decl* type2)
{
	struct decl* declptr1 = (struct decl*)malloc(sizeof(struct decl));
	struct decl* declptr2 = (struct decl*)malloc(sizeof(struct decl));

	declptr1->type = type1;
	declptr2->type = type2;

	bool result = check_compatibledecl(declptr1, declptr2);

	free(declptr1);
	free(declptr2);

	return result;
}

bool check_samereturntype(struct decl* type, struct decl* newtype, bool pointers)
{
	// func_decl 이 이미 존재하는 경우 호출된다.
	// 그러므로 type이 NULL일 경우는 없다.
	
	bool result = false;

	if(pointers)
	{
		if(type->typeclass==PTR)
		{
			result = (type->ptrto->type == newtype);
		}
	}
	else
	{
		result = (type == newtype);
	}

	return result;
}

bool check_sameformals(struct decl* decl1, struct decl* decl2)
{
	bool result = true;
	
	while(decl1)
	{
		if(!decl2)
		{
			result = false;
			break;
		}
		else
		{
			if(decl1->declclass==CONST)
			{
				if(decl2->declclass==CONST)
				{
					struct decl* elementvar1 = decl1->type->elementvar;
					struct decl* elementvar2 = decl2->type->elementvar;
					
					if(elementvar1->type->typeclass==PTR)
					{
						if(elementvar2->type->typeclass==PTR)
						{
							if(elementvar1->type->ptrto != elementvar2->type->ptrto)
							{
								result = false;
								break;
							}
						}
						else
						{
							result = false;
							break;
						}
					}
					else
					{
						if(elementvar1->type != elementvar2->type)
						{
							result = false;
							break;
						}
					}
				}
				else
				{
					result = false;
					break;
				}
			}
			else
			{
				struct decl* type1 = decl1->type;
				struct decl* type2 = decl2->type;

				if(type1->typeclass == PTR)
				{
					if(type2->typeclass = PTR)
					{	
						if(type1->ptrto->type != type2->ptrto->type)
						{
							result = false;
							break;
						}
					}
					else
					{
						result = false;
						break;
					}
				}
				else
				{
					if(type1 != type2)
					{
						result = false;
						break;
					}
				}
			}
		}
		decl1 = decl1->next;
		decl2 = decl2->next;
	}

	// 두번째 정의된 formals의 개수가, 첫번째 정의된 formals의 개수보다 많음
	if(!decl1 && decl2) result = false;
	return result;
}

struct decl* check_funccall(struct decl* funcdecl, struct decl* args)
{

	if(!funcdecl) return NULL;
	else if(funcdecl->declclass != FUNC)
	{
		yyerror("error: not a function");
		return NULL;
	}
	else if(!funcdecl->formals)
	{
		if(!args) return makeconstdecl(funcdecl->returntype);
		else
		{
			yyerror("error: actual args are not equal to formals args");
			return NULL;
		}
	}
	else if(!check_sameformals(funcdecl->formals->decl, args))
	{
		yyerror("error: actual args are not equal to formals args");
		return NULL;
	}
	else
	{
		return makeconstdecl(funcdecl->returntype);
	}
}

struct decl* arrayaccess(struct decl* arrayptr, struct decl* indexptr)
{

	// RHS의 unary는 const 이고, type의 typeclass는 array 인가?
	// expr는 int type VAR 이거나, INT_CONST 인가?
	// 조건을 충족한다면, elementvar로 VAR을 넘겨준다.

	struct decl* result = NULL;

	if(check_is_array(arrayptr))
	{
		if(indexptr->type == inttype) result = arrayptr->type->elementvar;
		else yyerror("error: not a int type index");
	}
	else
	{
		yyerror("error: not array type");
	}
}

struct decl* structaccess(struct decl* structptr, struct id* fieldid)
{
	struct decl* result = NULL;
	if(check_is_struct_var(structptr))
	{
		struct ste* entry = structptr->type->fieldlist;
		while(entry)
		{
			if(entry->name==fieldid) break;
			else entry = entry->prev;
		}
		if(entry) result = entry->decl;
		else yyerror("struct do not have same field");
	}
	else yyerror("error: variable is not struct");

	return result;
}

struct decl* structptraccess(struct decl* structptr, struct id* fieldid)
{
	struct decl* result = NULL;
	if(check_is_var(structptr))
	{
		if(structptr->type->typeclass==PTR)
		{
			result = structaccess(structptr->type->ptrto, fieldid);
		}
		else yyerror("error: variable is not struct pointer");
	}

	return result;
}

struct decl* copydecl(struct decl* declptr)
{
	struct decl* copy = (struct decl*)malloc(sizeof(struct decl));

	copy->declclass = declptr->declclass;
	copy->type = declptr->type;
	copy->value = declptr->value;
	copy->charconst = declptr->charconst;
	copy->string = declptr->string;
	copy->formals = declptr->formals;
	copy->returntype = declptr->returntype;
	copy->typeclass = declptr->typeclass;
	copy->elementvar = declptr->elementvar;
	copy->num_index = declptr->num_index;
	copy->fieldlist = declptr->fieldlist;
	copy->ptrto = declptr->ptrto;
	copy->scope = declptr->scope;
	copy->next = NULL;
}

struct decl* plustype(struct decl* op1, struct decl* op2)
{
	struct decl* result = NULL;
	bool isError = false;
	// 만약 둘중 하나라도 NULL
	if(op1 && op2)
	{
		if(check_is_int(op1))
		{
			if(check_is_int(op2)||check_is_ptr(op2)) result = op2;
			else isError = true;
		}
		else if(check_is_ptr(op1))
		{
			if(check_is_int(op2)) result = op1;
			else isError = true;
		}
		else isError = true;
	}

	if(isError) yyerror("error: not computable");

	return result;
}

struct decl* minustype(struct decl* op1, struct decl* op2)
{
	struct decl* result = NULL;
	bool isError = false;

	if(op1 && op2)
	{
		if(check_is_int(op1) && check_is_int(op2)) result = op1;
		else if(check_is_ptr(op1) && check_is_int(op2)) result = op1;
		else isError = true;
	}

	if(isError) yyerror("error: not computable");

	return result;
}

struct decl* optype(struct decl* op1, struct decl* op2)
{
	bool isError = false;
	
	if(op1 && op2)
	{
		if(check_is_char(op1) && check_is_char(op2)) ;
		else if(check_is_int(op1) && check_is_int(op2)) ;
		else if(check_is_ptr(op1) && check_is_ptr(op2))
		{
			if(op1->type->ptrto->type != op2->type->ptrto->type) isError = true;
		}
		else isError = true;
	}

	if(isError)
	{
		yyerror("error: not computable");
		return NULL;
	}
	else return makenumconstdecl(inttype, 1);
}

struct decl* logicaltype(struct decl* op1, struct decl* op2)
{
	bool isError = false;
	struct decl* result = NULL;

	if(op1 && op2)
	{
		if(!(op1->type==inttype) || !(op2->type==inttype))
		{
			isError = true;
			result = NULL;
		}
		else result = makenumconstdecl(inttype, 1);
	}
	else
	{
		result = NULL;
	}

	if(isError) yyerror("error: not int type");

	return result;
}

void connectdecl(struct ste* start)
{
	struct ste* entry = start;
	if(entry)
	{
		while(entry->prev)
		{
			entry->decl->next = entry->prev->decl;
			entry = entry->prev;
		}
	}

	return;
}

void printste(struct ste* start)
{
	struct ste* entry = start;
	fprintf(stderr,"\n");
	while(entry)
	{
		fprintf(stderr,"pointer: %p\n", entry);
		fprintf(stderr,"decl pointer: %p\n", entry->decl);
		fprintf(stderr,"name: %s\n",entry->name->name);
		fprintf(stderr,"class: %d\n",entry->decl->declclass);
		fprintf(stderr,"typeclass: %d\n",entry->decl->typeclass);
		entry = entry->prev;
	}
	fprintf(stderr,"\n");

}

void write_assign(struct decl* lhs, struct decl* rhs)
{
	// push_reg fp
	// push_const 
//	fprintf(codefile, "\tpush_reg fp\n");
//	fprintf(codefile, "\tpush_const %d\n", 1+lhs->offset);
//	fprintf(codefile, "\tadd\n");
//	fprintf(codefile, "\tpush_const %d\n", rhs->value);
//	fprintf(codefile, "\tassign\n");
//	lhs->value = rhs->value;
}



