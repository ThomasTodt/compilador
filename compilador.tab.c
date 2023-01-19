/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "compilador.y"

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "compilador.h"
#include "tabelaSimbolos.h"
#include "tabelaTipos.h"
#include "tabelaRotulos.h"

int num_vars, nova_var, displacement, lexicalLevel, rotulo;
int pureExpression, declaredProcedures, newParams, oldVars, num_parameter,insideProcedure;
int isSubRoutine, receivingByReference, receivingFormalParams;
char totalVars[16], command[20], varLexDisp[12], relacaoUsada[5], callProcedure[20];
char *labelSubroutineEnd, *labelSubroutineStart ;
char functionIdentifier[30];
pascalType returnType;

stackNode *newInput, *destinyVariable, *loadedVariable, *paramNode, *currentProcedure, *currentParameter;
symbolsStack symbolsTable;
typesStack typesTable;
tagsStack tagsTable;


#line 96 "compilador.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_COMPILADOR_TAB_H_INCLUDED
# define YY_YY_COMPILADOR_TAB_H_INCLUDED
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
    PROGRAM = 258,
    ABRE_PARENTESES = 259,
    FECHA_PARENTESES = 260,
    VIRGULA = 261,
    PONTO_E_VIRGULA = 262,
    DOIS_PONTOS = 263,
    PONTO = 264,
    T_BEGIN = 265,
    T_END = 266,
    VAR = 267,
    IDENT = 268,
    ATRIBUICAO = 269,
    ABRE_COLCHETES = 270,
    FECHA_COLCHETES = 271,
    ABRE_CHAVES = 272,
    FECHA_CHAVES = 273,
    LABEL = 274,
    TYPE = 275,
    OF = 276,
    GOTO = 277,
    ARRAY = 278,
    RELACAO = 279,
    PROCEDURE = 280,
    FUNCTION = 281,
    READ = 282,
    WRITE = 283,
    IF = 284,
    THEN = 285,
    ELSE = 286,
    WHILE = 287,
    DO = 288,
    OR = 289,
    AND = 290,
    NOT = 291,
    DIV = 292,
    MAIS = 293,
    MENOS = 294,
    ASTERISCO = 295,
    BARRA = 296,
    NUMERO = 297,
    IGUAL = 298,
    DIFF = 299,
    MENOR = 300,
    MENOR_IGUAL = 301,
    MAIOR = 302,
    MAIOR_IGUAL = 303,
    INTEGER = 304,
    LOWER_THAN_ELSE = 305,
    NADA = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILADOR_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   163

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

#define YYUNDEFTOK  2
#define YYMAXUTOK   306


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    52,    52,    56,    61,    67,    80,    78,    91,   100,
     100,   101,   105,   106,   109,   114,   109,   121,   122,   126,
     133,   142,   143,   148,   149,   153,   154,   159,   161,   192,
     193,   159,   231,   232,   237,   239,   271,   273,   281,   237,
     318,   324,   324,   334,   335,   335,   340,   340,   340,   344,
     344,   348,   352,   352,   355,   355,   358,   358,   363,   364,
     365,   366,   367,   368,   369,   373,   374,   380,   380,   395,
     404,   407,   395,   414,   414,   432,   433,   478,   477,   492,
     498,   492,   509,   549,   559,   548,   578,   578,   583,   583,
     587,   594,   597,   598,   599,   600,   601,   602,   607,   611,
     611,   611,   615,   616,   620,   620,   621,   621,   622,   622,
     627,   628,   632,   632,   633,   633,   634,   634,   640,   680,
     679,   700,   701,   702,   707,   728,   731,   734,   737,   737,
     739,   758,   761,   762,   766
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "ABRE_PARENTESES",
  "FECHA_PARENTESES", "VIRGULA", "PONTO_E_VIRGULA", "DOIS_PONTOS", "PONTO",
  "T_BEGIN", "T_END", "VAR", "IDENT", "ATRIBUICAO", "ABRE_COLCHETES",
  "FECHA_COLCHETES", "ABRE_CHAVES", "FECHA_CHAVES", "LABEL", "TYPE", "OF",
  "GOTO", "ARRAY", "RELACAO", "PROCEDURE", "FUNCTION", "READ", "WRITE",
  "IF", "THEN", "ELSE", "WHILE", "DO", "OR", "AND", "NOT", "DIV", "MAIS",
  "MENOS", "ASTERISCO", "BARRA", "NUMERO", "IGUAL", "DIFF", "MENOR",
  "MENOR_IGUAL", "MAIOR", "MAIOR_IGUAL", "INTEGER", "LOWER_THAN_ELSE",
  "NADA", "$accept", "programa_header", "inicia", "programa", "bloco",
  "$@1", "parte_declara_vars", "var", "$@2", "declara_vars", "declara_var",
  "$@3", "$@4", "tipo", "lista_id_var", "lista_idents",
  "parte_declara_sub_rotinas", "opcoes_sub_rotinas",
  "declaracao_procedimento", "$@5", "$@6", "$@7", "$@8",
  "parametros_formais_vazio", "declaracao_funcao", "$@9", "$@10", "$@11",
  "$@12", "$@13", "tipo_funcao", "parametros_formais", "$@14",
  "lista_parametros_formais", "$@15", "secao_parametros_formais", "$@16",
  "$@17", "var_vazio", "comando_composto", "comandos", "comando",
  "numero_ou_nada", "comando_sem_rotulo", "atribuicao_procedimento",
  "atribuicao", "$@18", "chama_procedimento", "$@19", "$@20", "$@21",
  "$@22", "lista_expressoes_ou_vazio", "comando_condicional", "$@23",
  "cond_else", "$@24", "$@25", "comando_repetitivo", "$@26", "$@27",
  "lista_expressoes", "expressao", "$@28", "relacao_exp_simples_vazio",
  "relacao", "expressao_simples", "mais_menos_vazio",
  "expressao_lista_termo", "lista_termo", "$@29", "$@30", "$@31", "termo",
  "lista_fator", "$@32", "$@33", "$@34", "fator", "$@35", "variavel",
  "desvio", "leitura", "lista_leitura", "simbolo_leitura", "escrita",
  "lista_escrita", "numero", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF (-152)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-117)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -152,    11,    13,  -152,    19,    29,    33,    55,  -152,    47,
    -152,    48,  -152,  -152,    59,    52,    62,  -152,    54,  -152,
      55,  -152,  -152,  -152,    15,  -152,    81,    82,    74,  -152,
      77,  -152,    78,    79,     2,  -152,  -152,  -152,  -152,  -152,
      16,  -152,  -152,  -152,    89,    90,    91,  -152,  -152,  -152,
      12,  -152,  -152,  -152,  -152,  -152,     6,  -152,  -152,  -152,
      88,    84,    -4,  -152,  -152,    85,  -152,  -152,    95,     2,
    -152,  -152,  -152,    86,  -152,    97,  -152,  -152,  -152,  -152,
    -152,  -152,    98,    98,  -152,    76,  -152,  -152,    45,    80,
      99,  -152,  -152,  -152,  -152,    96,  -152,   100,  -152,   101,
    -152,    85,  -152,  -152,    18,     1,  -152,  -152,  -152,   103,
    -152,   105,  -152,  -152,  -152,    56,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,    45,  -152,     1,   -21,    37,  -152,
     102,  -152,  -152,    83,  -152,   106,  -152,   108,    51,  -152,
      55,  -152,  -152,  -152,   107,  -152,  -152,    87,    92,    93,
    -152,    75,   104,    94,  -152,    41,   109,  -152,  -152,  -152,
    -152,  -152,   110,  -152,   111,  -152,     1,     1,     1,     1,
       1,     1,  -152,   112,    41,  -152,  -152,  -152,  -152,  -152,
    -152,    37,    37,    37,  -152,  -152,  -152,   114,  -152,   113,
    -152,    33,    55,  -152,  -152,    70,  -152,    41,    -4,  -152,
    -152
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,     0,     0,    11,    22,     0,
       3,     0,    24,     8,     0,     0,     0,     5,     6,    14,
      11,    21,    27,    34,   126,    23,     0,     0,    10,    13,
       0,     2,     0,     0,    57,     7,    25,    26,    12,    20,
       0,    28,    35,   124,     0,     0,     0,    83,   134,    60,
       0,    53,    55,    54,    61,    62,    73,    59,    63,    64,
       0,     0,     0,    29,    36,     0,    88,    88,     0,    57,
      51,    58,    65,     0,    66,     0,    74,    56,    19,    18,
      17,    15,    33,    33,   130,     0,   129,   133,   101,     0,
       0,    88,    52,    88,    70,     0,    41,     0,    32,     0,
     127,     0,    99,   100,    91,     0,   131,    88,    77,     0,
      68,    88,    16,    44,    30,     0,   128,    92,    93,    94,
      95,    97,    96,    89,   101,    88,     0,    98,   103,   111,
     118,   121,   132,     0,    84,     0,    75,    86,     0,    46,
      11,    40,    37,    90,     0,   123,   102,     0,     0,     0,
     110,     0,     0,     0,   119,   125,     0,    71,    88,    42,
      46,    45,    50,    31,     0,   122,     0,     0,     0,     0,
       0,     0,    88,    82,   125,    72,    87,    43,    49,    47,
      38,   105,   107,   109,   113,   115,   117,     0,    78,     0,
      85,     0,    11,   120,    80,     0,    39,   125,     0,    81,
      48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,  -152,   115,  -137,  -152,  -152,  -152,  -152,  -152,
     117,  -152,  -152,   -82,  -152,   -74,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,    40,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,   -40,  -152,  -152,  -152,   122,
    -152,    57,  -152,  -147,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -151,   -65,  -152,  -152,  -152,     0,  -152,  -152,  -152,
    -152,  -152,  -152,  -128,  -152,  -152,  -152,  -152,  -122,  -152,
     -34,  -152,  -152,  -152,    27,  -152,  -152,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    10,    11,    24,    12,    13,    14,    28,
      29,    30,    95,    81,    40,     9,    18,    25,    26,    32,
      63,    82,   140,    97,    27,    33,    64,    83,   164,   192,
     142,    98,   113,   138,   139,   161,   162,   191,   179,    49,
      50,    51,    52,    53,    71,    72,    73,    74,    75,   111,
     175,    76,   135,    54,   133,   188,   189,   197,    55,    68,
     156,   136,   137,    88,   123,   124,   104,   105,   127,   146,
     147,   148,   149,   128,   150,   151,   152,   153,   129,   172,
     130,    57,    58,    85,    86,    59,    89,   131
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    87,    90,   163,   145,   125,    60,   176,   173,    79,
     -69,     3,    34,  -108,    43,    43,     4,  -104,  -106,    69,
     -67,   187,    61,    70,    62,    34,   109,   190,   110,    44,
      45,    46,     5,     6,    47,    56,     7,   126,   181,   182,
     183,    60,   132,    48,    48,    80,     8,   184,   185,   186,
     199,    34,    15,    16,    43,   196,   159,    17,   160,    20,
     144,   117,   118,   119,   120,   121,   122,    -9,    44,    45,
      46,    19,  -116,    47,  -114,    21,    16,  -112,   198,    22,
      23,   100,   101,   102,   103,   106,   107,   -14,    36,    37,
      39,    41,    42,    65,    66,    67,    77,    78,    84,    91,
      93,    94,    96,   112,   108,   141,   154,   114,   134,   115,
     -76,   157,   165,   155,   158,   169,   200,   195,   180,   193,
     177,    56,   178,    99,   143,   166,    92,   168,   116,   171,
       0,   167,     0,     0,     0,    31,     0,     0,     0,     0,
      56,   170,   174,   -79,   194,    38,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56
};

static const yytype_int16 yycheck[] =
{
      34,    66,    67,   140,   126,     4,    34,   158,   155,    13,
       4,     0,    10,    34,    13,    13,     3,    38,    39,     7,
      14,   172,     6,    11,     8,    10,    91,   174,    93,    27,
      28,    29,    13,     4,    32,    69,     7,    36,   166,   167,
     168,    69,   107,    42,    42,    49,    13,   169,   170,   171,
     197,    10,     5,     6,    13,   192,     5,     9,     7,     7,
     125,    43,    44,    45,    46,    47,    48,    12,    27,    28,
      29,    12,    35,    32,    37,    13,     6,    40,     8,    25,
      26,     5,     6,    38,    39,     5,     6,    13,     7,     7,
      13,    13,    13,     4,     4,     4,     8,    13,    13,     4,
      14,     4,     4,     7,     5,    49,     4,     7,     5,     8,
       5,     5,     5,    30,     6,    40,   198,   191,     7,     5,
     160,   155,    12,    83,   124,    38,    69,    34,   101,    35,
      -1,    39,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
     174,    37,    33,    31,    31,    28,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    54,     0,     3,    13,     4,     7,    13,    67,
      55,    56,    58,    59,    60,     5,     6,     9,    68,    12,
       7,    13,    25,    26,    57,    69,    70,    76,    61,    62,
      63,    55,    71,    77,    10,    91,     7,     7,    62,    13,
      66,    13,    13,    13,    27,    28,    29,    32,    42,    91,
      92,    93,    94,    95,   105,   110,   132,   133,   134,   137,
     139,     6,     8,    72,    78,     4,     4,     4,   111,     7,
      11,    96,    97,    98,    99,   100,   103,     8,    13,    13,
      49,    65,    73,    79,    13,   135,   136,   114,   115,   138,
     114,     4,    93,    14,     4,    64,     4,    75,    83,    75,
       5,     6,    38,    39,   118,   119,     5,     6,     5,   114,
     114,   101,     7,    84,     7,     8,   136,    43,    44,    45,
      46,    47,    48,   116,   117,     4,    36,   120,   125,   130,
     132,   139,   114,   106,     5,   104,   113,   114,    85,    86,
      74,    49,    82,   118,   114,   130,   121,   122,   123,   124,
     126,   127,   128,   129,     4,    30,   112,     5,     6,     5,
       7,    87,    88,    56,    80,     5,    38,    39,    34,    40,
      37,    35,   131,    95,    33,   102,   113,    87,    12,    90,
       7,   125,   125,   125,   130,   130,   130,   113,   107,   108,
      95,    89,    81,     5,    31,    67,    56,   109,     8,    95,
      65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    55,    57,    56,    58,    60,
      59,    59,    61,    61,    63,    64,    62,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    71,    72,    73,
      74,    70,    75,    75,    77,    78,    79,    80,    81,    76,
      82,    84,    83,    85,    86,    85,    88,    89,    87,    90,
      90,    91,    92,    92,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    98,    97,   100,
     101,   102,    99,   103,    99,   104,   104,   106,   105,   108,
     109,   107,   107,   111,   112,   110,   113,   113,   115,   114,
     116,   116,   117,   117,   117,   117,   117,   117,   118,   119,
     119,   119,   120,   120,   122,   121,   123,   121,   124,   121,
     125,   125,   127,   126,   128,   126,   129,   126,   130,   131,
     130,   130,   130,   130,   132,   133,    91,   134,   135,   135,
     136,   137,   138,   138,   139
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     8,     5,     0,     2,     0,     4,     1,     0,
       3,     0,     2,     1,     0,     0,     6,     1,     1,     3,
       1,     3,     1,     2,     0,     2,     2,     0,     0,     0,
       0,     9,     1,     0,     0,     0,     0,     0,     0,    12,
       1,     0,     4,     3,     0,     2,     0,     0,     6,     1,
       0,     3,     3,     1,     1,     1,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     0,
       0,     0,     6,     0,     1,     1,     0,     0,     8,     0,
       0,     4,     0,     0,     0,     8,     1,     3,     0,     3,
       2,     0,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     0,     2,     1,     0,     3,     0,     3,     0,     3,
       2,     1,     0,     3,     0,     3,     0,     3,     1,     0,
       5,     1,     3,     2,     1,     0,     0,     4,     3,     1,
       1,     4,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 4:
#line 61 "compilador.y"
              {
			    geraCodigo (NULL, "INPP");
		    }
#line 1541 "compilador.tab.c"
    break;

  case 5:
#line 67 "compilador.y"
                         {
               strcpy(command,"DMEM ");
               sprintf(totalVars, "%d", num_vars);
               strcat(command, totalVars);
               geraCodigo(NULL, command);
               geraCodigo (NULL, "PARA");
             }
#line 1553 "compilador.tab.c"
    break;

  case 6:
#line 80 "compilador.y"
                  {
                     if(declaredProcedures > 0 && lexicalLevel == 0) {
                        int rot1 = topTagsStack(&tagsTable);
                        sprintf(command, "R%d", rot1);
                        geraCodigo(command, "NADA");
                     }
                  }
#line 1565 "compilador.tab.c"
    break;

  case 8:
#line 91 "compilador.y"
                        {
      strcpy(command,"AMEM ");
		sprintf(totalVars, "%d", num_vars);
		strcat(command, totalVars);
		geraCodigo(NULL, command); 
}
#line 1576 "compilador.tab.c"
    break;

  case 9:
#line 100 "compilador.y"
              { }
#line 1582 "compilador.tab.c"
    break;

  case 14:
#line 109 "compilador.y"
              {
               nova_var = 0;
            }
#line 1590 "compilador.tab.c"
    break;

  case 15:
#line 114 "compilador.y"
              { /* AMEM */
               num_vars += nova_var;
              }
#line 1598 "compilador.tab.c"
    break;

  case 17:
#line 121 "compilador.y"
                { setTypes(&symbolsTable, integer, nova_var); }
#line 1604 "compilador.tab.c"
    break;

  case 19:
#line 127 "compilador.y"
              {
      nova_var++;
		newInput = createSimpleVarInput(token, lexicalLevel, displacement);
		push(&symbolsTable, newInput);
		displacement++;
      }
#line 1615 "compilador.tab.c"
    break;

  case 20:
#line 133 "compilador.y"
                    { 
      nova_var++;
		newInput = createSimpleVarInput(token, lexicalLevel, displacement);
		push(&symbolsTable, newInput);
		displacement++;
      }
#line 1626 "compilador.tab.c"
    break;

  case 27:
#line 159 "compilador.y"
                  { isSubRoutine = 1; }
#line 1632 "compilador.tab.c"
    break;

  case 28:
#line 161 "compilador.y"
        {
		declaredProcedures++;
      pushTagsStack(&tagsTable, rotulo);
		rotulo++;
      pushTagsStack(&tagsTable, rotulo);
		rotulo++;


      int rot0 = popTagsStack(&tagsTable);
      int rot1 = popTagsStack(&tagsTable);

      sprintf(labelSubroutineEnd, "R%d", rot0);
      sprintf(labelSubroutineEnd, "R%d", rot1);
      
		// Soh imprime no primeiro pois desvia pra main
		if(declaredProcedures == 1) {
			// Imprime rotulo de saida da subrotina
         sprintf(command, "DSVS R%d", rot1);
         geraCodigo(NULL, command);
		}

		// Imprime rotulo de entrada da subrotina
      sprintf(command, "ENPR R%d", rot0);
		lexicalLevel++; // Lexical level is elevated on subroutine
		sprintf(varLexDisp, "%d", lexicalLevel);
		strcat(command, varLexDisp);
		geraCodigo(NULL, command); 

		newInput = createSimpleProcedureInput(token, labelSubroutineStart, lexicalLevel, 0);
		push(&symbolsTable, newInput);
	}
#line 1668 "compilador.tab.c"
    break;

  case 29:
#line 192 "compilador.y"
        { newParams = 0; }
#line 1674 "compilador.tab.c"
    break;

  case 30:
#line 193 "compilador.y"
        {
		// Zera para ser utilizado na subrotina
		// Mas salva valor para ser recuperado
		oldVars = num_vars;
		num_vars = 0;
		displacement = 0;
	}
#line 1686 "compilador.tab.c"
    break;

  case 31:
#line 201 "compilador.y"
        {
		// DMEM nas variaveis do procedimento
		pop(&symbolsTable, num_vars);
		strcpy(command,"DMEM ");
		sprintf(totalVars, "%d", num_vars);
		strcat(command, totalVars);
		geraCodigo(NULL, command);
		
		// Pega procedimento para printar infos da saida dele
		destinyVariable = getNth(&symbolsTable, num_parameter + 1);
		if(destinyVariable == NULL) {
			printf("Procedimento nao encontrado na tabela de simbolos.\n");
			exit(1);
		}

		sprintf(command, "RTPR %d, %d", destinyVariable->lexicalLevel, destinyVariable->numParams);
		pop(&symbolsTable, num_parameter); // Removes parameters from symbols table

		newParams = 0;
		//strcat(command, totalVars);
		geraCodigo(NULL, command);
		lexicalLevel--; // Lexical level is decremented on subroutine end

		destinyVariable = NULL; // Libera variavel destino
		num_vars = oldVars;    // Restabelece numero de variaveis no nivel lexico
		isSubRoutine = 0;
	}
#line 1718 "compilador.tab.c"
    break;

  case 34:
#line 237 "compilador.y"
             { isSubRoutine = 1; }
#line 1724 "compilador.tab.c"
    break;

  case 35:
#line 239 "compilador.y"
        {
		declaredProcedures++;
      pushTagsStack(&tagsTable, rotulo);
		rotulo++;
      pushTagsStack(&tagsTable, rotulo);
		rotulo++;

      int rot0 = popTagsStack(&tagsTable);
      int rot1 = popTagsStack(&tagsTable);

      sprintf(labelSubroutineEnd, "R%d", rot0);
      sprintf(labelSubroutineEnd, "R%d", rot1);

		// Soh imprime no primeiro pois desvia pra main
		if(declaredProcedures == 1) {
			// Imprime rotulo de saida da subrotina
         sprintf(command, "DSVS R%d", rot1);
         geraCodigo(NULL, command);
		}

		// Imprime rotulo de entrada da subrotina
      sprintf(command, "ENPR R%d", rot0);
		lexicalLevel++; // Lexical level is elevated on subroutine
		sprintf(varLexDisp, "%d", lexicalLevel);
		strcat(command, varLexDisp);
		geraCodigo(NULL, command);

		strcpy(functionIdentifier, token);
		newParams = 0;
		newInput = createSimpleFunctionInput(functionIdentifier, labelSubroutineStart, lexicalLevel, 0, undefined);
		push(&symbolsTable, newInput);
	}
#line 1761 "compilador.tab.c"
    break;

  case 36:
#line 271 "compilador.y"
        { newParams = 0; }
#line 1767 "compilador.tab.c"
    break;

  case 37:
#line 273 "compilador.y"
        {
		// Updates paramters and return type
		newInput = search(&symbolsTable, functionIdentifier);
		newInput->numParams = newParams;
		newInput->type = returnType;
		newInput->displacement = -4 - newParams;
	}
#line 1779 "compilador.tab.c"
    break;

  case 38:
#line 281 "compilador.y"
        {
		// Zera para ser utilizado na subrotina
		// Mas salva valor para ser recuperado
		oldVars = num_vars;
		num_vars = 0;
		displacement = 0;
	}
#line 1791 "compilador.tab.c"
    break;

  case 39:
#line 289 "compilador.y"
        {
		// DMEM nas variaveis do procedimento
		pop(&symbolsTable, num_vars);
		strcpy(command,"DMEM ");
		sprintf(totalVars, "%d", num_vars);
		strcat(command, totalVars);
		geraCodigo(NULL, command);
		
		// Pega procedimento para printar infos da saida dele
		destinyVariable = getNth(&symbolsTable, num_parameter + 1);
		if(destinyVariable == NULL) {
			printf("Procedimento nao encontrado na tabela de simbolos.\n");
			exit(1);
		}

		sprintf(command, "RTPR %d, %d", destinyVariable->lexicalLevel, destinyVariable->numParams);
		geraCodigo(NULL, command);

		pop(&symbolsTable, num_parameter); // Removes parameters from symbols table
		newParams = 0;
		lexicalLevel--; // Lexical level is decremented on subroutine end

		destinyVariable = NULL; // Libera variavel destino
		num_vars = oldVars;    // Restabelece numero de variaveis no nivel lexico
		isSubRoutine = 0;
	}
#line 1822 "compilador.tab.c"
    break;

  case 40:
#line 318 "compilador.y"
                { returnType = integer; }
#line 1828 "compilador.tab.c"
    break;

  case 41:
#line 324 "compilador.y"
                        { num_parameter = 0; }
#line 1834 "compilador.tab.c"
    break;

  case 42:
#line 327 "compilador.y"
        {
		updateParams(getNth(&symbolsTable, num_parameter + 1),
								&symbolsTable, num_parameter);
	}
#line 1843 "compilador.tab.c"
    break;

  case 44:
#line 335 "compilador.y"
          { newParams++; }
#line 1849 "compilador.tab.c"
    break;

  case 46:
#line 340 "compilador.y"
        { num_parameter++; }
#line 1855 "compilador.tab.c"
    break;

  case 47:
#line 340 "compilador.y"
                                       { nova_var = 0; }
#line 1861 "compilador.tab.c"
    break;

  case 49:
#line 344 "compilador.y"
            { receivingByReference = 1; }
#line 1867 "compilador.tab.c"
    break;

  case 67:
#line 380 "compilador.y"
   {}
#line 1873 "compilador.tab.c"
    break;

  case 68:
#line 382 "compilador.y"
        {
		typeVerify(&typesTable, "atribuicao");
		strcpy(command,"ARMZ ");
		sprintf(varLexDisp, "%d, ", destinyVariable->lexicalLevel);
		strcat(command, varLexDisp);
		sprintf(varLexDisp, "%d", destinyVariable->displacement);
		strcat(command, varLexDisp);
		geraCodigo(NULL, command); 
		destinyVariable = NULL;
	}
#line 1888 "compilador.tab.c"
    break;

  case 69:
#line 395 "compilador.y"
    {
		insideProcedure = 1;
		// Imprime rotulo de entrada da subrotina
		currentProcedure = destinyVariable;
		strcpy(callProcedure, "CHPR ");
		strcat(callProcedure, destinyVariable->label);
		sprintf(varLexDisp, ",%d", lexicalLevel);
		strcat(callProcedure, varLexDisp);
   	}
#line 1902 "compilador.tab.c"
    break;

  case 70:
#line 404 "compilador.y"
                        {  receivingFormalParams = 1; newParams = 0; }
#line 1908 "compilador.tab.c"
    break;

  case 71:
#line 407 "compilador.y"
        { 
		insideProcedure = 0;
		geraCodigo(NULL, callProcedure); 
		receivingFormalParams = 0;
	}
#line 1918 "compilador.tab.c"
    break;

  case 72:
#line 412 "compilador.y"
        { destinyVariable = NULL; }
#line 1924 "compilador.tab.c"
    break;

  case 73:
#line 414 "compilador.y"
        {
		insideProcedure = 1;
		currentProcedure = destinyVariable;
		// Imprime rotulo de entrada da subrotina
		strcpy(callProcedure, "CHPR ");
		strcat(callProcedure, destinyVariable->label);
		sprintf(varLexDisp, ",%d", lexicalLevel);
		strcat(callProcedure, varLexDisp);

		destinyVariable = NULL;
	}
#line 1940 "compilador.tab.c"
    break;

  case 74:
#line 425 "compilador.y"
        { 
		insideProcedure = 0;
    	geraCodigo(NULL, callProcedure); 
	}
#line 1949 "compilador.tab.c"
    break;

  case 77:
#line 478 "compilador.y"
          {
		sprintf(command, "DSVF R%d", rotulo);

		pushTagsStack(&tagsTable, rotulo+1);
		pushTagsStack(&tagsTable, rotulo);
		pushTagsStack(&tagsTable, rotulo+1);
		rotulo += 2;
		
		geraCodigo(NULL, command);
	  }
#line 1964 "compilador.tab.c"
    break;

  case 79:
#line 492 "compilador.y"
                 {
			int rot1 = popTagsStack(&tagsTable);
			sprintf(command, "DSVS R%d", rot1);
			geraCodigo(NULL, command);
		 }
#line 1974 "compilador.tab.c"
    break;

  case 80:
#line 498 "compilador.y"
         {
            int rot0 = popTagsStack(&tagsTable);
            sprintf(command, "R%d", rot0);
            geraCodigo(command, "NADA");
         }
#line 1984 "compilador.tab.c"
    break;

  case 81:
#line 504 "compilador.y"
                 {
			int rot1 = popTagsStack(&tagsTable);
			sprintf(command, "R%d", rot1);
			geraCodigo(command, "NADA");
		 }
#line 1994 "compilador.tab.c"
    break;

  case 82:
#line 510 "compilador.y"
                 {
			popTagsStack(&tagsTable);
			int rot1 = popTagsStack(&tagsTable);
			sprintf(command, "R%d", rot1);
			geraCodigo(command, "NADA");
			popTagsStack(&tagsTable);
		 }
#line 2006 "compilador.tab.c"
    break;

  case 83:
#line 549 "compilador.y"
      {
         sprintf(command, "R%d", rotulo);

         pushTagsStack(&tagsTable, rotulo);
         pushTagsStack(&tagsTable, rotulo+1);
         rotulo += 2;

         geraCodigo(command, "NADA");  
      }
#line 2020 "compilador.tab.c"
    break;

  case 84:
#line 559 "compilador.y"
      {
         int rot1 = topTagsStack(&tagsTable);
         sprintf(command, "DSVF R%d", rot1);
         geraCodigo(NULL, command);
      }
#line 2030 "compilador.tab.c"
    break;

  case 85:
#line 565 "compilador.y"
      {
         int rot1 = popTagsStack(&tagsTable);
         int rot0 = popTagsStack(&tagsTable);

         sprintf(command, "DSVS R%d", rot0);
         geraCodigo(NULL, command);

         sprintf(command, "R%d", rot1);
         geraCodigo(command, "NADA");
      }
#line 2045 "compilador.tab.c"
    break;

  case 88:
#line 583 "compilador.y"
        { }
#line 2051 "compilador.tab.c"
    break;

  case 90:
#line 588 "compilador.y"
        { 
		typeVerify(&typesTable, "relacional");
		geraCodigo(NULL, relacaoUsada);
	}
#line 2060 "compilador.tab.c"
    break;

  case 92:
#line 597 "compilador.y"
              { strcpy(relacaoUsada, "CMIG"); }
#line 2066 "compilador.tab.c"
    break;

  case 93:
#line 598 "compilador.y"
               { strcpy(relacaoUsada, "CMDG"); }
#line 2072 "compilador.tab.c"
    break;

  case 94:
#line 599 "compilador.y"
                { strcpy(relacaoUsada, "CMME"); }
#line 2078 "compilador.tab.c"
    break;

  case 95:
#line 600 "compilador.y"
                      { strcpy(relacaoUsada, "CMEG"); }
#line 2084 "compilador.tab.c"
    break;

  case 96:
#line 601 "compilador.y"
                      { strcpy(relacaoUsada, "CMAG"); }
#line 2090 "compilador.tab.c"
    break;

  case 97:
#line 602 "compilador.y"
                { strcpy(relacaoUsada, "CMMA"); }
#line 2096 "compilador.tab.c"
    break;

  case 99:
#line 611 "compilador.y"
             { pureExpression = 0; }
#line 2102 "compilador.tab.c"
    break;

  case 100:
#line 611 "compilador.y"
                                             { pureExpression = 0; }
#line 2108 "compilador.tab.c"
    break;

  case 104:
#line 620 "compilador.y"
        { pureExpression = 0; }
#line 2114 "compilador.tab.c"
    break;

  case 105:
#line 620 "compilador.y"
                                           { typeVerify(&typesTable, "soma"); geraCodigo(NULL, "SOMA"); }
#line 2120 "compilador.tab.c"
    break;

  case 106:
#line 621 "compilador.y"
          { pureExpression = 0; }
#line 2126 "compilador.tab.c"
    break;

  case 107:
#line 621 "compilador.y"
                                              { typeVerify(&typesTable, "subtracao"); geraCodigo(NULL, "SUBT"); }
#line 2132 "compilador.tab.c"
    break;

  case 108:
#line 622 "compilador.y"
          { pureExpression = 0; }
#line 2138 "compilador.tab.c"
    break;

  case 109:
#line 622 "compilador.y"
                                           { typeVerify(&typesTable, "or"); geraCodigo(NULL, "DISJ"); }
#line 2144 "compilador.tab.c"
    break;

  case 112:
#line 632 "compilador.y"
        { pureExpression = 0; }
#line 2150 "compilador.tab.c"
    break;

  case 113:
#line 632 "compilador.y"
                                                { typeVerify(&typesTable, "multiplicacao"); geraCodigo(NULL, "MULT"); }
#line 2156 "compilador.tab.c"
    break;

  case 114:
#line 633 "compilador.y"
          { pureExpression = 0; }
#line 2162 "compilador.tab.c"
    break;

  case 115:
#line 633 "compilador.y"
                                            { typeVerify(&typesTable, "divisao"); geraCodigo(NULL, "DIVI"); }
#line 2168 "compilador.tab.c"
    break;

  case 116:
#line 634 "compilador.y"
          { pureExpression = 0; }
#line 2174 "compilador.tab.c"
    break;

  case 117:
#line 634 "compilador.y"
                                            { typeVerify(&typesTable, "and"); geraCodigo(NULL, "CONJ"); }
#line 2180 "compilador.tab.c"
    break;

  case 118:
#line 641 "compilador.y"
        {
		if(loadedVariable != NULL) {
			if(loadedVariable->category == function) {
				strcpy(callProcedure, "CHPR ");
				strcat(callProcedure, loadedVariable->label);
				sprintf(varLexDisp, ", %d", lexicalLevel);
				strcat(callProcedure, varLexDisp);
				geraCodigo(NULL, callProcedure);
			}
			else {
				strcpy(command, "CRVL ");
				sprintf(varLexDisp, "%d, ", loadedVariable->lexicalLevel);
				strcat(command, varLexDisp);
				sprintf(varLexDisp, "%d", loadedVariable->displacement);
				loadedVariable = NULL;
				strcat(command, varLexDisp);
				geraCodigo(NULL, command);
			}
		}
		else {
			if(destinyVariable->category == function) {
				strcpy(callProcedure, "CHPR ");
				strcat(callProcedure, destinyVariable->label);
				sprintf(varLexDisp, ", %d", lexicalLevel);
				strcat(callProcedure, varLexDisp);
				geraCodigo(NULL, callProcedure);
			}
			else {
				strcpy(command, "CRVL ");
				sprintf(varLexDisp, "%d, ", destinyVariable->lexicalLevel);
				strcat(command, varLexDisp);
				sprintf(varLexDisp, "%d", destinyVariable->displacement);
				destinyVariable = NULL;
				strcat(command, varLexDisp);
				geraCodigo(NULL, command);
			}
		}
	}
#line 2223 "compilador.tab.c"
    break;

  case 119:
#line 680 "compilador.y"
        {
		if(loadedVariable != NULL) {
			if(loadedVariable->category == function) {
				currentProcedure = loadedVariable;
			}
		}
		else {
			if(destinyVariable->category == function) {
				currentProcedure = destinyVariable;
			}
		}
	}
#line 2240 "compilador.tab.c"
    break;

  case 120:
#line 693 "compilador.y"
        { 
		strcpy(callProcedure, "CHPR ");
		strcat(callProcedure, currentProcedure->label);
		sprintf(varLexDisp, ",%d", lexicalLevel);
		strcat(callProcedure, varLexDisp);
		geraCodigo(NULL, callProcedure);
	}
#line 2252 "compilador.tab.c"
    break;

  case 124:
#line 707 "compilador.y"
              {
		// If null, looks for left side of atribution
		if(destinyVariable == NULL) {
			destinyVariable = search(&symbolsTable, token);
			if(destinyVariable == NULL) {
				printf("Variavel %s nao encontrada na tabela de simbolos.\n", token);
				exit(1);
			}
			pushTypeStack(&typesTable, destinyVariable->type);
		}
		else { // Otherwise, looks for right side
			loadedVariable = search(&symbolsTable, token);
			if(loadedVariable == NULL) {
				printf("Variavel %s nao encontrada na tabela de simbolos.\n", token);
				exit(1);
			}
			pushTypeStack(&typesTable, loadedVariable->type);
		}
   	}
#line 2276 "compilador.tab.c"
    break;

  case 130:
#line 739 "compilador.y"
                       {
   geraCodigo(NULL, "LEIT");

   destinyVariable = search(&symbolsTable, token);
   fprintf(stdout, "TOKEN: %s \n", token);
   if(destinyVariable == NULL) {
      printf("Variavel nao encontrada na tabela de simbolos.\n");
      exit(1);
   }

   strcpy(command,"ARMZ ");
   sprintf(varLexDisp, "%d, ", destinyVariable->lexicalLevel);
   strcat(command, varLexDisp);
   sprintf(varLexDisp, "%d", destinyVariable->displacement);
   strcat(command, varLexDisp);
   geraCodigo(NULL, command); 
   destinyVariable = NULL;
}
#line 2299 "compilador.tab.c"
    break;

  case 132:
#line 761 "compilador.y"
                                               { geraCodigo (NULL, "IMPR"); }
#line 2305 "compilador.tab.c"
    break;

  case 133:
#line 762 "compilador.y"
            { geraCodigo (NULL, "IMPR"); }
#line 2311 "compilador.tab.c"
    break;

  case 134:
#line 767 "compilador.y"
        {
		pushTypeStack(&typesTable, integer);
		strcpy(command,"CRCT ");
		sprintf(totalVars, "%s", token);
		strcat(command, totalVars);
		geraCodigo(NULL, command); 
	}
#line 2323 "compilador.tab.c"
    break;


#line 2327 "compilador.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 777 "compilador.y"


int main (int argc, char** argv) {
   FILE* fp;
   extern FILE* yyin;

   if (argc<2 || argc>2) {
         printf("usage compilador <arq>a %d\n", argc);
         return(-1);
      }

   fp=fopen (argv[1], "r");
   if (fp == NULL) {
      printf("usage compilador <arq>b\n");
      return(-1);
   }


/* -------------------------------------------------------------------
 *  Inicia a Tabela de S�mbolos (e a de rótulos)
 * ------------------------------------------------------------------- */
 	createStack(&symbolsTable);
   createTypeStack(&typesTable);
   createTagsStack(&tagsTable);
   
	lexicalLevel = 0;
	displacement = 0;
   rotulo = 0;

   yyin=fp;
   yyparse();

   return 0;
}
