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
    STRUCTOP = 264,
    TYPE = 265,
    VOID = 266,
    STRUCT = 267,
    RETURN = 268,
    IF = 269,
    ELSE = 270,
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
#define YYLAST   220

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  159

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
       0,    56,    56,    62,    65,    71,    74,    77,    87,    90,
      90,   101,   107,   113,   117,   124,   128,   123,   142,   158,
     200,   242,   242,   328,   332,   339,   343,   350,   386,   432,
     435,   441,   472,   512,   515,   518,   524,   530,   536,   539,
     545,   548,   551,   554,   558,   561,   564,   567,   570,   573,
     576,   579,   585,   588,   594,   600,   618,   624,   630,   633,
     639,   645,   648,   654,   657,   660,   663,   666,   672,   676,
     680,   684,   688,   692,   704,   714,   723,   727,   731,   735,
     739,   750,   759,   767,   771,   775,   778,   784,   787
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
  "STRUCTOP", "TYPE", "VOID", "STRUCT", "RETURN", "IF", "ELSE", "WHILE",
  "FOR", "BREAK", "CONTINUE", "ID", "PRINT", "CHAR_CONST", "STRING",
  "INTEGER_CONST", "';'", "'{'", "'}'", "$accept", "program",
  "ext_def_list", "ext_def", "$@1", "type_specifier", "struct_specifier",
  "$@2", "@3", "func_decl", "@4", "pointers", "param_list", "param_decl",
  "def_list", "def", "compound_stmt", "local_defs", "stmt_list", "stmt",
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
    -126,    22,    21,  -126,  -126,  -126,    27,  -126,  -126,    -3,
    -126,    -7,    24,  -126,  -126,    54,  -126,    53,  -126,    -6,
    -126,  -126,  -126,    95,    32,  -126,   146,  -126,   146,    95,
      95,    95,    95,    95,    95,    95,  -126,  -126,  -126,  -126,
      78,  -126,  -126,    97,  -126,   103,    15,   171,  -126,    92,
      70,  -126,    -2,    81,  -126,    43,    84,   179,   179,   179,
     179,   179,   179,   105,    69,    89,    95,    95,    95,    95,
      95,    95,    95,  -126,  -126,    95,   148,   102,   120,  -126,
     150,    14,  -126,  -126,   132,  -126,   141,   147,   153,   156,
     144,   151,  -126,  -126,  -126,  -126,  -126,   159,  -126,  -126,
    -126,  -126,  -126,   179,    15,   140,    93,  -126,  -126,  -126,
     173,  -126,  -126,    17,  -126,  -126,   166,    70,  -126,    -5,
    -126,   164,    95,    95,    95,  -126,  -126,  -126,  -126,    95,
    -126,   186,  -126,    95,  -126,  -126,   184,   185,   168,  -126,
    -126,    95,   189,   107,   107,    95,   190,   172,   181,  -126,
     174,  -126,  -126,   107,    95,  -126,   191,   107,  -126
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    12,    13,     0,    11,     3,    24,
      14,     9,    18,    23,     8,     0,     7,     0,    15,     0,
      30,    10,    30,     0,    21,     5,    37,    39,    16,     0,
       0,     0,     0,     0,     0,     0,    73,    71,    72,    70,
       0,    54,    56,    57,    59,    60,    62,    67,    19,     0,
       0,    35,    24,     0,    29,     0,     0,    80,    74,    81,
      75,    78,    79,     0,    67,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,     0,     0,     0,     0,    20,
      24,     0,    25,    33,     0,    34,     0,     0,     0,     0,
       0,     0,    51,    44,    36,    41,    38,     0,    17,    68,
      69,     6,    58,    67,    61,    64,    63,    65,    66,    55,
       0,    86,    87,     0,    83,    84,     0,     0,    22,     0,
      42,     0,     0,     0,    53,    49,    50,    40,    82,     0,
      85,    27,    26,     0,    31,    43,     0,     0,     0,    52,
      88,     0,     0,     0,     0,    53,     0,     0,    45,    47,
       0,    28,    32,     0,    53,    46,     0,     0,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,  -126,  -126,     0,  -126,  -126,  -126,   213,
    -126,   -51,  -126,    99,   195,  -126,   201,  -126,  -126,  -125,
    -124,  -110,   -23,  -126,  -126,   154,  -126,    -1,   -26,  -126
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     8,    17,    52,    10,    22,    56,    53,
      50,    15,    81,    82,    26,    54,    95,    27,    55,    96,
     138,    40,    97,    42,    43,    44,    45,    46,    47,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    84,     9,    57,    58,    59,    60,    61,    62,    64,
      13,    13,    63,    23,   133,    24,    24,   117,   148,   149,
     129,   150,     3,   142,    68,    69,    70,    71,   155,   116,
     156,   146,   158,    16,    25,   134,   118,    14,    83,   130,
     103,   103,   103,   103,   103,   103,     4,     5,     6,   109,
      80,    29,   110,   112,    48,    30,    31,     7,    49,    32,
      33,    34,    12,   121,    35,    18,   104,   105,   106,   107,
     108,    86,    87,    72,    88,    89,    90,    91,    36,    92,
      37,    38,    39,    93,    20,    94,    73,    74,    75,    19,
      76,   100,    77,    78,    20,     4,     5,     6,    65,   136,
     137,   139,    66,    29,    70,    71,   140,    30,    31,    67,
      41,    32,    33,    34,    79,    29,    35,    80,    41,    30,
      31,    85,   139,    32,    33,    34,    98,    99,    35,   101,
      36,   139,    37,    38,    39,    86,    87,   114,    88,    89,
      90,    91,    36,    92,    37,    38,    39,    93,    20,    29,
      69,    70,    71,    30,    31,   115,    29,    32,    33,    34,
      30,    31,    35,    13,    32,    33,    34,   119,   122,    35,
     111,     4,     5,     6,   123,    72,    36,   124,    37,    38,
      39,   120,    51,    36,   125,    37,    38,    39,    73,    74,
      75,   126,    76,   128,    77,    78,    73,    74,    75,   127,
      76,   131,    77,    78,   135,   141,   143,   144,   145,   147,
     151,   153,   152,   157,   154,    11,   132,    28,    21,     0,
     102
};

static const yytype_int16 yycheck[] =
{
      23,    52,     2,    29,    30,    31,    32,    33,    34,    35,
      13,    13,    35,    19,    19,    21,    21,     3,   143,   144,
       3,   145,     0,   133,     9,    10,    11,    12,   153,    80,
     154,   141,   157,    40,    40,    40,    22,    40,    40,    22,
      66,    67,    68,    69,    70,    71,    25,    26,    27,    72,
      50,     8,    75,    76,    22,    12,    13,    36,    26,    16,
      17,    18,    35,    86,    21,    41,    67,    68,    69,    70,
      71,    28,    29,     4,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    17,    18,    19,    35,
      21,    22,    23,    24,    41,    25,    26,    27,    20,   122,
     123,   124,     5,     8,    11,    12,   129,    12,    13,     6,
     133,    16,    17,    18,    22,     8,    21,   117,   141,    12,
      13,    40,   145,    16,    17,    18,    42,    22,    21,    40,
      35,   154,    37,    38,    39,    28,    29,    35,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     8,
      10,    11,    12,    12,    13,    35,     8,    16,    17,    18,
      12,    13,    21,    13,    16,    17,    18,    35,    21,    21,
      22,    25,    26,    27,    21,     4,    35,    21,    37,    38,
      39,    40,    36,    35,    40,    37,    38,    39,    17,    18,
      19,    40,    21,    20,    23,    24,    17,    18,    19,    40,
      21,    35,    23,    24,    40,    19,    22,    22,    40,    20,
      20,    30,    40,    22,    40,     2,   117,    22,    17,    -1,
      66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    45,     0,    25,    26,    27,    36,    46,    48,
      49,    52,    35,    13,    40,    54,    40,    47,    41,    35,
      41,    59,    50,    19,    21,    40,    57,    60,    57,     8,
      12,    13,    16,    17,    18,    21,    35,    37,    38,    39,
      64,    65,    66,    67,    68,    69,    70,    71,    22,    26,
      53,    36,    48,    52,    58,    61,    51,    71,    71,    71,
      71,    71,    71,    65,    71,    20,     5,     6,     9,    10,
      11,    12,     4,    17,    18,    19,    21,    23,    24,    22,
      48,    55,    56,    40,    54,    40,    28,    29,    31,    32,
      33,    34,    36,    40,    42,    59,    62,    65,    42,    22,
      22,    40,    68,    71,    70,    70,    70,    70,    70,    65,
      65,    22,    65,    72,    35,    35,    54,     3,    22,    35,
      40,    65,    21,    21,    21,    40,    40,    40,    20,     3,
      22,    35,    56,    19,    40,    40,    65,    65,    63,    65,
      65,    19,    64,    22,    22,    40,    64,    20,    62,    62,
      63,    20,    40,    30,    40,    62,    63,    22,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    47,
      46,    46,    48,    48,    48,    50,    51,    49,    49,    52,
      52,    53,    52,    54,    54,    55,    55,    56,    56,    57,
      57,    58,    58,    58,    58,    58,    59,    60,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    63,    63,    64,    65,    65,    66,    67,    67,
      68,    69,    69,    70,    70,    70,    70,    70,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     0,
       3,     1,     1,     1,     1,     0,     0,     7,     2,     5,
       6,     0,     7,     1,     0,     1,     3,     3,     6,     2,
       0,     4,     7,     2,     2,     1,     4,     1,     2,     0,
       2,     1,     2,     3,     1,     5,     7,     5,     9,     2,
       2,     1,     1,     0,     1,     3,     1,     1,     3,     1,
       1,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     3,     3,     4,     3,     1,     3
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
#line 56 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("program -> ext_def_list");
		}
#line 1375 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 62 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("ext_def_list -> ext_def_list ext_def");
		}
#line 1383 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 65 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("ext_def_list -> epsilon");
		}
#line 1391 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 71 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("ext_def -> type_specifier pointers ID ';'");
		}
#line 1399 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 74 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("ext_def -> type_specifier pointers ID '[' const_expr ']' ';'");
		}
#line 1407 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 77 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("ext_def -> func_decl ';'");
			if((yyvsp[-1].declptr))
			{
				if(numoffuncdecl((yyvsp[-1].declptr))>1)
				{
					yyerror("\nerror: function redeclaration\n");
				}
			}
		}
#line 1422 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 87 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("ext_def -> type_specifier ';'");
		}
#line 1430 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 90 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].declptr))
			{
				push_scope();
				if((yyvsp[0].declptr)) declare(returnid, (yyvsp[0].declptr)->returntype);
				push_stelist((yyvsp[0].declptr)->formals);
			}

		}
#line 1444 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 98 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("ext_def -> func_decl compound_stmt");
		}
#line 1452 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 101 "subc.y" /* yacc.c:1646  */
    {
			printste();
		}
#line 1460 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 107 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("type_specifier -> TYPE");
			if(!strcmp((yyvsp[0].idptr)->name,"int")) (yyval.declptr) = inttype;
			else if(!strcmp((yyvsp[0].idptr)->name,"char")) (yyval.declptr) = chartype;
			else (yyval.declptr) = NULL;
		}
#line 1471 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 113 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("type_specifier -> VOID");
			(yyval.declptr) = voidtype;
		}
#line 1480 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 117 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("type_specifier -> struct_specifier");
		}
#line 1488 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 124 "subc.y" /* yacc.c:1646  */
    {
				push_scope();	
			}
#line 1496 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 128 "subc.y" /* yacc.c:1646  */
    {
				// 여기서 ID는 VAR의 ID가 아니라, struct type을 나타내는 ID
				struct ste* fields = pop_scope();
				(yyval.declptr) = NULL;
				if(findstructdecl((yyvsp[-3].idptr))) yyerror("\n2 error: redeclaration(struct)\n");
				else declare((yyvsp[-3].idptr), ((yyval.declptr)=makestructdecl(fields)));
			}
#line 1508 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 137 "subc.y" /* yacc.c:1646  */
    {
				(yyval.declptr) = (yyvsp[-1].declptr);
				REDUCE("struct_specifier -> STRUCT ID '{' def_list '}'");
				// 새로운 struct type을 생성함
			}
#line 1518 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 142 "subc.y" /* yacc.c:1646  */
    {
//			REDUCE("struct_specifier -> STRUCT ID");
			// ID로 미리 정의되어있는 struct type 인지 확인한다.
			struct decl* structdecl = findstructdecl((yyvsp[0].idptr));
			(yyval.declptr) = NULL;
			if(structdecl) (yyval.declptr) = structdecl;
			else
			{
				char errorMsg[50] = "\nerror: struct ";
				yyerror(strcat(errorMsg, strcat((yyvsp[0].idptr)->name, " is not defined\n")));
			}

		}
#line 1536 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 158 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("func_decl -> type_specifier pointers ID '(' ')'");
			
			// 존재하는 func 이름인지 확인
			struct decl* funcdecl = findfuncdecl((yyvsp[-2].idptr));

			if(funcdecl)
			{
				if(check_samereturntype(funcdecl->returntype, (yyvsp[-4].declptr), (yyvsp[-3].boolval)))
				{
					if(funcdecl->formals)
					{
						yyerror("\nerror: conflicting types for function\n");
						(yyval.declptr) = NULL;
					}
					else
					{
						(yyval.declptr) = funcdecl;
					}
				}
				else
				{
					yyerror("\nerror: conflicting types for function\n");
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
#line 1583 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 200 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("func_decl -> type_specifier pointers ID '(' VOID ')'");

			// 존재하는 func 이름인지 확인
			struct decl* funcdecl = findfuncdecl((yyvsp[-3].idptr));

			if(funcdecl)
			{
				if(check_samereturntype(funcdecl->returntype, (yyvsp[-5].declptr), (yyvsp[-4].boolval)))
				{
					if(funcdecl->formals)
					{
						yyerror("\nerror: conflicting types for function\n");
						(yyval.declptr) = NULL;
					}
					else
					{
						(yyval.declptr) = funcdecl;
					}
				}
				else
				{
					yyerror("\nerror: conflicting types for function\n");
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
#line 1630 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 242 "subc.y" /* yacc.c:1646  */
    {
			// FUNC declare 는 param_list 를 확인한 뒤로 미룬다
			struct decl* funcdecl = findfuncdecl((yyvsp[-1].idptr));

			if(funcdecl)
			{
				if(check_samereturntype(funcdecl->returntype, (yyvsp[-3].declptr), (yyvsp[-2].boolval)))
				{
					(yyval.declptr) = funcdecl;
				}
				else
				{
					yyerror("\nerror: conflicting types for function\n");
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
#line 1670 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 277 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("func_decl -> type_specifier pointers ID '(' param_list ')'");
			// param_list 받는 과정에서 error가 발생할 수 있다
			// 그러므로 param_list 의 NULL 여부를 체크한다.
			// 그리고 func_decl 에 declptr을 매기는 작업도, 여기서 해준다.

			struct ste*	formals;
			struct decl* funcdecl = (yyvsp[-2].declptr);

			printf("\n\n%p\n\n",funcdecl);
			printf((yyvsp[-1].boolval)? "true\n\n":"false\n\n");

			if(funcdecl&&(yyvsp[-1].boolval))
			{
				printf("\n\ncheck1\n\n");
				formals = pop_scope();

				if(funcdecl->formals)
				{
						printf("\n\ncheck2\n\n");
					printf("\n\n%p\n\n",funcdecl->formals);
					printf("\n\n%p\n\n",formals->prev);

					if(check_sameformals(funcdecl->formals, formals->prev))
					{
						printf("\n\ncheck3\n\n");

						(yyval.declptr) = funcdecl;
						//comeback
						declare((yyvsp[-4].idptr), funcdecl);
					}
					else
					{
						printf("\n\ncheck4\n\n");		
						yyerror("\nerror: conflicting types for function\n");
						(yyval.declptr) = NULL;
					}
				}
				else
				{
					printf("\n\ncheck5\n\n");
					funcdecl->formals = formals->prev;
					(yyval.declptr) = funcdecl;
					declare((yyvsp[-4].idptr), funcdecl);
				}
			}
			else (yyval.declptr) = NULL;
		}
#line 1723 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 328 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("pointers -> '*'");
			(yyval.boolval) = true;
		}
#line 1732 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 332 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("pointers -> epsilon");
			(yyval.boolval) = false;
		}
#line 1741 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 339 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("param_list -> param_decl");
			(yyval.boolval) = (yyvsp[0].declptr);
		}
#line 1750 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 343 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("param_list -> param_list ',' param_decl");
			(yyval.boolval) = (yyvsp[-2].boolval) && (yyvsp[0].declptr);
		}
#line 1759 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 350 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("param_decl -> type_specifier pointers ID");
			// ID 값으로 동일 scope에 존재하는 값인지 여부 체크
			// 재정의하면 error
			struct decl* declptr = findcurrentdecl((yyvsp[0].idptr));
			if(declptr)
			{
				// 동일 name으로 존재하더라도, struct 정의라면 허용한다.
				// ex) struct a{}; 하고 int a; 해도 문제 X
				// 그러므로 findcurrentdecl로 반환된 declclass 까지 반환한다.
				// 위의 내용을 findcurrentdecl 에서 수행하도록 옮겼다.
				char errorMsg[100] = "\nerror: redeclaration of ";
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
#line 1800 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 386 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("param_decl -> type_specifier pointers ID '[' const_expr ']'");
			// ID integrity
			struct decl* declptr = findcurrentdecl((yyvsp[-3].idptr));
			if(declptr)
			{
				char errorMsg[100] = "\nerror: redeclaration of ";
				yyerror(strcat(errorMsg, strcat((yyvsp[-3].idptr)->name,"\n")));
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
#line 1848 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 432 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("def_list -> def_list def");
		}
#line 1856 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 435 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("def_list -> epsilon");
		}
#line 1864 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 441 "subc.y" /* yacc.c:1646  */
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
				char errorMsg[100] = "\nerror: redeclaration of ";
				yyerror(strcat(errorMsg, strcat((yyvsp[-1].idptr)->name,"\n")));
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
			REDUCE("def -> type_specifier pointers ID");
		}
#line 1900 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 472 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("def -> type_specifier pointers ID '[' const_expr ']' ';'");
			// ID integrity
			struct decl* declptr = findcurrentdecl((yyvsp[-4].idptr));
			if(declptr)
			{
				char errorMsg[100] = "\nerror: redeclaration of ";
				yyerror(strcat(errorMsg, strcat((yyvsp[-4].idptr)->name,"\n")));
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
#line 1945 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 512 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("def -> type_specifier ';'");
		}
#line 1953 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 515 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("def -> func_decl ';'");
		}
#line 1961 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 518 "subc.y" /* yacc.c:1646  */
    {
			printste();
		}
#line 1969 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 524 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("compound_stmt -> '{' local_defs stmt_list '}'");
		}
#line 1977 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 530 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("local_defs -> def_list");
		}
#line 1985 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 536 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt_list -> stmt_list stmt");
		}
#line 1993 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 539 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt_list -> epsilon");
		}
#line 2001 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 545 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt -> expr");
		}
#line 2009 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 548 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt -> compound_stmt");
		}
#line 2017 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 551 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt -> RETURN ';'");
		}
#line 2025 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 554 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt -> RETURN expr ';'");
			
		}
#line 2034 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 558 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt -> ';'");
		}
#line 2042 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 561 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt -> IF '(' expr ')' stmt");
		}
#line 2050 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 564 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt -> IF '(' expr ')' stmt ELSE stmt");
		}
#line 2058 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 567 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt -> WHILE '(' expr ')' stmt");
		}
#line 2066 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 570 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt -> FOR '(' expr_E ';' expr_e ';' expr_e ')' stmt");
		}
#line 2074 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 573 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt -> BREAK ';'");
		}
#line 2082 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 576 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("stmt -> CONTINUE ';'");
		}
#line 2090 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 579 "subc.y" /* yacc.c:1646  */
    {
			printste();
		}
#line 2098 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 585 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("expr_e -> expr");
		}
#line 2106 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 588 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("expr_e -> epsilon");
		}
#line 2114 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 594 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("const_expr -> expr");
		}
#line 2122 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 600 "subc.y" /* yacc.c:1646  */
    {
			bool result = false;
			if(check_is_var((yyvsp[-2].declptr)))
			{
				if(check_compatible((yyvsp[-2].declptr), (yyvsp[0].declptr))) (yyval.declptr) = (yyvsp[-2].declptr);
				else
				{
					yyerror("\nerror: LHS and RHS are not same type\n");
					(yyval.declptr) = NULL;
				}
			}
			else
			{
				yyerror("\nerror: LHS is not a varaible\n");
				(yyval.declptr) = NULL;
			}
			REDUCE("expr -> unary '=' expr");
		}
#line 2145 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 618 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("expr -> or_expr");
		}
#line 2153 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 624 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("or_expr -> or_list");
		}
#line 2161 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 630 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("or_list -> or_list LOGICAL_OR and_expr");
		}
#line 2169 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 633 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("or_list -> and_expr");
		}
#line 2177 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 639 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("and_expr -> and_list");
		}
#line 2185 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 645 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("and_list -> and_list LOGICAL_AND binary");
		}
#line 2193 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 648 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("and_list -> binary");
		}
#line 2201 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 654 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("binary -> binary RELOP binary");
		}
#line 2209 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 657 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("binary -> binary EQUOP binary");
		}
#line 2217 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 660 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("binary -> binary '+' binary");
		}
#line 2225 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 663 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("binary -> binary '-' binary");
		}
#line 2233 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 666 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("binary -> unary");
		}
#line 2241 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 672 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> '(' expr ')'");
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 2250 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 676 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> '(' unary ')'");
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 2259 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 680 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> INTEGER_CONST");
			(yyval.declptr) = makenumconstdecl(inttype, (yyvsp[0].intval));
		}
#line 2268 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 684 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> CHAR_CONST");
			(yyval.declptr) = makecharconstdecl(chartype, (yyvsp[0].stringval));
		}
#line 2277 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 688 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> STRING");
			(yyval.declptr) = makestringconstdecl(stringtype, (yyvsp[0].stringval));
		}
#line 2286 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 692 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> ID");

			// ID에 대응되는 decl이 없다면, findcurrentdecl은 NULL을 리턴
			
			struct decl* declptr = findcurrentdecl((yyvsp[0].idptr));

			char errorMsg[100] = "\nerror: undefined variable ";

			declptr? : yyerror(strcat(errorMsg, strcat((yyvsp[0].idptr)->name, "\n")));
			(yyval.declptr) = declptr;
		}
#line 2303 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 704 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> '-' unary");
			// $2 는 integer여야 한다
			if((yyvsp[0].declptr)->type==inttype) (yyval.declptr) = (yyvsp[0].declptr);
			else
			{
				yyerror("\nerror: not int type\n");
				(yyval.declptr) = NULL;
			}
		}
#line 2318 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 714 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> '!' unary");
			if((yyvsp[0].declptr)->type==inttype) (yyval.declptr) = (yyvsp[0].declptr);
			else
			{
				yyerror("\nerror: not int type\n");
				(yyval.declptr) = NULL;
			}
		}
#line 2332 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 723 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> unary INCOP");
			(yyval.declptr) = checkINCOPDECOP((yyvsp[-1].declptr));
		}
#line 2341 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 727 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> unary DECOP");
			(yyval.declptr) = checkINCOPDECOP((yyvsp[-1].declptr));
		}
#line 2350 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 731 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> INCOP unary");
			(yyval.declptr) = checkINCOPDECOP((yyvsp[0].declptr));
		}
#line 2359 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 735 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> DECCOP unary");
			(yyval.declptr) = checkINCOPDECOP((yyvsp[0].declptr));
		}
#line 2368 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 739 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> '&' unary");
			if(check_is_var((yyvsp[0].declptr)))
			{
				(yyval.declptr) = makeconstdecl(makeptrdecl((yyvsp[0].declptr)));
			}
			else
			{
				(yyval.declptr) = NULL;
			}
		}
#line 2384 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 750 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> '*' unary");
			if(check_is_var((yyvsp[0].declptr)))
			{
				if((yyvsp[0].declptr)->type->typeclass==PTR) (yyval.declptr) = (yyvsp[0].declptr)->type->ptrto;
			}
			else (yyval.declptr) = NULL;

		}
#line 2398 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 759 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> unary '[' expr ']'");
			// RHS의 unary는 const 이고, type의 typeclass는 array 인가?
			// expr는 int type VAR 이거나, INT_CONST 인가?
			// 조건을 충족한다면, elementvar로 VAR을 넘겨준다.
			
			(yyval.declptr) = arrayaccess((yyvsp[-3].declptr), (yyvsp[-1].declptr));
		}
#line 2411 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 767 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> unary '.' ID");
			(yyval.declptr) = structaccess((yyvsp[-2].declptr), (yyvsp[0].idptr));
		}
#line 2420 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 771 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> unary STRUCTOP ID");
			(yyval.declptr) = structptraccess((yyvsp[-2].declptr), (yyvsp[0].idptr));
		}
#line 2429 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 775 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> unary '(' args ')'");
		}
#line 2437 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 778 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("unary -> unary '(' ')'");
		}
#line 2445 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 784 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("args -> expr");
		}
#line 2453 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 787 "subc.y" /* yacc.c:1646  */
    {
			REDUCE("args -> args ',' expr");
		}
#line 2461 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2465 "subc.tab.c" /* yacc.c:1646  */
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
#line 792 "subc.y" /* yacc.c:1906  */


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

	while(cscope->top!=cscope->prev->top)
	{
		cscope->top = currtop->prev;
		currtop->prev = result;
		result = currtop;
		currtop = cscope->top;
	}
	
	struct sse* temp = cscope;
	cscope = cscope->prev;
	free(temp);

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

struct decl	*makestructdecl(struct decl* fields)
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
	char* string = (char*)malloc(sizeof(char)*(length+1));
	strncpy(string, value, length);

	result->declclass = CONST;
	result->type = type;
	result->value = 0;
	result->charconst = '\0';
	result->string = string;
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
//	printf("entry: %p\n", entry);
//	printf("top: %p\n", cscope->top);
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

	// TEST
//	char* s = ("abcedfg%s","xyz");
//	printf("%s",s);
//	struct ste* temp1 = NULL;
//	struct ste* temp2 = NULL;
//	printf("NULL test\n");
//	printf(temp1==temp2? "true\n" : "false\n");
//	struct ste* temp1 = cscope->top;
//	struct ste* temp2 = temp1->prev;
//	printf("temp1: %p\n", temp1);
//	printf("temp2: %p\n", temp2);
//	struct ste* temp3 = cscope->top;
//	printf(temp1==temp3? "true\n" : "false\n");
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
//		if((entry->name==name)&&(entry->decl->typeclass==STRUCT)) break;
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

int numoffuncdecl(struct decl* funcdecl)
{
	struct ste* entry = cscope->top;
	int num = 0;
	while(entry)
	{
		if(entry->decl == funcdecl) num += 1;
		entry = entry->prev;
	}
	return num;
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
	if(target->declclass==VAR) return true;
	else return false;
}

bool check_is_array(struct decl* declptr)
{
	bool result = false;
	if(declptr->declclass==CONST)
	{
		if(declptr->type->typeclass==ARRAY) result = true;
	}
	if(!result) yyerror("\nerror: not array type \n");
	return result;
}

bool check_is_struct_type(struct decl* target)
{
	bool result = false;
	if(check_is_var(target))
	{
		if(target->type->typeclass==STRUCT) result = true;
	}
	return result;
}

bool check_compatible(struct decl* declptr1, struct decl* declptr2)
{
	bool result = false;

	if(declptr1 && declptr2) 
	{
		if(declptr1->type==declptr2->type) result = true;
		else if((declptr1->type->typeclass==PTR)&&(declptr2->type->typeclass==PTR))
		{
			
			if(declptr1->type->ptrto->type==declptr2->type->ptrto->type) result = true;	
		}

	}
		
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

bool check_sameformals(struct ste* formals1, struct ste* formals2)
{
	bool result = true;
	struct ste* entry1 = formals1;
	struct ste* entry2 = formals2;
	while(entry1)
	{
		printf("\n\n1\n\n");
		if(!entry2)
		{
			printf("\n\n2\n\n");
			result = false;
			break;
		}
		else
		{
			struct decl* decl1 = entry1->decl;
			struct decl* decl2 = entry2->decl;

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
				printf("\n\n3\n\n");
				struct decl* type1 = decl1->type;
				struct decl* type2 = decl2->type;

				printf("\n\n%p\n\n",type1);
				printf("\n\n%p\n\n",type2);
				if(type1->typeclass == PTR)
				{
					printf("\n\n5\n\n");
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
					printf("\n\n4\n\n");
					printf("\n\n%p\n\n",type1);
					printf("\n\n%p\n\n",type2);
					if(type1 != type2)
					{
						result = false;
						break;
					}
				}
			}
		}
		entry1 = entry1->prev;
		entry2 = entry2->prev;
	}
	return result;
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
		else yyerror("\nerror: not a int type index\n");
	}
}

struct decl* structaccess(struct decl* structptr, struct id* fieldid)
{
	struct decl* result = NULL;
	if(check_is_struct_type(structptr))
	{
		struct ste* entry = structptr->type->fieldlist;
		while(entry)
		{
			if(entry->name==fieldid) break;
			else entry = entry->prev;
		}
		if(entry) result = entry->decl;
		else yyerror("\nstruct do not have same field\n");
	}
	else yyerror("\nerror: variable is not struct\n");

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
		else yyerror("\nerror: variable is not struct pointer\n");
	}

	return result;
}

void printste()
{
	struct ste* entry;
	for(entry=cscope->top;entry;entry=entry->prev)
	{
		printf("%p\t%p\t%s\t%d\t%d\n", entry, entry->name, entry->name->name,entry->decl->declclass,entry->decl->typeclass);
	}
	printf("\n");
	printf("cscope: %s\n",cscope->top->name->name);
}


