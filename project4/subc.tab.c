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
    TYPE = 266,
    VOID = 267,
    STRUCT = 268,
    RETURN = 269,
    IF = 270,
    WHILE = 271,
    FOR = 272,
    BREAK = 273,
    CONTINUE = 274,
    ID = 275,
    PRINT = 276,
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
#line 23 "subc.y" /* yacc.c:355  */

	int				intval;
	char			*stringval;
	bool			boolval;
	struct id		*idptr;
	struct decl		*declptr;
	struct ste		*steptr;

#line 161 "subc.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SUBC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 176 "subc.tab.c" /* yacc.c:358  */

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
#define YYLAST   217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

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
       2,     2,     2,    16,     2,     2,     2,    15,     8,     2,
      21,    22,    13,    11,     3,    12,    23,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    40,
       2,     4,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,    20,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     7,    42,     2,     2,     2,     2,
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
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    57,    57,    62,    64,    69,    99,   139,   148,   150,
     156,   161,   164,   170,   169,   184,   198,   245,   292,   292,
     384,   387,   393,   396,   402,   437,   482,   484,   489,   522,
     564,   566,   571,   571,   591,   596,   598,   603,   605,   607,
     614,   624,   626,   628,   630,   632,   634,   636,   638,   644,
     646,   651,   657,   674,   680,   686,   689,   695,   701,   704,
     710,   713,   716,   719,   722,   728,   731,   734,   737,   740,
     743,   753,   762,   770,   773,   776,   779,   782,   792,   800,
     807,   810,   813,   817,   823,   829
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
  "ELSE", "STRUCTOP", "TYPE", "VOID", "STRUCT", "RETURN", "IF", "WHILE",
  "FOR", "BREAK", "CONTINUE", "ID", "PRINT", "CHAR_CONST", "STRING",
  "INTEGER_CONST", "';'", "'{'", "'}'", "$accept", "program",
  "ext_def_list", "ext_def", "type_specifier", "struct_specifier", "$@1",
  "func_decl", "@2", "pointers", "param_list", "param_decl", "def_list",
  "def", "compound_stmt", "$@3", "local_defs", "stmt_list", "stmt",
  "expr_e", "const_expr", "expr", "or_expr", "or_list", "and_expr",
  "and_list", "binary", "unary", "args", YY_NULLPTR
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
      59,   123,   125
};
# endif

#define YYPACT_NINF -119

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-119)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -119,    23,    41,  -119,  -119,  -119,   -10,  -119,    -3,  -119,
      55,     6,  -119,  -119,    26,  -119,  -119,  -119,  -119,    -5,
    -119,  -119,   174,    67,  -119,    41,  -119,    64,   174,   174,
     174,   174,   174,   174,   174,  -119,  -119,  -119,  -119,    44,
    -119,  -119,    88,  -119,    94,   121,    84,  -119,    90,    41,
      -2,    79,  -119,    42,  -119,   179,   179,   179,   179,   179,
     179,    93,     9,    85,   174,   174,   174,   174,   174,   174,
     174,  -119,  -119,   174,   146,    89,    92,  -119,   115,    43,
    -119,  -119,   113,  -119,   139,   128,   129,   132,   125,   126,
    -119,  -119,  -119,  -119,  -119,   130,  -119,  -119,  -119,  -119,
     179,   121,    75,    99,  -119,  -119,  -119,   141,  -119,   166,
     149,  -119,  -119,   137,    41,  -119,    -4,  -119,   133,   174,
     174,   174,  -119,  -119,  -119,  -119,   174,  -119,   156,  -119,
     174,  -119,  -119,   158,   167,   148,  -119,  -119,   174,   173,
     105,   105,   174,   181,   154,   175,  -119,   163,  -119,  -119,
     105,   174,  -119,   183,   105,  -119
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    10,    11,     0,     3,    21,    12,
       0,    15,    20,     8,     0,     7,    32,     9,    13,     0,
      27,    27,     0,    18,     5,    34,    36,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    68,    69,    67,     0,
      51,    53,    54,    56,    57,    59,    64,    16,     0,     0,
      21,     0,    26,     0,    14,    77,    71,    78,    72,    75,
      76,     0,    64,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,     0,     0,    17,    21,     0,
      22,    30,     0,    31,     0,     0,     0,     0,     0,     0,
      48,    41,    33,    38,    35,     0,    65,    66,     6,    55,
      64,    58,    61,    60,    62,    63,    52,     0,    83,    84,
       0,    80,    81,     0,     0,    19,     0,    39,     0,     0,
       0,    50,    46,    47,    37,    79,     0,    82,    24,    23,
       0,    28,    40,     0,     0,     0,    49,    85,     0,     0,
       0,     0,    50,     0,     0,    42,    44,     0,    25,    29,
       0,    50,    43,     0,     0,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,  -119,  -119,     0,  -119,  -119,   204,  -119,   -49,
    -119,    96,   186,  -119,   198,  -119,  -119,  -119,   -84,  -118,
     -85,   -22,  -119,  -119,   150,  -119,   -47,   -25,    91
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    50,     9,    21,    51,    49,    14,
      79,    80,    25,    52,    93,    20,    26,    53,    94,   135,
      39,    95,    41,    42,    43,    44,    45,    46,   110
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      40,    82,     8,    55,    56,    57,    58,    59,    60,    62,
      12,    12,    61,    70,    22,   130,    23,    23,   101,   102,
     103,   104,   105,     3,   147,    11,    71,    72,    73,   113,
      74,    97,    75,   153,    76,    24,   131,    13,    81,   100,
     100,   100,   100,   100,   100,   139,   114,    18,   106,    78,
      28,   107,   109,   143,    29,    30,   145,   146,    31,    32,
      33,    19,   118,    34,    63,   115,   152,     4,     5,     6,
     155,    84,    85,    86,    87,    88,    89,    35,    90,    36,
      37,    38,    91,    16,    92,    67,    68,    69,    70,    47,
       4,     5,     6,    64,    48,    15,    16,   133,   134,   136,
      65,    71,    72,    73,   109,    74,    54,    75,    40,    76,
      68,    69,    77,    28,    78,    96,    40,    29,    30,    83,
     136,    31,    32,    33,   111,    98,    34,   112,    12,   136,
      66,    67,    68,    69,    84,    85,    86,    87,    88,    89,
      35,    90,    36,    37,    38,    91,    16,    28,   116,   119,
     120,    29,    30,   121,    28,    31,    32,    33,    29,    30,
      34,   125,    31,    32,    33,   122,   123,    34,   108,   126,
     124,   127,   128,   132,    35,   138,    36,    37,    38,   117,
     140,    35,    28,    36,    37,    38,    29,    30,   142,   141,
      31,    32,    33,   144,   149,    34,    71,    72,    73,   150,
      74,   148,    75,   151,    76,   154,    10,    27,    17,    35,
     129,    36,    37,    38,    99,     0,     0,   137
};

static const yytype_int16 yycheck[] =
{
      22,    50,     2,    28,    29,    30,    31,    32,    33,    34,
      13,    13,    34,     4,    19,    19,    21,    21,    65,    66,
      67,    68,    69,     0,   142,    35,    17,    18,    19,    78,
      21,    22,    23,   151,    25,    40,    40,    40,    40,    64,
      65,    66,    67,    68,    69,   130,     3,    41,    70,    49,
       8,    73,    74,   138,    12,    13,   140,   141,    16,    17,
      18,    35,    84,    21,    20,    22,   150,    26,    27,    28,
     154,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    10,    11,    12,     4,    22,
      26,    27,    28,     5,    27,    40,    41,   119,   120,   121,
       6,    17,    18,    19,   126,    21,    42,    23,   130,    25,
      11,    12,    22,     8,   114,    22,   138,    12,    13,    40,
     142,    16,    17,    18,    35,    40,    21,    35,    13,   151,
       9,    10,    11,    12,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     8,    35,    21,
      21,    12,    13,    21,     8,    16,    17,    18,    12,    13,
      21,    20,    16,    17,    18,    40,    40,    21,    22,     3,
      40,    22,    35,    40,    35,    19,    37,    38,    39,    40,
      22,    35,     8,    37,    38,    39,    12,    13,    40,    22,
      16,    17,    18,    20,    40,    21,    17,    18,    19,    24,
      21,    20,    23,    40,    25,    22,     2,    21,    10,    35,
     114,    37,    38,    39,    64,    -1,    -1,   126
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    45,     0,    26,    27,    28,    46,    47,    48,
      50,    35,    13,    40,    52,    40,    41,    57,    41,    35,
      58,    49,    19,    21,    40,    55,    59,    55,     8,    12,
      13,    16,    17,    18,    21,    35,    37,    38,    39,    63,
      64,    65,    66,    67,    68,    69,    70,    22,    27,    51,
      47,    50,    56,    60,    42,    70,    70,    70,    70,    70,
      70,    64,    70,    20,     5,     6,     9,    10,    11,    12,
       4,    17,    18,    19,    21,    23,    25,    22,    47,    53,
      54,    40,    52,    40,    29,    30,    31,    32,    33,    34,
      36,    40,    42,    57,    61,    64,    22,    22,    40,    67,
      70,    69,    69,    69,    69,    69,    64,    64,    22,    64,
      71,    35,    35,    52,     3,    22,    35,    40,    64,    21,
      21,    21,    40,    40,    40,    20,     3,    22,    35,    54,
      19,    40,    40,    64,    64,    62,    64,    71,    19,    63,
      22,    22,    40,    63,    20,    61,    61,    62,    20,    40,
      24,    40,    61,    62,    22,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      47,    47,    47,    49,    48,    48,    50,    50,    51,    50,
      52,    52,    53,    53,    54,    54,    55,    55,    56,    56,
      56,    56,    58,    57,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    63,    64,    64,    65,    66,    66,    67,    68,    68,
      69,    69,    69,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     2,
       1,     1,     1,     0,     6,     2,     5,     6,     0,     7,
       1,     0,     1,     3,     3,     6,     2,     0,     4,     7,
       2,     2,     0,     5,     1,     2,     0,     2,     1,     2,
       3,     1,     5,     7,     5,     9,     2,     2,     1,     1,
       0,     1,     3,     1,     1,     3,     1,     1,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       3,     3,     4,     3,     1,     3
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
#line 57 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1372 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 62 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1379 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 64 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1386 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 69 "subc.y" /* yacc.c:1646  */
    {
			// ID 값으로 동일 scope에 존재하는 값인지 여부 체크
			// 재정의하면 error
			struct decl* declptr = findcurrentdecl((yyvsp[-1].idptr));
			if(declptr)
			{
				// 동일 name으로 존재하더라도, struct 정의라면 허용한다.
				// ex) struct a{}; 하고 int a; 해도 문제 X
				// 그러므로 findcurrentdecl로 반환된 declclass 까지 반환한다.
				// 위의 내용을 findcurrentdecl 에서 수행하도록 옮겼다.
				char errorMsg[100] = "error: redeclaration of ";
				yyerror(strcat(errorMsg, (yyvsp[-1].idptr)->name));
			}
			else
			{
				if((yyvsp[-3].declptr))
				{
					if((yyvsp[-2].boolval))
					{
						// VAR PTR
						declare((yyvsp[-1].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[-3].declptr)))));
					}
					else
					{
						// VAR
						declare((yyvsp[-1].idptr), makevardecl((yyvsp[-3].declptr)));
					}
				}
			}
		}
#line 1421 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 99 "subc.y" /* yacc.c:1646  */
    {

			// ID integrity
			struct decl* declptr = findcurrentdecl((yyvsp[-4].idptr));
			if(declptr)
			{
				char errorMsg[100] = "error: redeclaration of ";
				yyerror(strcat(errorMsg, (yyvsp[-4].idptr)->name));
			}
			else
			{
				// TYPE integrity
				if((yyvsp[-6].declptr))
				{
					// Array size integrity
					if((yyvsp[-2].declptr))
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
					
				}
			}
		}
#line 1466 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 139 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[-1].declptr))
			{
				if((yyvsp[-1].declptr)->value == 1)
				{
					yyerror("error: function redeclaration");
				}
			}
		}
#line 1480 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 148 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1487 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 150 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[-1].declptr)) (yyvsp[-1].declptr)->value = 2;
		}
#line 1495 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 156 "subc.y" /* yacc.c:1646  */
    {
			if(!strcmp((yyvsp[0].idptr)->name,"int")) (yyval.declptr) = inttype;
			else if(!strcmp((yyvsp[0].idptr)->name,"char")) (yyval.declptr) = chartype;
			else (yyval.declptr) = NULL;
		}
#line 1505 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 161 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = voidtype;
		}
#line 1513 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 164 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1520 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 170 "subc.y" /* yacc.c:1646  */
    {
				push_scope();	
			}
#line 1528 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 174 "subc.y" /* yacc.c:1646  */
    {
				struct ste* fields = pop_scope();
				if(findstructdecl((yyvsp[-4].idptr)))
				{
					yyerror("error: redeclaration");
					(yyval.declptr) = NULL;
				}
				else declare((yyvsp[-4].idptr), (yyval.declptr)=makestructdecl(fields));
				// 새로운 struct type을 생성함
			}
#line 1543 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 184 "subc.y" /* yacc.c:1646  */
    {
			// ID로 미리 정의되어있는 struct type 인지 확인한다.
			struct decl* structdecl = findstructdecl((yyvsp[0].idptr));
			(yyval.declptr) = NULL;
			if(structdecl) (yyval.declptr) = structdecl;
			else
			{
				yyerror("error: incomplete type error");
			}

		}
#line 1559 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 198 "subc.y" /* yacc.c:1646  */
    {
			
			// 존재하는 func 이름인지 확인
			struct decl* funcdecl = findfuncdecl((yyvsp[-2].idptr));

			if(funcdecl)
			{
				if(check_samereturntype(funcdecl->returntype, (yyvsp[-4].declptr), (yyvsp[-3].boolval)))
				{
					if(funcdecl->formals)
					{
						yyerror("error: conflicting types for function");
						(yyval.declptr) = NULL;
					}
					else if(funcdecl->value == 2)
					{
						yyerror("error: function redeclaration");
						(yyval.declptr) = NULL;
					}
					else
					{
						funcdecl->value = 1;
						(yyval.declptr) = funcdecl;
					}
				}
				else
				{
					yyerror("error: conflicting types for function");
					(yyval.declptr) = NULL;
				}
			}
			else
			{
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
		}
#line 1611 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 245 "subc.y" /* yacc.c:1646  */
    {

			// 존재하는 func 이름인지 확인
			struct decl* funcdecl = findfuncdecl((yyvsp[-3].idptr));

			if(funcdecl)
			{
				if(check_samereturntype(funcdecl->returntype, (yyvsp[-5].declptr), (yyvsp[-4].boolval)))
				{
					if(funcdecl->formals)
					{
						yyerror("error: conflicting types for function");
						(yyval.declptr) = NULL;
					}
					else if(funcdecl->value == 2)
					{
						yyerror("error: function redeclaration");
						(yyval.declptr) = NULL;
					}
					else
					{
						funcdecl->value = 1;
						(yyval.declptr) = funcdecl;
					}
				}
				else
				{
					yyerror("error: conflicting types for function");
					(yyval.declptr) = NULL;
				}
			}
			else
			{
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
		}
#line 1663 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 292 "subc.y" /* yacc.c:1646  */
    {
			// FUNC declare 는 param_list 를 확인한 뒤로 미룬다
			struct decl* funcdecl = findfuncdecl((yyvsp[-1].idptr));

			if(funcdecl)
			{
				if(check_samereturntype(funcdecl->returntype, (yyvsp[-3].declptr), (yyvsp[-2].boolval)))
				{
					if(funcdecl->value == 2)
					{
						yyerror("error: function redeclaration");
						(yyval.declptr) = NULL;
					}
					else
					{
						funcdecl->value = 1;
						(yyval.declptr) = funcdecl;
					}
				}
				else
				{
					yyerror("error: conflicting types for function");
					(yyval.declptr) = NULL;
				}
				push_scope();
				declare(returnid, funcdecl->returntype);
			}
			else
			{
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
		}
#line 1712 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 336 "subc.y" /* yacc.c:1646  */
    {
			// param_list 받는 과정에서 error가 발생할 수 있다
			// 그러므로 param_list 의 NULL 여부를 체크한다.
			// 그리고 func_decl 에 declptr을 매기는 작업도, 여기서 해준다.

			struct ste*	formals = pop_scope();
			connectdecl(formals);
			struct decl* funcdecl = (yyvsp[-2].declptr);


			bool clear = true;

			if(!funcdecl)
			{
				(yyval.declptr) = NULL;
				clear = false;
			}
			else if(!(yyvsp[-1].boolval))
			{
				// funcdecl exists, but param_list error
				if(funcdecl->value == 1) funcdecl->value = 0;
				(yyval.declptr) = NULL;
				clear = false;
			}
			else
			{
				if(funcdecl->value == 1)
				{
					if(!check_sameformals(funcdecl->formals->decl, formals->prev->decl))
					{
						yyerror("error: conflicting types for function");
						funcdecl->value = 0;
						(yyval.declptr) = NULL;
						clear = false;
					}
				}
			}

			if(clear)
			{
				funcdecl->formals = formals->prev;
				(yyval.declptr) = funcdecl;
				declare((yyvsp[-4].idptr), funcdecl);
			}
		}
#line 1762 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 384 "subc.y" /* yacc.c:1646  */
    {
			(yyval.boolval) = true;
		}
#line 1770 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 387 "subc.y" /* yacc.c:1646  */
    {
			(yyval.boolval) = false;
		}
#line 1778 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 393 "subc.y" /* yacc.c:1646  */
    {
			(yyval.boolval) = (yyvsp[0].declptr);
		}
#line 1786 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 396 "subc.y" /* yacc.c:1646  */
    {
			(yyval.boolval) = (yyvsp[-2].boolval) && (yyvsp[0].declptr);
		}
#line 1794 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 402 "subc.y" /* yacc.c:1646  */
    {
			// ID 값으로 동일 scope에 존재하는 값인지 여부 체크
			// 재정의하면 error
			struct decl* declptr = findcurrentdecl((yyvsp[0].idptr));
			if(declptr)
			{
				// 동일 name으로 존재하더라도, struct 정의라면 허용한다.
				// ex) struct a{}; 하고 int a; 해도 문제 X
				// 그러므로 findcurrentdecl로 반환된 declclass 까지 반환한다.
				// 위의 내용을 findcurrentdecl 에서 수행하도록 옮겼다.
				char errorMsg[100] = "error: redeclaration of ";
				yyerror(strcat(errorMsg, strcat((yyvsp[0].idptr)->name,"\n")));
				(yyval.declptr) = NULL;
			}
			else
			{
				if((yyvsp[-2].declptr))
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
			}
		}
#line 1834 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 437 "subc.y" /* yacc.c:1646  */
    {
			// ID integrity
			struct decl* declptr = findcurrentdecl((yyvsp[-3].idptr));
			if(declptr)
			{
				char errorMsg[100] = "error: redeclaration of ";
				yyerror(strcat(errorMsg, (yyvsp[-3].idptr)->name));
				(yyval.declptr) = NULL;
			}
			else
			{
				(yyval.declptr) = NULL;
				// TYPE integrity
				if((yyvsp[-5].declptr))
				{
					// Array size integrity
					if((yyvsp[-1].declptr))
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
					
				}
			}
		}
#line 1881 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 482 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1888 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 484 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1895 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 489 "subc.y" /* yacc.c:1646  */
    {
			// ID 값으로 동일 scope에 존재하는 값인지 여부 체크
			// 재정의하면 error
			if((yyvsp[-3].declptr))
			{
				struct decl* declptr = findcurrentdecl((yyvsp[-1].idptr));
				if(declptr)
				{
					// 동일 name으로 존재하더라도, struct 정의라면 허용한다.
					// ex) struct a{}; 하고 int a; 해도 문제 X
					// 그러므로 findcurrentdecl로 반환된 declclass 까지 반환한다.
				// 위의 내용을 findcurrentdecl 에서 수행하도록 옮겼다.
					char errorMsg[100] = "error: redeclaration of ";
					yyerror(strcat(errorMsg, (yyvsp[-1].idptr)->name));
				}
				else
				{
					if((yyvsp[-3].declptr))
					{
						if((yyvsp[-2].boolval))
						{
							// VAR PTR
							declare((yyvsp[-1].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[-3].declptr)))));
						}
					else
						{
							// VAR
							declare((yyvsp[-1].idptr), makevardecl((yyvsp[-3].declptr)));
						}
					}
				}
			}
		}
#line 1933 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 522 "subc.y" /* yacc.c:1646  */
    {

			if((yyvsp[-6].declptr))
			{
				// ID integrity
				struct decl* declptr = findcurrentdecl((yyvsp[-4].idptr));
				if(declptr)
				{
					char errorMsg[100] = "error: redeclaration of ";
					yyerror(strcat(errorMsg, (yyvsp[-4].idptr)->name));
				}
				else
				{
					// TYPE integrity
					if((yyvsp[-6].declptr))
					{
						// Array size integrity
						if((yyvsp[-2].declptr))
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
					}
				}
			}
		}
#line 1980 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 564 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1987 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 566 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1994 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 571 "subc.y" /* yacc.c:1646  */
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
#line 2014 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 585 "subc.y" /* yacc.c:1646  */
    {
			pop_scope();
		}
#line 2022 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 591 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2029 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 596 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2036 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 598 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2043 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 603 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2050 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 605 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2057 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 607 "subc.y" /* yacc.c:1646  */
    {
			struct decl* type = findwholedecl(returnid);
			if(type != voidtype) 
			{
				yyerror("error: return value is not return type");
			}
		}
#line 2069 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 614 "subc.y" /* yacc.c:1646  */
    {
			struct decl* type = findwholedecl(returnid);
			if((yyvsp[-1].declptr))
			{
				if(!check_compatibletype((yyvsp[-1].declptr)->type, type))
				{
					yyerror("error: return value is not return type");
				}	
			}
		}
#line 2084 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 624 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2091 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 626 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2098 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 628 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2105 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 630 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2112 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 632 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2119 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 634 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2126 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 636 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2133 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 638 "subc.y" /* yacc.c:1646  */
    {
			printste(cscope->top);
		}
#line 2141 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 644 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2148 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 646 "subc.y" /* yacc.c:1646  */
    {
		}
#line 2155 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 651 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 2163 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 657 "subc.y" /* yacc.c:1646  */
    {
			bool result = false;
			if(check_is_var((yyvsp[-2].declptr)))
			{
				if(check_compatibledecl((yyvsp[-2].declptr), (yyvsp[0].declptr))) (yyval.declptr) = (yyvsp[-2].declptr);
				else
				{
					yyerror("error: LHS and RHS are not same type");
					(yyval.declptr) = NULL;
				}
			}
			else
			{
				yyerror("error: LHS is not a varaible");
				(yyval.declptr) = NULL;
			}
		}
#line 2185 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 674 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 2193 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 680 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 2201 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 686 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = logicaltype((yyvsp[-2].declptr), (yyvsp[0].declptr));
		}
#line 2209 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 689 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 2217 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 695 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 2225 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 701 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = logicaltype((yyvsp[-2].declptr), (yyvsp[0].declptr));
		}
#line 2233 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 704 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 2241 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 710 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = optype((yyvsp[-2].declptr), (yyvsp[0].declptr));
		}
#line 2249 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 713 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = optype((yyvsp[-2].declptr), (yyvsp[0].declptr));
		}
#line 2257 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 716 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = plustype((yyvsp[-2].declptr), (yyvsp[0].declptr));
		}
#line 2265 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 719 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = minustype((yyvsp[-2].declptr), (yyvsp[0].declptr));
		}
#line 2273 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 722 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 2281 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 728 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 2289 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 731 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 2297 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 734 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makenumconstdecl(inttype, (yyvsp[0].intval));
		}
#line 2305 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 737 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makecharconstdecl(chartype, (yyvsp[0].stringval));
		}
#line 2313 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 740 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makestringconstdecl(stringtype, (yyvsp[0].stringval));
		}
#line 2321 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 743 "subc.y" /* yacc.c:1646  */
    {

			// ID에 대응되는 decl이 없다면, findcurrentdecl은 NULL을 리턴
			
			struct decl* declptr = findwholedecl((yyvsp[0].idptr));

			if(!declptr) yyerror("error: not declared");

			(yyval.declptr) = declptr;
		}
#line 2336 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 753 "subc.y" /* yacc.c:1646  */
    {
			// $2 는 integer여야 한다
			if((yyvsp[0].declptr)->type==inttype) (yyval.declptr) = (yyvsp[0].declptr);
			else
			{
				yyerror("error: not int type");
				(yyval.declptr) = NULL;
			}
		}
#line 2350 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 762 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].declptr)->type==inttype) (yyval.declptr) = (yyvsp[0].declptr);
			else
			{
				yyerror("error: not int type");
				(yyval.declptr) = NULL;
			}
		}
#line 2363 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 770 "subc.y" /* yacc.c:1646  */
    {
			if(!((yyval.declptr)=checkINCOPDECOP((yyvsp[-1].declptr)))) yyerror("error: not char,int,ptr");
		}
#line 2371 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 773 "subc.y" /* yacc.c:1646  */
    {
			if(!((yyval.declptr)=checkINCOPDECOP((yyvsp[-1].declptr)))) yyerror("error: not char,int,ptr");
		}
#line 2379 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 776 "subc.y" /* yacc.c:1646  */
    {
			if(!((yyval.declptr)=checkINCOPDECOP((yyvsp[0].declptr)))) yyerror("error: not char,int,ptr");
		}
#line 2387 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 779 "subc.y" /* yacc.c:1646  */
    {
			if(!((yyval.declptr)=checkINCOPDECOP((yyvsp[0].declptr)))) yyerror("error: not char,int,ptr");
		}
#line 2395 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 782 "subc.y" /* yacc.c:1646  */
    {
			if(check_is_var((yyvsp[0].declptr)))
			{
				(yyval.declptr) = makeconstdecl(makeptrdecl((yyvsp[0].declptr)));
			}
			else
			{
				(yyval.declptr) = NULL;
			}
		}
#line 2410 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 792 "subc.y" /* yacc.c:1646  */
    {
			if(check_is_var((yyvsp[0].declptr))||check_is_const((yyvsp[0].declptr)))
			{
				if((yyvsp[0].declptr)->type->typeclass==PTR) (yyval.declptr) = (yyvsp[0].declptr)->type->ptrto;
			}
			else (yyval.declptr) = NULL;

		}
#line 2423 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 800 "subc.y" /* yacc.c:1646  */
    {
			// RHS의 unary는 const 이고, type의 typeclass는 array 인가?
			// expr는 int type VAR 이거나, INT_CONST 인가?
			// 조건을 충족한다면, elementvar로 VAR을 넘겨준다.
			
			(yyval.declptr) = arrayaccess((yyvsp[-3].declptr), (yyvsp[-1].declptr));
		}
#line 2435 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 807 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = structaccess((yyvsp[-2].declptr), (yyvsp[0].idptr));
		}
#line 2443 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 810 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = structptraccess((yyvsp[-2].declptr), (yyvsp[0].idptr));
		}
#line 2451 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 813 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = check_funccall((yyvsp[-3].declptr), (yyvsp[-1].declptr));

		}
#line 2460 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 817 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = check_funccall((yyvsp[-2].declptr), NULL);
		}
#line 2468 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 823 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].declptr))
			{
				(yyval.declptr) = copydecl((yyvsp[0].declptr));
			}
		}
#line 2479 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 829 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].declptr) && (yyvsp[0].declptr)) 
			{
				(yyvsp[-2].declptr)->next = (yyvsp[0].declptr);
				(yyval.declptr) = (yyvsp[-2].declptr);
			}
			else (yyval.declptr) = NULL;
		}
#line 2492 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2496 "subc.tab.c" /* yacc.c:1646  */
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
#line 839 "subc.y" /* yacc.c:1906  */


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
	entry->name = idptr;
	entry->decl = declptr;
	entry->prev = cscope->top;
	cscope->top = entry;
	return;
}


void init_type()
{
	cscope = (struct sse*)malloc(sizeof(struct sse));
	cscope->prev = NULL;
	cscope->top = NULL;
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
	if(isInt || isChar || isPtr) return target;
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
		fprintf(stderr,"name: %s\n",entry->name->name);
		fprintf(stderr,"class: %d\n",entry->decl->declclass);
		fprintf(stderr,"typeclass: %d\n",entry->decl->typeclass);
		entry = entry->prev;
	}
	fprintf(stderr,"\n");

}


