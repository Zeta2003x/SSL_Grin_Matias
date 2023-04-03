
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "../src/TP4.y"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "funcionesC.c"
#include "funcionesC.h"

int linea;

int yylex();		
int yywrap() { return(1); }				
int yyerror(char* s);
extern FILE *yyin;


int yyerror(char* s)
{
}

extern int yylineno;



/* Line 189 of yacc.c  */
#line 97 "TP4.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TIPO_DATO = 258,
     IDENTIFICADOR = 259,
     DECIMAL = 260,
     OCTAL = 261,
     HEXADECIMAL = 262,
     CTE_CHAR = 263,
     LITERAL_CADENA = 264,
     REAL = 265,
     ERROR_LEX = 266,
     SIZE_OF = 267,
     INT_MAIN = 268,
     INCLUDE = 269,
     DEFINE = 270,
     DEFAULT = 271,
     CASE = 272,
     IF = 273,
     ELSE = 274,
     SWITCH = 275,
     WHILE = 276,
     DO = 277,
     FOR = 278,
     GOTO = 279,
     CONTINUE = 280,
     RETURN = 281,
     BREAK = 282,
     MAYOR_IGUAL = 283,
     MENOR_IGUAL = 284,
     IGUALDAD = 285,
     DESIGUALDAD = 286,
     AND = 287,
     OR = 288,
     DOBLE_MAS = 289,
     DOBLE_MENOS = 290,
     ARROW = 291,
     OPER_ASIGNACION = 292,
     STDIO = 293,
     LIBRERIA = 294
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 25 "../src/TP4.y"

	struct yylval_struct
	{
		char tipo[30];
		int entero;
		float real;
		char cadena[30];
		char caracter;
	} myStruct;	



/* Line 214 of yacc.c  */
#line 185 "TP4.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 197 "TP4.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  96
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   903

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNRULES -- Number of states.  */
#define YYNSTATES  276

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,    51,     2,    49,    60,     2,
      52,    53,    47,    45,    40,    46,    63,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,    54,
      44,    57,    43,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,    61,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    12,    17,    18,    21,    25,
      30,    32,    35,    39,    41,    42,    45,    46,    54,    55,
      62,    69,    75,    76,    78,    80,    84,    87,    89,    90,
      94,    95,   100,   101,   104,   107,   110,   113,   116,   118,
     123,   127,   132,   136,   141,   143,   146,   150,   151,   154,
     156,   158,   162,   167,   169,   173,   174,   177,   178,   181,
     183,   185,   187,   189,   191,   193,   195,   200,   202,   204,
     207,   214,   220,   221,   224,   230,   238,   248,   252,   255,
     258,   262,   266,   271,   275,   276,   278,   280,   284,   286,
     288,   292,   294,   296,   297,   299,   301,   307,   309,   313,
     315,   319,   321,   325,   329,   331,   335,   339,   343,   347,
     349,   353,   357,   359,   363,   367,   371,   375,   377,   380,
     383,   386,   391,   396,   398,   400,   402,   404,   406,   408,
     411,   415,   418,   420,   422,   423,   426,   431,   435,   436,
     438,   442,   444,   446,   448,   452,   454,   456,   458,   460,
     462
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    84,    -1,    66,    -1,    67,    70,    71,
      74,    -1,    51,    14,    38,    68,    -1,    -1,    69,    68,
      -1,    51,    14,    39,    -1,    51,    15,     4,   122,    -1,
      93,    -1,    72,    73,    -1,    13,    52,    53,    -1,    96,
      -1,    -1,    75,    74,    -1,    -1,     3,     4,    52,    79,
      53,    76,    96,    -1,    -1,     3,     4,    52,    53,    77,
      96,    -1,     3,     4,    52,    79,    53,    54,    -1,     3,
       4,    52,    53,    54,    -1,    -1,    79,    -1,    80,    -1,
      79,    40,    80,    -1,     3,    81,    -1,     3,    -1,    -1,
       4,    82,    83,    -1,    -1,    55,   107,    56,    83,    -1,
      -1,    93,    84,    -1,    94,    84,    -1,    74,    84,    -1,
      67,    84,    -1,     4,    86,    -1,     4,    -1,     4,    52,
      78,    53,    -1,    55,   107,    56,    -1,    55,   107,    56,
      86,    -1,     3,    88,    54,    -1,     3,    47,    88,    54,
      -1,     1,    -1,    85,    89,    -1,    88,    40,    85,    -1,
      -1,    57,    90,    -1,   108,    -1,    91,    -1,    58,    92,
      59,    -1,    58,    92,    40,    59,    -1,    90,    -1,    92,
      40,    90,    -1,    -1,    87,    93,    -1,    -1,    95,    94,
      -1,    97,    -1,   102,    -1,    96,    -1,    98,    -1,   100,
      -1,   101,    -1,    11,    -1,    58,    93,    94,    59,    -1,
       1,    -1,    54,    -1,   104,    54,    -1,    18,    52,   104,
      53,    95,    99,    -1,    20,    52,   104,    53,    95,    -1,
      -1,    19,    95,    -1,    21,    52,   104,    53,    95,    -1,
      22,    95,    21,    52,   104,    53,    54,    -1,    23,    52,
     103,    54,   103,    54,   103,    53,    95,    -1,    24,     4,
      54,    -1,    25,    54,    -1,    27,    54,    -1,    26,   103,
      54,    -1,     4,    42,    95,    -1,    17,   107,    42,    95,
      -1,    16,    42,    95,    -1,    -1,   104,    -1,   105,    -1,
     104,    40,   105,    -1,     1,    -1,   108,    -1,   115,   106,
     105,    -1,    57,    -1,    37,    -1,    -1,   108,    -1,   109,
      -1,   109,    41,   104,    42,   108,    -1,   110,    -1,   109,
      33,   110,    -1,   111,    -1,   110,    32,   111,    -1,   112,
      -1,   111,    30,   112,    -1,   111,    31,   112,    -1,   113,
      -1,   112,    28,   113,    -1,   112,    43,   113,    -1,   112,
      29,   113,    -1,   112,    44,   113,    -1,   114,    -1,   113,
      45,   114,    -1,   113,    46,   114,    -1,   115,    -1,   114,
      47,   115,    -1,   114,    48,   115,    -1,   114,    49,   115,
      -1,   114,    50,   115,    -1,   117,    -1,    34,   115,    -1,
      35,   115,    -1,   116,   115,    -1,    12,    52,   117,    53,
      -1,    12,    52,     3,    53,    -1,    60,    -1,    47,    -1,
      45,    -1,    46,    -1,    61,    -1,    62,    -1,   121,   119,
      -1,   115,   118,   119,    -1,    36,     4,    -1,    34,    -1,
      35,    -1,    -1,    86,    89,    -1,    52,   120,    53,   119,
      -1,    63,     4,   119,    -1,    -1,   121,    -1,   120,    40,
     121,    -1,     4,    -1,   122,    -1,     9,    -1,    52,   104,
      53,    -1,   123,    -1,     8,    -1,    10,    -1,     5,    -1,
       6,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    87,    87,    88,    91,    94,    97,    98,   101,   102,
     105,   108,   111,   114,   117,   118,   121,   121,   122,   122,
     123,   124,   127,   128,   131,   132,   135,   144,   147,   147,
     150,   151,   154,   155,   156,   157,   158,   161,   162,   163,
     166,   167,   170,   171,   172,   175,   176,   179,   180,   183,
     184,   188,   189,   192,   193,   196,   197,   200,   201,   204,
     205,   206,   207,   208,   209,   210,   213,   214,   217,   218,
     221,   222,   225,   226,   229,   230,   231,   234,   235,   236,
     237,   240,   241,   242,   246,   247,   250,   251,   252,   255,
     256,   259,   260,   263,   264,   267,   268,   271,   272,   275,
     276,   279,   280,   281,   284,   285,   286,   287,   288,   291,
     292,   293,   296,   297,   298,   299,   300,   303,   304,   305,
     306,   307,   308,   311,   312,   313,   314,   315,   316,   319,
     320,   323,   324,   325,   328,   329,   330,   331,   334,   335,
     336,   339,   340,   341,   342,   345,   346,   347,   350,   351,
     352
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIPO_DATO", "IDENTIFICADOR", "DECIMAL",
  "OCTAL", "HEXADECIMAL", "CTE_CHAR", "LITERAL_CADENA", "REAL",
  "ERROR_LEX", "SIZE_OF", "INT_MAIN", "INCLUDE", "DEFINE", "DEFAULT",
  "CASE", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE",
  "RETURN", "BREAK", "MAYOR_IGUAL", "MENOR_IGUAL", "IGUALDAD",
  "DESIGUALDAD", "AND", "OR", "DOBLE_MAS", "DOBLE_MENOS", "ARROW",
  "OPER_ASIGNACION", "STDIO", "LIBRERIA", "','", "'?'", "':'", "'>'",
  "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'#'", "'('", "')'",
  "';'", "'['", "']'", "'='", "'{'", "'}'", "'&'", "'~'", "'!'", "'.'",
  "$accept", "input", "programaC", "directivas", "variasDirectivas",
  "directiva", "prototipo", "main", "encabezado", "cuerpo", "funciones",
  "definicionFuncion", "$@1", "$@2", "parametrosFuncion",
  "listaTipoParametros", "declaracionParametro", "nombreParam", "$@3",
  "nombreParamExpConst", "miniProgramaC", "declarador", "declaArray",
  "declaracion", "inicializacionDecla", "declaradorFactorizado",
  "inicializador", "inciaArray", "inicializadorLista",
  "variasDeclaraciones", "variasSentencias", "sentencia", "sentCompuesta",
  "sentExpresion", "sentSeleccion", "segundaParteIf", "sentIteracion",
  "sentSalto", "sentEtiquetada", "expOVacio", "expresion", "expAsignacion",
  "operAsignacion", "expConstante", "expCondicional", "expOr", "expAnd",
  "expIgualdad", "expRelacional", "expAditiva", "expMultiplicativa",
  "expUnaria", "operUnario", "expPostfijo", "expUnariaFactorizada",
  "expPostfijoFactorizada", "listaArgumentos", "expPrimaria", "constante",
  "constanteEntera", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      44,    63,    58,    62,    60,    43,    45,    42,    47,    37,
      94,    35,    40,    41,    59,    91,    93,    61,   123,   125,
      38,   126,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    66,    67,    68,    68,    69,    69,
      70,    71,    72,    73,    74,    74,    76,    75,    77,    75,
      75,    75,    78,    78,    79,    79,    80,    80,    82,    81,
      83,    83,    84,    84,    84,    84,    84,    85,    85,    85,
      86,    86,    87,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    92,    92,    93,    93,    94,    94,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   100,   101,   101,   101,
     101,   102,   102,   102,   103,   103,   104,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   111,   112,   112,   112,   112,   112,   113,
     113,   113,   114,   114,   114,   114,   114,   115,   115,   115,
     115,   115,   115,   116,   116,   116,   116,   116,   116,   117,
     117,   118,   118,   118,   119,   119,   119,   119,   120,   120,
     120,   121,   121,   121,   121,   122,   122,   122,   123,   123,
     123
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     4,     0,     2,     3,     4,
       1,     2,     3,     1,     0,     2,     0,     7,     0,     6,
       6,     5,     0,     1,     1,     3,     2,     1,     0,     3,
       0,     4,     0,     2,     2,     2,     2,     2,     1,     4,
       3,     4,     3,     4,     1,     2,     3,     0,     2,     1,
       1,     3,     4,     1,     3,     0,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     2,
       6,     5,     0,     2,     5,     7,     9,     3,     2,     2,
       3,     3,     4,     3,     0,     1,     1,     3,     1,     1,
       3,     1,     1,     0,     1,     1,     5,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     2,     2,
       2,     4,     4,     1,     1,     1,     1,     1,     1,     2,
       3,     2,     1,     1,     0,     2,     4,     3,     0,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    44,     0,   141,   148,   149,   150,   146,   143,   147,
      65,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   124,     0,     0,
      68,     0,   123,   127,   128,     0,     3,     0,     0,    14,
       2,     0,     0,     0,     0,    61,    59,    62,    63,    64,
      60,     0,    86,    89,    95,    97,    99,   101,   104,   109,
     112,     0,   117,   134,   142,   145,    38,     0,    47,     0,
       0,     0,     0,   141,     0,    94,   112,     0,     0,     0,
      67,     0,     0,     0,    78,    88,     0,    85,    79,   118,
     119,     0,     0,    44,     0,     0,     1,     0,     0,    36,
       0,    35,     0,    15,    56,    33,    34,    58,     0,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,   133,     0,    92,    91,
       0,   134,   120,   138,    93,     0,    47,   129,     0,    37,
      38,     0,     0,    45,     0,    42,    81,     0,     0,   117,
      83,     0,     0,     0,     0,     0,     0,    77,    80,     6,
     144,     0,     0,    14,     0,     0,    87,    98,     0,   100,
     102,   103,   105,   107,   106,   108,   110,   111,   113,   114,
     115,   116,   131,    90,   130,     0,   139,     0,   134,   135,
      27,    18,     0,     0,    24,    22,    43,     0,    48,    50,
      49,    46,   122,   121,    82,     0,     0,     0,     0,     0,
       0,     5,     6,    66,     0,     4,    67,    11,    13,     0,
       0,     0,   134,    40,   137,    28,    26,    21,     0,    39,
       0,    16,    23,    53,     0,    72,    71,    74,     0,     0,
       0,     0,     7,    12,     0,    96,   140,   136,    41,    30,
      19,    25,    20,     0,     0,    51,     0,    70,     0,     0,
       8,     0,    93,    29,    17,    52,    54,    73,    75,     0,
       9,     0,     0,    30,    76,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    35,    36,    97,   211,   212,    98,   163,   164,   217,
      38,    39,   253,   228,   192,   193,   194,   226,   249,   263,
      99,    68,   136,    41,    69,   143,   198,   199,   234,    42,
      43,    44,    45,    46,    47,   257,    48,    49,    50,    86,
      51,    52,   130,    74,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,   131,   137,   185,    63,    64,    65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -186
static const yytype_int16 yypact[] =
{
     463,   -23,    19,     8,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,     0,    12,   841,    22,    26,    28,   649,    37,   112,
      67,   681,    82,   841,   841,  -186,  -186,  -186,   138,   745,
    -186,   525,  -186,  -186,  -186,   168,  -186,   274,   463,   178,
    -186,   211,   463,   463,   337,  -186,  -186,  -186,  -186,  -186,
    -186,    -3,  -186,  -186,   -20,   155,   131,    96,    81,    99,
      57,   841,  -186,    27,  -186,  -186,   -33,   187,   135,    75,
     649,    23,   649,  -186,   153,  -186,   140,   745,   745,   745,
     -23,   175,   681,   143,  -186,  -186,   144,   160,  -186,   140,
     140,   161,    97,  -186,    34,   587,  -186,   463,   188,  -186,
     400,  -186,   198,  -186,  -186,  -186,  -186,  -186,   841,  -186,
     841,   745,   841,   841,   841,   841,   841,   841,   841,   841,
     841,   841,   841,   841,   841,  -186,  -186,   199,  -186,  -186,
     841,    27,   140,    35,   841,   200,   135,  -186,    33,  -186,
      65,    79,   809,  -186,   187,  -186,  -186,   152,   140,   154,
    -186,   649,    98,   101,   102,   158,   171,  -186,  -186,   162,
    -186,   147,   174,   178,    14,   189,  -186,   155,     6,   131,
      96,    96,    81,    81,    81,    81,    99,    99,   140,   140,
     140,   140,  -186,  -186,  -186,   103,  -186,   184,    27,  -186,
     226,   193,   195,   104,  -186,   246,  -186,   809,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,   649,   649,   649,   745,   681,
     163,  -186,   162,  -186,   201,  -186,  -186,  -186,  -186,    33,
     841,    35,    27,   197,  -186,  -186,  -186,  -186,    14,  -186,
     246,   205,   213,  -186,    36,   241,  -186,  -186,   105,   207,
     225,   262,  -186,  -186,   104,  -186,  -186,  -186,  -186,   212,
    -186,  -186,  -186,    14,   777,  -186,   649,  -186,   214,   713,
    -186,   159,   841,  -186,  -186,  -186,  -186,  -186,  -186,   223,
    -186,   232,   649,   212,  -186,  -186
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,  -186,   289,    90,  -186,  -186,  -186,  -186,  -186,
     -35,  -186,  -186,  -186,  -186,  -185,    63,  -186,  -186,    30,
      18,   166,   -63,  -186,   237,   169,  -181,  -186,  -186,   122,
     -24,   -17,  -140,  -186,  -186,  -186,  -186,  -186,  -186,   -77,
     -15,   -83,  -186,  -127,   -11,  -186,   196,   202,    66,    55,
      64,   -12,  -186,   236,  -186,  -123,  -186,  -124,    50,  -186
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -89
static const yytype_int16 yytable[] =
{
      81,    76,    75,   139,   103,   156,    87,   187,   184,   186,
     232,    89,    90,   110,    92,   216,   233,   -88,    40,   138,
     107,   111,   134,    66,   218,   166,   147,    73,     4,     5,
       6,     7,     8,     9,   244,    11,   190,   108,   140,    73,
       4,     5,     6,     7,     8,     9,   108,   183,   220,   132,
      70,   109,    71,   146,    72,   150,   101,    23,    24,   148,
     105,   106,   152,   153,   154,   224,    67,    87,    25,    26,
      27,   161,    31,   266,    77,    29,   254,   139,    78,   133,
      79,    67,   134,    32,    33,    34,   191,    29,   250,    82,
     135,   125,   126,   127,   128,   255,   168,   246,    76,   247,
      76,    76,    76,    76,    76,    76,    76,    76,    76,   178,
     179,   180,   181,   264,   129,   144,    83,   195,   105,   144,
     134,    84,    76,    75,   115,   116,   119,   120,   215,   145,
      76,   200,   239,   196,   204,   271,    88,   108,   108,   117,
     118,   108,   108,   221,   230,   108,   121,   122,   123,   124,
     160,   205,    91,    95,   206,   207,   222,   231,   258,   100,
     248,   113,   114,   104,     4,     5,     6,     7,    96,     9,
     172,   173,   174,   175,   125,   126,   127,   240,   241,   170,
     171,   102,   269,   176,   177,    76,   200,   112,   235,   236,
     237,   140,   142,   238,    87,   151,   155,   157,   158,   159,
     108,   162,   165,   182,   188,   202,   213,   203,    76,   245,
     208,   -55,    93,   210,    94,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   209,   214,   -55,   -55,   -55,
     225,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   267,
     223,   219,    76,   200,    87,   -55,   -55,   227,   229,   190,
      76,    75,   134,   230,   243,   274,   -55,   -55,   -55,   252,
     256,   259,   -55,   -55,   260,   -55,   261,   262,   268,   -55,
     -55,   -55,   -55,   -55,   -14,     1,   272,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   -55,   273,    37,
      12,    13,    14,   251,    15,    16,    17,    18,    19,    20,
      21,    22,   242,   275,   141,   189,   167,   149,    23,    24,
     201,   270,     0,     0,   169,     0,     0,     0,     0,    25,
      26,    27,     0,     0,     0,    28,    29,     0,    30,     0,
       0,     0,    31,     0,    32,    33,    34,   -57,    80,     0,
     -57,     3,     4,     5,     6,     7,     8,     9,    10,    11,
       0,     0,     0,    12,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     0,     0,     0,     0,
       0,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,    27,     0,     0,     0,   -57,    29,
       0,    30,     0,     0,     0,    31,   -57,    32,    33,    34,
     -14,     1,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,   -10,     0,     0,    12,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,    27,     0,     0,
       0,    28,    29,     0,    30,     0,     0,     0,    31,     0,
      32,    33,    34,   -14,     1,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,     0,     0,     0,    12,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,     0,     0,     0,     0,     0,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
      27,     0,     0,     0,    28,    29,     0,    30,     0,     0,
       0,    31,     0,    32,    33,    34,    93,     0,    94,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,     0,
       0,   -55,   -55,   -55,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,     0,     0,     0,     0,     0,     0,   -55,
     -55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -55,   -55,   -55,     0,     0,     0,     0,   -55,     0,   -55,
       0,     0,     0,   -55,   -55,   -55,   -55,   -55,    80,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
       0,     0,     0,    12,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     0,     0,     0,     0,
       0,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,    27,     0,     0,     0,     0,    29,
       0,    30,     0,     0,     0,    31,   -57,    32,    33,    34,
      80,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,    85,    23,    24,    73,     4,     5,     6,     7,
       8,     9,     0,    11,    25,    26,    27,     0,     0,     0,
       0,    29,     0,    30,     0,     0,     0,    31,     0,    32,
      33,    34,     0,     0,    85,    23,    24,    73,     4,     5,
       6,     7,     8,     9,     0,    11,    25,    26,    27,     0,
       0,     0,     0,    29,     0,   -84,     0,     0,     0,     0,
       0,    32,    33,    34,     0,     0,    85,    23,    24,    73,
       4,     5,     6,     7,     8,     9,     0,    11,    25,    26,
      27,     0,     0,     0,     0,    29,   -84,     0,     0,     0,
       0,     0,     0,    32,    33,    34,     0,     0,     0,    23,
      24,    73,     4,     5,     6,     7,     8,     9,     0,    11,
      25,    26,    27,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,    32,    33,    34,     0,     0,
       0,    23,    24,    73,     4,     5,     6,     7,     8,     9,
       0,    11,    25,    26,    27,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,   197,   265,    32,    33,    34,
       0,     0,     0,    23,    24,    73,     4,     5,     6,     7,
       8,     9,     0,    11,    25,    26,    27,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,   197,     0,    32,
      33,    34,     0,     0,     0,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,    27,     0,
       0,     0,     0,    29,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34
};

static const yytype_int16 yycheck[] =
{
      17,    13,    13,    66,    39,    82,    21,   134,   131,   133,
     195,    23,    24,    33,    29,     1,   197,    40,     0,    52,
      44,    41,    55,     4,   164,   108,     3,     4,     5,     6,
       7,     8,     9,    10,   219,    12,     3,    40,     4,     4,
       5,     6,     7,     8,     9,    10,    40,   130,    42,    61,
      42,    54,    52,    70,    42,    72,    38,    34,    35,    71,
      42,    43,    77,    78,    79,   188,    47,    82,    45,    46,
      47,    95,    58,   254,    52,    52,    40,   140,    52,    52,
      52,    47,    55,    60,    61,    62,    53,    52,   228,    52,
      63,    34,    35,    36,    37,    59,   111,   221,   110,   222,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   253,    57,    40,     4,    52,   100,    40,
      55,    54,   134,   134,    28,    29,    45,    46,   163,    54,
     142,   142,   209,    54,   151,   262,    54,    40,    40,    43,
      44,    40,    40,    40,    40,    40,    47,    48,    49,    50,
      53,    53,    14,    31,    53,    53,    53,    53,    53,    37,
     223,    30,    31,    41,     5,     6,     7,     8,     0,    10,
     115,   116,   117,   118,    34,    35,    36,    14,    15,   113,
     114,     3,   259,   119,   120,   197,   197,    32,   205,   206,
     207,     4,    57,   208,   209,    42,    21,    54,    54,    38,
      40,    13,     4,     4,     4,    53,    59,    53,   220,   220,
      52,     0,     1,    51,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    54,    52,    16,    17,    18,
       4,    20,    21,    22,    23,    24,    25,    26,    27,   256,
      56,    52,   254,   254,   259,    34,    35,    54,    53,     3,
     262,   262,    55,    40,    53,   272,    45,    46,    47,    54,
      19,    54,    51,    52,    39,    54,     4,    55,    54,    58,
      59,    60,    61,    62,     0,     1,    53,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    56,     0,
      16,    17,    18,   230,    20,    21,    22,    23,    24,    25,
      26,    27,   212,   273,    67,   136,   110,    71,    34,    35,
     144,   261,    -1,    -1,   112,    -1,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    -1,    -1,    51,    52,
      -1,    54,    -1,    -1,    -1,    58,    59,    60,    61,    62,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
      -1,    51,    52,    -1,    54,    -1,    -1,    -1,    58,    -1,
      60,    61,    62,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,
      -1,    58,    -1,    60,    61,    62,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    58,    59,    60,    61,    62,     1,    -1,
      -1,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,    52,
      -1,    54,    -1,    -1,    -1,    58,    59,    60,    61,    62,
       1,    -1,    -1,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,     1,    34,    35,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    45,    46,    47,    -1,    -1,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    58,    -1,    60,
      61,    62,    -1,    -1,     1,    34,    35,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    45,    46,    47,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    -1,    -1,     1,    34,    35,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    45,    46,
      47,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    -1,    -1,    -1,    34,
      35,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,    -1,
      -1,    34,    35,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    45,    46,    47,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    34,    35,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    45,    46,    47,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,
      61,    62,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    16,    17,    18,    20,    21,    22,    23,    24,
      25,    26,    27,    34,    35,    45,    46,    47,    51,    52,
      54,    58,    60,    61,    62,    65,    66,    67,    74,    75,
      84,    87,    93,    94,    95,    96,    97,    98,   100,   101,
     102,   104,   105,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   121,   122,   123,     4,    47,    85,    88,
      42,    52,    42,     4,   107,   108,   115,    52,    52,    52,
       1,    95,    52,     4,    54,     1,   103,   104,    54,   115,
     115,    14,   104,     1,     3,    93,     0,    67,    70,    84,
      93,    84,     3,    74,    93,    84,    84,    94,    40,    54,
      33,    41,    32,    30,    31,    28,    29,    43,    44,    45,
      46,    47,    48,    49,    50,    34,    35,    36,    37,    57,
     106,   118,   115,    52,    55,    63,    86,   119,    52,    86,
       4,    88,    57,    89,    40,    54,    95,     3,   115,   117,
      95,    42,   104,   104,   104,    21,   103,    54,    54,    38,
      53,    94,    13,    71,    72,     4,   105,   110,   104,   111,
     112,   112,   113,   113,   113,   113,   114,   114,   115,   115,
     115,   115,     4,   105,   119,   120,   121,   107,     4,    89,
       3,    53,    78,    79,    80,    52,    54,    58,    90,    91,
     108,    85,    53,    53,    95,    53,    53,    53,    52,    54,
      51,    68,    69,    59,    52,    74,     1,    73,    96,    52,
      42,    40,    53,    56,   119,     4,    81,    54,    77,    53,
      40,    53,    79,    90,    92,    95,    95,    95,   104,   103,
      14,    15,    68,    53,    79,   108,   121,   119,    86,    82,
      96,    80,    54,    76,    40,    59,    19,    99,    53,    54,
      39,     4,    55,    83,    96,    59,    90,    95,    54,   103,
     122,   107,    53,    56,    95,    83
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 16:

/* Line 1455 of yacc.c  */
#line 121 "../src/TP4.y"
    {linea = yylineno;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 121 "../src/TP4.y"
    {insertarTipoDeDatoNodo(&datoAux, (yyvsp[(1) - (7)].myStruct).cadena); insertarVariableNodo(&datoAux,(yyvsp[(2) - (7)].myStruct).cadena,linea,0);insertarOrdenadoVariable(&listaVariables, &datoAux);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 122 "../src/TP4.y"
    {linea = yylineno;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 122 "../src/TP4.y"
    {insertarTipoDeDatoNodo(&datoAux, (yyvsp[(1) - (6)].myStruct).cadena); insertarVariableNodo(&datoAux,(yyvsp[(2) - (6)].myStruct).cadena,linea,0);insertarOrdenadoVariable(&listaVariables, &datoAux);;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 123 "../src/TP4.y"
    {insertarTipoDeDatoNodo(&datoAux, (yyvsp[(1) - (6)].myStruct).cadena); insertarVariableNodo(&datoAux,(yyvsp[(2) - (6)].myStruct).cadena,yylineno,0);insertarOrdenadoVariable(&listaVariables, &datoAux);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 124 "../src/TP4.y"
    { insertarTipoDeDatoNodo(&datoAux, (yyvsp[(1) - (5)].myStruct).cadena); insertarVariableNodo(&datoAux,(yyvsp[(2) - (5)].myStruct).cadena,yylineno,0);insertarOrdenadoVariable(&listaVariables, &datoAux); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 135 "../src/TP4.y"
    {
	char corchetes[] = "";
	for(linea;linea>0;linea-=1){
		strcat(corchetes,"[]");
	}
	char corchetesAux[sizeof((yyvsp[(1) - (2)].myStruct).cadena)+sizeof(corchetes)];
	strcpy(corchetesAux,(yyvsp[(1) - (2)].myStruct).cadena);
	strcat(corchetesAux,corchetes);
	insertarParametrosNodo((yyvsp[(2) - (2)].myStruct).cadena, corchetesAux);linea=0;;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 144 "../src/TP4.y"
    {insertarParametrosNodo("Parametro sin nombre", (yyvsp[(1) - (1)].myStruct).cadena);}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 147 "../src/TP4.y"
    {linea=0;;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 147 "../src/TP4.y"
    {strcpy((yyval.myStruct).cadena,(yyvsp[(1) - (3)].myStruct).cadena);}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 151 "../src/TP4.y"
    {linea++;;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 161 "../src/TP4.y"
    {insertarVariableNodo(&datoAux,(yyvsp[(1) - (2)].myStruct).cadena,yylineno,2);}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 162 "../src/TP4.y"
    {insertarVariableNodo(&datoAux,(yyvsp[(1) - (1)].myStruct).cadena,yylineno,1);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 163 "../src/TP4.y"
    { insertarVariableNodo(&datoAux,(yyvsp[(1) - (4)].myStruct).cadena,yylineno,0);}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 170 "../src/TP4.y"
    {insertarTipoDeDatoNodo(&datoAux, (yyvsp[(1) - (3)].myStruct).cadena); insertarOrdenadoVariable(&listaVariables, &datoAux);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 171 "../src/TP4.y"
    {strcpy(tipoDeDatoAux,(yyvsp[(1) - (4)].myStruct).cadena); insertarTipoDeDatoNodo(&datoAux, strcat(tipoDeDatoAux,"*")); insertarOrdenadoVariable(&listaVariables, &datoAux);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 210 "../src/TP4.y"
    {insertarError(&listaCadenasNoRec, "ERROR LEXICO", yylineno);}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 214 "../src/TP4.y"
    {insertarError(&listaEstructurasNoRec, "ERROR SINTACTICO en la Sentencia Compuesta", yylineno);;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 250 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (1)].myStruct).tipo);}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 252 "../src/TP4.y"
    {insertarError(&listaEstructurasNoRec, "ERROR SINTACTICO en la Expresion", yylineno);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 255 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (1)].myStruct).tipo);}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 264 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (1)].myStruct).tipo);}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 267 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (1)].myStruct).tipo);}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 271 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (1)].myStruct).tipo);}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 275 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (1)].myStruct).tipo);}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 279 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (1)].myStruct).tipo);}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 284 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (1)].myStruct).tipo);}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 291 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (1)].myStruct).tipo);}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 292 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (3)].myStruct).tipo); controlTiposDeDatos((yyvsp[(1) - (3)].myStruct).tipo,(yyvsp[(3) - (3)].myStruct).tipo,yylineno,0);}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 293 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (3)].myStruct).tipo); controlTiposDeDatos((yyvsp[(1) - (3)].myStruct).tipo,(yyvsp[(3) - (3)].myStruct).tipo,yylineno,1);}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 296 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (1)].myStruct).tipo);}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 297 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (3)].myStruct).tipo); controlTiposDeDatos((yyvsp[(1) - (3)].myStruct).tipo,(yyvsp[(3) - (3)].myStruct).tipo,yylineno,2);}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 298 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (3)].myStruct).tipo); controlTiposDeDatos((yyvsp[(1) - (3)].myStruct).tipo,(yyvsp[(3) - (3)].myStruct).tipo,yylineno,3);}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 303 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (1)].myStruct).tipo);}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 319 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (2)].myStruct).tipo);}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 320 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,devolverTipoIdentificador((yyvsp[(1) - (3)].myStruct).cadena));}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 330 "../src/TP4.y"
    {controlInvocacionFuncion(idLlamadoAFunc, tipoLlamadoAFunc, tipoParametro, yylineno, &listaVariables); contadorParametros=0;;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 335 "../src/TP4.y"
    {strcpy(tipoParametro[contadorParametros],(yyvsp[(1) - (1)].myStruct).tipo); contadorParametros++;;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 336 "../src/TP4.y"
    {strcpy(tipoParametro[contadorParametros],(yyvsp[(3) - (3)].myStruct).tipo); contadorParametros++;;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 339 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,devolverTipoIdentificador((yyvsp[(1) - (1)].myStruct).cadena)); strcpy(idLlamadoAFunc,(yyvsp[(1) - (1)].myStruct).cadena); strcpy(tipoLlamadoAFunc,devolverTipoIdentificador((yyvsp[(1) - (1)].myStruct).cadena));}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 340 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(1) - (1)].myStruct).tipo);}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 341 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,"char*");}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 342 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,(yyvsp[(2) - (3)].myStruct).tipo);}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 345 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,"int");}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 346 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,"char");}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 347 "../src/TP4.y"
    {strcpy((yyval.myStruct).tipo,"float");}
    break;



/* Line 1455 of yacc.c  */
#line 2113 "TP4.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 357 "../src/TP4.y"

int main ()
{
	#ifdef BISON_DEBUG
    	yydebug = 1;
    #endif

	yyin = fopen("./src/entrada.txt","r");
	FILE *output = fopen("./reporte.txt","w");

    if(yyin==NULL)
	{
    	printf("No se encontro el archivo\n");
	}
	else 
	{
		printf("Se ha encontrado el archivo\n");
		yyparse();
		escribirReporte(output);
	} 

	fclose(yyin);
	fclose(output);
}
