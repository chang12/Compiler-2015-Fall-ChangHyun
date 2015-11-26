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

int    yylex ();
int    yyerror (char* s);
void 	REDUCE(char* s);


#line 80 "subc.tab.c" /* yacc.c:339  */

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
    ASSIGNOP = 258,
    LOGICAL_OR = 259,
    LOGICAL_AND = 260,
    EQUOP = 261,
    RELOP = 262,
    PLUS_PLUS = 263,
    MINUS_MINUS = 264,
    UNARY = 265,
    ELSE = 266,
    STRUCTOP = 267,
    TYPE = 268,
    STRUCT = 269,
    RETURN = 270,
    IF = 271,
    WHILE = 272,
    FOR = 273,
    BREAK = 274,
    CONTINUE = 275,
    ID = 276,
    CHAR_CONST = 277,
    STRING = 278,
    INTEGER_CONST = 279
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 16 "subc.y" /* yacc.c:355  */

	int		intVal;
	char	*stringVal;

#line 150 "subc.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SUBC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 165 "subc.tab.c" /* yacc.c:358  */

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
#define YYLAST   201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    16,     9,     2,
      23,    24,    14,    12,     3,    13,     2,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
       2,     5,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    21,     2,    22,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     8,    41,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     4,     6,
       7,    10,    11,    18,    19,    20,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    48,    51,    55,    58,    62,    65,    69,
      72,    76,    79,    84,    87,    92,    95,   100,   103,   108,
     111,   114,   117,   122,   125,   130,   133,   138,   143,   146,
     151,   156,   159,   164,   167,   172,   177,   182,   185,   190,
     193,   196,   199,   202,   205,   208,   211,   214,   217,   220,
     225,   228,   233,   236,   241,   244,   247,   252,   257,   260,
     263,   268,   273,   276,   279,   284,   287,   290,   293,   296,
     299,   302,   305,   310,   313,   316,   319,   322,   326,   329,
     333,   336,   340,   343,   347,   350,   353,   356,   361,   364
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "','", "ASSIGNOP", "'='", "LOGICAL_OR",
  "LOGICAL_AND", "'|'", "'&'", "EQUOP", "RELOP", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "PLUS_PLUS", "MINUS_MINUS", "UNARY", "'['", "']'",
  "'('", "')'", "ELSE", "STRUCTOP", "TYPE", "STRUCT", "RETURN", "IF",
  "WHILE", "FOR", "BREAK", "CONTINUE", "ID", "CHAR_CONST", "STRING",
  "INTEGER_CONST", "';'", "'{'", "'}'", "$accept", "program",
  "ext_def_list", "ext_def", "ext_decl_list", "ext_decl", "opt_specifier",
  "type_specifier", "struct_specifier", "opt_tag", "var_decl",
  "funct_decl", "var_list", "param_decl", "def_list", "def", "decl_list",
  "decl", "compound_stmt", "local_defs", "stmt_list", "stmt", "test",
  "opt_expr", "expr", "or_expr", "or_list", "and_expr", "and_list",
  "binary", "unary", "args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    44,   258,    61,   259,   260,   124,    38,
     261,   262,    43,    45,    42,    47,    37,    33,   263,   264,
     265,    91,    93,    40,    41,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,    59,
     123,   125
};
# endif

#define YYPACT_NINF -85

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-85)))

#define YYTABLE_NINF -18

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -85,    79,    17,   -85,   -85,    20,   -85,    -1,   -85,   -85,
      42,    51,    58,    -2,     1,   -85,   -85,    69,   -85,   -85,
     -13,   124,    -1,   -85,   -85,   -85,    83,   -85,   110,   -85,
       0,    26,   -85,   -85,   -85,    59,   -85,   -85,    -1,   -85,
     -85,   100,   -85,    59,   -85,    34,   -85,   -85,     2,   -85,
     -85,   136,   136,   136,   136,   136,    99,   105,   116,   117,
      94,   107,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       3,   -85,    16,   -85,    49,   165,    -3,    -1,   -85,    -3,
      -3,    -3,    -3,    90,   -85,     7,   136,   136,   136,   -85,
     -85,   136,   136,   -85,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   -85,   -85,   136,   106,   112,
     -85,   -85,   -85,   145,    84,   146,   153,    84,    84,    84,
     -85,   -85,   165,   165,   171,   142,    12,    12,   -85,   -85,
     -85,    56,   -85,    84,    35,   -85,    67,    67,   136,   -85,
     136,   -85,   168,   -85,   155,    84,    67,   136,   -85,   172,
      67,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,    12,     1,    13,    18,     3,     0,    11,    14,
      16,     0,     0,    19,     0,     7,     9,    10,    29,    22,
       0,     0,     0,     5,    29,     6,     0,    20,     0,    23,
       0,     0,    25,     8,    10,    36,    38,    15,     0,    28,
      21,    19,    27,     0,    24,     0,    34,    33,     0,    32,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    75,    77,    74,    43,    35,    40,    37,
       0,    56,    57,    60,    61,    64,    72,     0,    30,    82,
      78,    83,    79,     0,    41,     0,    51,    51,    53,    48,
      49,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
      31,    73,    42,     0,    50,     0,     0,    52,    54,    55,
      58,    59,    62,    63,    66,    65,    70,    71,    67,    68,
      69,     0,    87,    88,     0,    85,     0,     0,    51,    84,
       0,    86,    44,    46,     0,    89,     0,    53,    45,     0,
       0,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   -85,   -85,   173,   -85,     4,   -85,   -85,
     -28,    55,   -85,   154,   174,   -85,   -85,   122,   183,   -85,
     -85,   -19,   -84,    54,   -55,   -85,   -85,    31,   -85,    64,
     137,   -85
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    14,    15,     7,    30,     9,    11,
      16,    47,    31,    32,    26,    39,    48,    49,    68,    36,
      45,    69,   113,   116,    70,    71,    72,    73,    74,    75,
      76,   134
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      83,    85,    42,   115,    22,    77,     8,    91,    92,    27,
      46,    91,    92,    12,    12,   105,   106,    -2,   107,    20,
     108,    21,    94,   109,    95,    28,   102,   103,   104,    43,
      38,   114,   114,   117,    13,    41,   118,   119,   140,    38,
      23,    78,    93,    51,     4,     5,   112,    52,    53,    46,
      44,    54,   131,   133,   144,    10,    96,    55,    97,   141,
      91,    92,    17,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    24,    67,    51,    34,   139,     3,
      52,    53,   -17,   114,    54,   145,     4,     5,    91,    92,
      55,    18,   117,    19,    91,    92,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    24,    51,    24,
       4,     5,    52,    53,   111,    51,    54,   142,   143,    52,
      53,    20,    55,    54,    37,   120,   121,   148,    86,    55,
     132,   151,    40,    89,    62,    63,    64,    65,    84,    87,
      88,    62,    63,    64,    65,    51,    90,   135,    29,    52,
      53,     4,     5,    54,   100,   101,   102,   103,   104,    55,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   136,
     137,    62,    63,    64,    65,    98,    99,   100,   101,   102,
     103,   104,    99,   100,   101,   102,   103,   104,    79,    80,
      81,    82,   138,   146,   147,    33,   150,    50,    35,   110,
      25,   149
};

static const yytype_uint8 yycheck[] =
{
      55,    56,    30,    87,     3,     3,     2,     4,     5,    22,
      38,     4,     5,    14,    14,    18,    19,     0,    21,    21,
      23,    23,     6,    26,     8,    38,    14,    15,    16,     3,
      26,    86,    87,    88,    35,    35,    91,    92,     3,    35,
      39,    39,    39,     9,    27,    28,    39,    13,    14,    77,
      24,    17,   107,   108,   138,    35,     7,    23,     9,    24,
       4,     5,     7,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     9,    22,    22,     0,
      13,    14,    40,   138,    17,   140,    27,    28,     4,     5,
      23,    40,   147,    35,     4,     5,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     9,    40,
      27,    28,    13,    14,    24,     9,    17,   136,   137,    13,
      14,    21,    23,    17,    41,    94,    95,   146,    23,    23,
      24,   150,    22,    39,    35,    36,    37,    38,    39,    23,
      23,    35,    36,    37,    38,     9,    39,    35,    24,    13,
      14,    27,    28,    17,    12,    13,    14,    15,    16,    23,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    24,
      24,    35,    36,    37,    38,    10,    11,    12,    13,    14,
      15,    16,    11,    12,    13,    14,    15,    16,    51,    52,
      53,    54,    39,    25,    39,    22,    24,    43,    24,    77,
      17,   147
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,    44,     0,    27,    28,    45,    48,    49,    50,
      35,    51,    14,    35,    46,    47,    52,    53,    40,    35,
      21,    23,     3,    39,    40,    60,    56,    22,    38,    24,
      49,    54,    55,    47,    53,    56,    61,    41,    49,    57,
      22,    35,    52,     3,    24,    62,    52,    53,    58,    59,
      55,     9,    13,    14,    17,    23,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    41,    60,    63,
      66,    67,    68,    69,    70,    71,    72,     3,    39,    72,
      72,    72,    72,    66,    39,    66,    23,    23,    23,    39,
      39,     4,     5,    39,     6,     8,     7,     9,    10,    11,
      12,    13,    14,    15,    16,    18,    19,    21,    23,    26,
      59,    24,    39,    64,    66,    64,    65,    66,    66,    66,
      69,    69,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    66,    24,    66,    73,    35,    24,    24,    39,    22,
       3,    24,    63,    63,    64,    66,    25,    39,    63,    65,
      24,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    46,    47,
      47,    48,    48,    49,    49,    50,    50,    51,    51,    52,
      52,    52,    52,    53,    53,    54,    54,    55,    56,    56,
      57,    58,    58,    59,    59,    60,    61,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    65,    65,    66,    66,    66,    67,    68,    68,
      68,    69,    70,    70,    70,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     1,     3,     1,
       1,     1,     0,     1,     1,     5,     2,     1,     0,     1,
       3,     4,     2,     3,     4,     1,     3,     2,     2,     0,
       3,     3,     1,     1,     1,     4,     1,     2,     0,     2,
       1,     2,     3,     1,     5,     7,     5,     9,     2,     2,
       1,     0,     1,     0,     3,     3,     1,     1,     3,     3,
       1,     1,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     4,     3,     4,     3,     1,     3
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
        case 2:
#line 44 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("program->ext_def_list");
        }
#line 1363 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("ext_def_list->ext_def_list ext_def");
        }
#line 1371 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 51 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("ext_def_list->epsilon");
        }
#line 1379 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 55 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("ext_def->opt_specifier ext_decl_list ';'");
	}
#line 1387 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 58 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("ext_def->opt_specifier funct_decl compound_stmt");
	}
#line 1395 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 62 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("ext_decl_list->ext_decl");
	}
#line 1403 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 65 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("ext_decl_list->ext_decl_list ',' ext_decl");
	}
#line 1411 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 69 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("ext_decl->var_decl");
	}
#line 1419 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 72 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("ext_decl->funct_decl");
	}
#line 1427 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 76 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("opt_specifier->type_specifier");
	}
#line 1435 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 79 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("opt_specifier->epsilon");
	}
#line 1443 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 84 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("type_specifier->TYPE");
	}
#line 1451 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 87 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("type_specifier->struct_specifier");
	}
#line 1459 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 92 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("struct_specifier->STRUCT opt_tag '{' def_list '}'");
	}
#line 1467 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 95 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("struct_specifier->STRUCT ID");
	}
#line 1475 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 100 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("opt_tag->ID");
	}
#line 1483 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 103 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("opt_tag->epsilon");
	}
#line 1491 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 108 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("var_decl->ID");
	}
#line 1499 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 111 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("var_decl->ID '[' ']'");
	}
#line 1507 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 114 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("var_decl->ID '[' INTEGER_CONST ']'");
	}
#line 1515 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 117 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("var_decl->'*'ID");
	}
#line 1523 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 122 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("funct_decl->ID '(' ')'");
	}
#line 1531 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 125 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("ID '(' var_list ')'");
	}
#line 1539 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 130 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("var_list->param_decl");
	}
#line 1547 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 133 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("var_list->var_list ',' param_decl");
	}
#line 1555 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 138 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("param_decl->type_specifier var_decl");
	}
#line 1563 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 143 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("def_list->def_list def");
	}
#line 1571 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 146 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("def_list->epsilon");
	}
#line 1579 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 151 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("def->type_specifier decl_list ';'");
	}
#line 1587 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 156 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("decl_list->decl_list ',' decl");
	}
#line 1595 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 159 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("decl_list->decl");
	}
#line 1603 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 164 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("decl->funct_decl");
	}
#line 1611 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 167 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("decl->var_decl");
	}
#line 1619 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 172 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("compound_stmt->'{' local_defs stmt_list '}'");
	}
#line 1627 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 177 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("local_defs->def_list");
	}
#line 1635 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 182 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt_list->stmt_list stmt");
	}
#line 1643 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 185 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt_list->epsilon");
	}
#line 1651 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 190 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt->expr ';'");
	}
#line 1659 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 193 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt->compound_stmt");
	}
#line 1667 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 196 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt->RETURN ';'");
	}
#line 1675 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 199 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt->RETURN expr ';'");
	}
#line 1683 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 202 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt->';'");
	}
#line 1691 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 205 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt->IF '(' test ')' stmt");
	}
#line 1699 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 208 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt->IF '(' test ')' stmt ELSE stmt");
	}
#line 1707 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 211 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt->WHILE '(' test ')' stmt");
	}
#line 1715 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 214 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt->FOR '(' opt_expr ';' test ';' opt_expr ')' stmt");
	}
#line 1723 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 217 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt->BREAK ';'");
	}
#line 1731 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 220 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("stmt->CONTINUE ';'");
	}
#line 1739 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 225 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("test->expr");
	}
#line 1747 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 228 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("test->epsilon");
	}
#line 1755 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 233 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("opt_expr->expr");
	}
#line 1763 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 236 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("opt_expr->epsilon");
	}
#line 1771 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 241 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("expr->expr ASSIGNOP expr");
	}
#line 1779 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 244 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("expr->expr '=' expr");
	}
#line 1787 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 247 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("expr->or_expr");
	}
#line 1795 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 252 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("or_expr->or_list");
	}
#line 1803 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 257 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("or_list->or_list LOGICAL_OR and_expr");
	}
#line 1811 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 260 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("or_list->or_list '|' and_expr");
	}
#line 1819 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 263 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("or_list->and_expr");
	}
#line 1827 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 268 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("and_expr->and_list");
	}
#line 1835 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 273 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("and_list->and_list LOGICAL_AND binary");
	}
#line 1843 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 276 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("and_list->and_list '&' binary");
	}
#line 1851 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 279 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("and_list->binary");
	}
#line 1859 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 284 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("binary->binary RELOP binary");
	}
#line 1867 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 287 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("binary->binary EQUOP binary");
	}
#line 1875 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 290 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("binary->binary '*' binary");
	}
#line 1883 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 293 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("binary->binary '/' binary");
	}
#line 1891 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 296 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("binary->binary '%' binary");
	}
#line 1899 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 299 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("binary->binary '+' binary");
	}
#line 1907 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 302 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("binary->binary '-' binary");
	}
#line 1915 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 305 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("binary->unary");
	}
#line 1923 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 310 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->'(' expr ')'");
	}
#line 1931 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 313 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->INTEGER_CONST");
	}
#line 1939 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 316 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->CHAR_CONST");
	}
#line 1947 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 319 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->ID");
	}
#line 1955 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 322 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->STRING");
	}
#line 1963 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 326 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->'-'unary");
	}
#line 1971 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 329 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->'!'unary");
	}
#line 1979 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 333 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->unary PLUS_PLUS");
	}
#line 1987 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 336 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->unary MINUS_MINUS");
	}
#line 1995 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 340 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->'&'unary");
	}
#line 2003 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 343 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->'*'unary");
	}
#line 2011 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 347 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary-> unary '[' expr ']'");
	}
#line 2019 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 350 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->unary STRUCTOP ID");
	}
#line 2027 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 353 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->unary '(' args ')'");
	}
#line 2035 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 356 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("unary->unary '(' ')'");
	}
#line 2043 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 361 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("args->expr");
	}
#line 2051 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 364 "subc.y" /* yacc.c:1646  */
    {
		REDUCE("args->args ',' expr");
	}
#line 2059 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2063 "subc.tab.c" /* yacc.c:1646  */
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
#line 369 "subc.y" /* yacc.c:1906  */


/*  Additional C Codes 
 	Implemnt REDUCE function here */

int yyerror (char* s)
{
	fprintf (stderr, "%s\n", s);
}

void REDUCE(char* s)
{
	printf("%s\n",s);
}

