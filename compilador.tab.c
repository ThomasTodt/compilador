/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

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

int num_vars, nova_var, displacement, lexicalLevel;
int pureExpression;
char totalVars[16], command[20], varLexDisp[12], relacaoUsada[5];

stackNode *newInput, *destinyVariable, *loadedVariable;
symbolsStack symbolsTable;
typesStack typesTable;


#line 91 "compilador.tab.c"

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

#include "compilador.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PROGRAM = 3,                    /* PROGRAM  */
  YYSYMBOL_ABRE_PARENTESES = 4,            /* ABRE_PARENTESES  */
  YYSYMBOL_FECHA_PARENTESES = 5,           /* FECHA_PARENTESES  */
  YYSYMBOL_VIRGULA = 6,                    /* VIRGULA  */
  YYSYMBOL_PONTO_E_VIRGULA = 7,            /* PONTO_E_VIRGULA  */
  YYSYMBOL_DOIS_PONTOS = 8,                /* DOIS_PONTOS  */
  YYSYMBOL_PONTO = 9,                      /* PONTO  */
  YYSYMBOL_T_BEGIN = 10,                   /* T_BEGIN  */
  YYSYMBOL_T_END = 11,                     /* T_END  */
  YYSYMBOL_VAR = 12,                       /* VAR  */
  YYSYMBOL_IDENT = 13,                     /* IDENT  */
  YYSYMBOL_ATRIBUICAO = 14,                /* ATRIBUICAO  */
  YYSYMBOL_ABRE_COLCHETES = 15,            /* ABRE_COLCHETES  */
  YYSYMBOL_FECHA_COLCHETES = 16,           /* FECHA_COLCHETES  */
  YYSYMBOL_ABRE_CHAVES = 17,               /* ABRE_CHAVES  */
  YYSYMBOL_FECHA_CHAVES = 18,              /* FECHA_CHAVES  */
  YYSYMBOL_LABEL = 19,                     /* LABEL  */
  YYSYMBOL_TYPE = 20,                      /* TYPE  */
  YYSYMBOL_OF = 21,                        /* OF  */
  YYSYMBOL_GOTO = 22,                      /* GOTO  */
  YYSYMBOL_ARRAY = 23,                     /* ARRAY  */
  YYSYMBOL_RELACAO = 24,                   /* RELACAO  */
  YYSYMBOL_PROCEDURE = 25,                 /* PROCEDURE  */
  YYSYMBOL_FUNCTION = 26,                  /* FUNCTION  */
  YYSYMBOL_READ = 27,                      /* READ  */
  YYSYMBOL_WRITE = 28,                     /* WRITE  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_THEN = 30,                      /* THEN  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_WHILE = 32,                     /* WHILE  */
  YYSYMBOL_DO = 33,                        /* DO  */
  YYSYMBOL_OR = 34,                        /* OR  */
  YYSYMBOL_AND = 35,                       /* AND  */
  YYSYMBOL_NOT = 36,                       /* NOT  */
  YYSYMBOL_DIV = 37,                       /* DIV  */
  YYSYMBOL_MAIS = 38,                      /* MAIS  */
  YYSYMBOL_MENOS = 39,                     /* MENOS  */
  YYSYMBOL_ASTERISCO = 40,                 /* ASTERISCO  */
  YYSYMBOL_BARRA = 41,                     /* BARRA  */
  YYSYMBOL_NUMERO = 42,                    /* NUMERO  */
  YYSYMBOL_IGUAL = 43,                     /* IGUAL  */
  YYSYMBOL_DIFF = 44,                      /* DIFF  */
  YYSYMBOL_MENOR = 45,                     /* MENOR  */
  YYSYMBOL_MENOR_IGUAL = 46,               /* MENOR_IGUAL  */
  YYSYMBOL_MAIOR = 47,                     /* MAIOR  */
  YYSYMBOL_MAIOR_IGUAL = 48,               /* MAIOR_IGUAL  */
  YYSYMBOL_NADA = 49,                      /* NADA  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_programa = 51,                  /* programa  */
  YYSYMBOL_52_1 = 52,                      /* $@1  */
  YYSYMBOL_bloco = 53,                     /* bloco  */
  YYSYMBOL_parte_declara_vars = 54,        /* parte_declara_vars  */
  YYSYMBOL_var = 55,                       /* var  */
  YYSYMBOL_56_2 = 56,                      /* $@2  */
  YYSYMBOL_declara_vars = 57,              /* declara_vars  */
  YYSYMBOL_declara_var = 58,               /* declara_var  */
  YYSYMBOL_59_3 = 59,                      /* $@3  */
  YYSYMBOL_60_4 = 60,                      /* $@4  */
  YYSYMBOL_tipo = 61,                      /* tipo  */
  YYSYMBOL_lista_id_var = 62,              /* lista_id_var  */
  YYSYMBOL_lista_idents = 63,              /* lista_idents  */
  YYSYMBOL_comando_composto = 64,          /* comando_composto  */
  YYSYMBOL_comandos = 65,                  /* comandos  */
  YYSYMBOL_comando = 66,                   /* comando  */
  YYSYMBOL_numero_ou_nada = 67,            /* numero_ou_nada  */
  YYSYMBOL_comando_sem_rotulo = 68,        /* comando_sem_rotulo  */
  YYSYMBOL_atribuicao_procedimento = 69,   /* atribuicao_procedimento  */
  YYSYMBOL_atribuicao = 70,                /* atribuicao  */
  YYSYMBOL_71_5 = 71,                      /* $@5  */
  YYSYMBOL_chama_procedimento = 72,        /* chama_procedimento  */
  YYSYMBOL_lista_expressoes = 73,          /* lista_expressoes  */
  YYSYMBOL_expressao = 74,                 /* expressao  */
  YYSYMBOL_75_6 = 75,                      /* $@6  */
  YYSYMBOL_relacao_exp_simples_vazio = 76, /* relacao_exp_simples_vazio  */
  YYSYMBOL_relacao = 77,                   /* relacao  */
  YYSYMBOL_expressao_simples = 78,         /* expressao_simples  */
  YYSYMBOL_mais_menos_vazio = 79,          /* mais_menos_vazio  */
  YYSYMBOL_expressao_lista_termo = 80,     /* expressao_lista_termo  */
  YYSYMBOL_lista_termo = 81,               /* lista_termo  */
  YYSYMBOL_82_7 = 82,                      /* $@7  */
  YYSYMBOL_83_8 = 83,                      /* $@8  */
  YYSYMBOL_84_9 = 84,                      /* $@9  */
  YYSYMBOL_termo = 85,                     /* termo  */
  YYSYMBOL_lista_fator = 86,               /* lista_fator  */
  YYSYMBOL_87_10 = 87,                     /* $@10  */
  YYSYMBOL_88_11 = 88,                     /* $@11  */
  YYSYMBOL_89_12 = 89,                     /* $@12  */
  YYSYMBOL_fator = 90,                     /* fator  */
  YYSYMBOL_91_13 = 91,                     /* $@13  */
  YYSYMBOL_variavel = 92,                  /* variavel  */
  YYSYMBOL_desvio = 93,                    /* desvio  */
  YYSYMBOL_comando_condicional = 94,       /* comando_condicional  */
  YYSYMBOL_comando_repetitivo = 95,        /* comando_repetitivo  */
  YYSYMBOL_leitura = 96,                   /* leitura  */
  YYSYMBOL_lista_leitura = 97,             /* lista_leitura  */
  YYSYMBOL_simbolo_leitura = 98,           /* simbolo_leitura  */
  YYSYMBOL_escrita = 99,                   /* escrita  */
  YYSYMBOL_lista_escrita = 100,            /* lista_escrita  */
  YYSYMBOL_numero = 101                    /* numero  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   102

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  124

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    40,    40,    40,    56,    62,    71,    71,    72,    76,
      77,    80,    85,    80,    91,    94,   101,   110,   111,   115,
     119,   119,   122,   122,   125,   125,   130,   131,   132,   133,
     134,   135,   136,   140,   141,   147,   147,   161,   164,   164,
     169,   169,   173,   180,   183,   184,   185,   186,   187,   188,
     193,   197,   197,   197,   201,   202,   206,   206,   207,   207,
     208,   208,   213,   214,   218,   218,   219,   219,   220,   220,
     226,   248,   247,   253,   254,   255,   260,   284,   287,   290,
     293,   296,   299,   299,   301,   320,   323,   324,   328
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PROGRAM",
  "ABRE_PARENTESES", "FECHA_PARENTESES", "VIRGULA", "PONTO_E_VIRGULA",
  "DOIS_PONTOS", "PONTO", "T_BEGIN", "T_END", "VAR", "IDENT", "ATRIBUICAO",
  "ABRE_COLCHETES", "FECHA_COLCHETES", "ABRE_CHAVES", "FECHA_CHAVES",
  "LABEL", "TYPE", "OF", "GOTO", "ARRAY", "RELACAO", "PROCEDURE",
  "FUNCTION", "READ", "WRITE", "IF", "THEN", "ELSE", "WHILE", "DO", "OR",
  "AND", "NOT", "DIV", "MAIS", "MENOS", "ASTERISCO", "BARRA", "NUMERO",
  "IGUAL", "DIFF", "MENOR", "MENOR_IGUAL", "MAIOR", "MAIOR_IGUAL", "NADA",
  "$accept", "programa", "$@1", "bloco", "parte_declara_vars", "var",
  "$@2", "declara_vars", "declara_var", "$@3", "$@4", "tipo",
  "lista_id_var", "lista_idents", "comando_composto", "comandos",
  "comando", "numero_ou_nada", "comando_sem_rotulo",
  "atribuicao_procedimento", "atribuicao", "$@5", "chama_procedimento",
  "lista_expressoes", "expressao", "$@6", "relacao_exp_simples_vazio",
  "relacao", "expressao_simples", "mais_menos_vazio",
  "expressao_lista_termo", "lista_termo", "$@7", "$@8", "$@9", "termo",
  "lista_fator", "$@10", "$@11", "$@12", "fator", "$@13", "variavel",
  "desvio", "comando_condicional", "comando_repetitivo", "leitura",
  "lista_leitura", "simbolo_leitura", "escrita", "lista_escrita", "numero", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-92)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-69)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -92,     7,    47,   -92,    22,    48,    38,   -92,    32,    46,
      41,    44,   -92,    49,    45,   -92,    50,   -92,    -8,   -92,
     -92,   -92,    53,    55,   -92,   -92,    29,   -92,   -92,   -92,
      51,   -92,   -92,   -92,   -92,   -92,    52,    54,   -92,    56,
      57,   -92,    -8,   -92,   -92,   -92,    58,   -92,   -92,   -92,
     -92,    35,   -92,    39,   -92,   -92,     8,    43,   -92,   -92,
      60,    61,   -92,    57,   -92,   -92,   -22,    -3,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     8,   -92,    -3,   -25,   -29,   -92,    59,   -92,
     -92,    64,   -92,    63,   -92,   -92,    23,    25,    42,   -92,
      26,    34,    62,   -92,   -92,   -92,    -3,    -3,    -3,    -3,
      -3,    -3,   -92,   -29,   -29,   -29,   -92,   -92,   -92,    72,
      73,   -92,   -92,   -92
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,    18,     0,     0,
       0,     8,    17,     0,    78,     5,     0,     3,    25,     4,
      11,    76,     0,     0,    88,    28,     0,    21,    23,    22,
      37,    27,    29,    30,    31,    32,     0,     7,    10,     0,
       0,    40,    25,    19,    26,    33,     0,    34,    24,     9,
      16,     0,    84,     0,    83,    87,    53,     0,    20,    40,
       0,     0,    81,     0,    51,    52,    43,     0,    85,    40,
      36,    15,    14,    12,    82,    44,    45,    46,    47,    49,
      48,    41,    53,    40,     0,    50,    55,    63,    70,    73,
      86,     0,    42,     0,    75,    54,     0,     0,     0,    62,
       0,     0,     0,    71,    13,    74,     0,     0,     0,     0,
       0,     0,    40,    57,    59,    61,    65,    67,    69,     0,
      38,    72,    40,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,    65,   -92,
     -92,   -92,   -92,   -92,    66,   -92,    36,   -92,   -92,   -92,
     -92,   -92,   -92,   -40,   -41,   -92,   -92,   -92,    -1,   -92,
     -92,   -92,   -92,   -92,   -92,   -91,   -92,   -92,   -92,   -92,
     -80,   -92,   -15,   -92,   -92,   -92,   -92,   -92,    20,   -92,
     -92,   -10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    13,    14,    15,    16,    37,    38,    39,
      91,    73,    51,     8,    25,    26,    27,    28,    29,    44,
      45,    46,    47,   119,   120,    56,    81,    82,    66,    67,
      85,    95,    96,    97,    98,    86,    99,   100,   101,   102,
      87,   112,    88,    31,    32,    33,    34,    53,    54,    35,
      57,    89
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      55,    83,    18,    30,    94,    21,   -68,     3,    36,   -60,
      21,   -64,   -66,   -56,   -58,   113,   114,   115,    70,    22,
      23,    75,    76,    77,    78,    79,    80,    30,    90,   116,
     117,   118,    36,    84,    24,     5,    42,     9,    10,    24,
      43,    60,    93,    61,    62,    63,    64,    65,    68,    69,
       4,     7,     6,    11,    12,    18,    -6,    40,    17,    41,
      48,   106,    20,   103,   107,   -35,   109,   -11,   105,    50,
      52,   104,    59,    71,    72,   110,   108,   121,    58,   122,
      19,    92,   123,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,     0,
       0,     0,    49
};

static const yytype_int8 yycheck[] =
{
      41,     4,    10,    18,    84,    13,    35,     0,    18,    34,
      13,    40,    41,    38,    39,   106,   107,   108,    59,    27,
      28,    43,    44,    45,    46,    47,    48,    42,    69,   109,
     110,   111,    42,    36,    42,    13,     7,     5,     6,    42,
      11,     6,    83,     8,     5,     6,    38,    39,     5,     6,
       3,    13,     4,     7,    13,    10,    12,     4,     9,     4,
       8,    38,    12,     4,    39,    14,    40,    13,     5,    13,
      13,     7,    14,    13,    13,    41,    34,     5,    42,     6,
      14,    82,   122,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,    52,     0,     3,    13,     4,    13,    63,     5,
       6,     7,    13,    53,    54,    55,    56,     9,    10,    64,
      12,    13,    27,    28,    42,    64,    65,    66,    67,    68,
      92,    93,    94,    95,    96,    99,   101,    57,    58,    59,
       4,     4,     7,    11,    69,    70,    71,    72,     8,    58,
      13,    62,    13,    97,    98,    74,    75,   100,    66,    14,
       6,     8,     5,     6,    38,    39,    78,    79,     5,     6,
      74,    13,    13,    61,    98,    43,    44,    45,    46,    47,
      48,    76,    77,     4,    36,    80,    85,    90,    92,   101,
      74,    60,    78,    74,    90,    81,    82,    83,    84,    86,
      87,    88,    89,     4,     7,     5,    38,    39,    34,    40,
      41,    35,    91,    85,    85,    85,    90,    90,    90,    73,
      74,     5,     6,    73
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    52,    51,    53,    54,    56,    55,    55,    57,
      57,    59,    60,    58,    61,    62,    62,    63,    63,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    68,    68,
      68,    68,    68,    69,    69,    71,    70,    72,    73,    73,
      75,    74,    76,    76,    77,    77,    77,    77,    77,    77,
      78,    79,    79,    79,    80,    80,    82,    81,    83,    81,
      84,    81,    85,    85,    87,    86,    88,    86,    89,    86,
      90,    91,    90,    90,    90,    90,    92,    93,    64,    94,
      95,    96,    97,    97,    98,    99,   100,   100,   101
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     2,     1,     0,     3,     0,     2,
       1,     0,     0,     6,     1,     3,     1,     3,     1,     3,
       3,     1,     1,     1,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     1,     3,
       0,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     0,     2,     1,     0,     3,     0,     3,
       0,     3,     2,     1,     0,     3,     0,     3,     0,     3,
       1,     0,     5,     1,     3,     2,     1,     0,     0,     0,
       0,     4,     3,     1,     1,     4,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* $@1: %empty  */
#line 40 "compilador.y"
             {
               geraCodigo (NULL, "INPP");
             }
#line 1279 "compilador.tab.c"
    break;

  case 3: /* programa: $@1 PROGRAM IDENT ABRE_PARENTESES lista_idents FECHA_PARENTESES PONTO_E_VIRGULA bloco PONTO  */
#line 45 "compilador.y"
                         {
               strcpy(command,"DMEM ");
               sprintf(totalVars, "%d", num_vars);
               strcat(command, totalVars);
               geraCodigo(NULL, command);
               geraCodigo (NULL, "PARA");
             }
#line 1291 "compilador.tab.c"
    break;

  case 5: /* parte_declara_vars: var  */
#line 62 "compilador.y"
                        {
      strcpy(command,"AMEM ");
		sprintf(totalVars, "%d", num_vars);
		strcat(command, totalVars);
		geraCodigo(NULL, command); 
}
#line 1302 "compilador.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 71 "compilador.y"
              { }
#line 1308 "compilador.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 80 "compilador.y"
              {
               nova_var = 0;
            }
#line 1316 "compilador.tab.c"
    break;

  case 12: /* $@4: %empty  */
#line 85 "compilador.y"
              { /* AMEM */
               num_vars += nova_var;
              }
#line 1324 "compilador.tab.c"
    break;

  case 15: /* lista_id_var: lista_id_var VIRGULA IDENT  */
#line 95 "compilador.y"
              {
      nova_var++;
		newInput = createSimpleVarInput(token, lexicalLevel, displacement);
		push(&symbolsTable, newInput);
		displacement++;
      }
#line 1335 "compilador.tab.c"
    break;

  case 16: /* lista_id_var: IDENT  */
#line 101 "compilador.y"
                    { 
      nova_var++;
		newInput = createSimpleVarInput(token, lexicalLevel, displacement);
		push(&symbolsTable, newInput);
		displacement++;
      }
#line 1346 "compilador.tab.c"
    break;

  case 35: /* $@5: %empty  */
#line 147 "compilador.y"
   {}
#line 1352 "compilador.tab.c"
    break;

  case 36: /* atribuicao: $@5 ATRIBUICAO expressao  */
#line 149 "compilador.y"
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
#line 1367 "compilador.tab.c"
    break;

  case 40: /* $@6: %empty  */
#line 169 "compilador.y"
        { }
#line 1373 "compilador.tab.c"
    break;

  case 42: /* relacao_exp_simples_vazio: relacao expressao_simples  */
#line 174 "compilador.y"
        { 
		typeVerify(&typesTable, "relacional");
		geraCodigo(NULL, relacaoUsada);
	}
#line 1382 "compilador.tab.c"
    break;

  case 44: /* relacao: IGUAL  */
#line 183 "compilador.y"
              { strcpy(relacaoUsada, "CMIG"); }
#line 1388 "compilador.tab.c"
    break;

  case 45: /* relacao: DIFF  */
#line 184 "compilador.y"
               { strcpy(relacaoUsada, "CMDG"); }
#line 1394 "compilador.tab.c"
    break;

  case 46: /* relacao: MENOR  */
#line 185 "compilador.y"
                { strcpy(relacaoUsada, "CMME"); }
#line 1400 "compilador.tab.c"
    break;

  case 47: /* relacao: MENOR_IGUAL  */
#line 186 "compilador.y"
                      { strcpy(relacaoUsada, "CMEG"); }
#line 1406 "compilador.tab.c"
    break;

  case 48: /* relacao: MAIOR_IGUAL  */
#line 187 "compilador.y"
                      { strcpy(relacaoUsada, "CMAG"); }
#line 1412 "compilador.tab.c"
    break;

  case 49: /* relacao: MAIOR  */
#line 188 "compilador.y"
                { strcpy(relacaoUsada, "CMMA"); }
#line 1418 "compilador.tab.c"
    break;

  case 51: /* mais_menos_vazio: MAIS  */
#line 197 "compilador.y"
             { pureExpression = 0; }
#line 1424 "compilador.tab.c"
    break;

  case 52: /* mais_menos_vazio: MENOS  */
#line 197 "compilador.y"
                                             { pureExpression = 0; }
#line 1430 "compilador.tab.c"
    break;

  case 56: /* $@7: %empty  */
#line 206 "compilador.y"
        { pureExpression = 0; }
#line 1436 "compilador.tab.c"
    break;

  case 57: /* lista_termo: $@7 MAIS termo  */
#line 206 "compilador.y"
                                           { typeVerify(&typesTable, "soma"); geraCodigo(NULL, "SOMA"); }
#line 1442 "compilador.tab.c"
    break;

  case 58: /* $@8: %empty  */
#line 207 "compilador.y"
          { pureExpression = 0; }
#line 1448 "compilador.tab.c"
    break;

  case 59: /* lista_termo: $@8 MENOS termo  */
#line 207 "compilador.y"
                                              { typeVerify(&typesTable, "subtracao"); geraCodigo(NULL, "SUBT"); }
#line 1454 "compilador.tab.c"
    break;

  case 60: /* $@9: %empty  */
#line 208 "compilador.y"
          { pureExpression = 0; }
#line 1460 "compilador.tab.c"
    break;

  case 61: /* lista_termo: $@9 OR termo  */
#line 208 "compilador.y"
                                           { typeVerify(&typesTable, "or"); geraCodigo(NULL, "DISJ"); }
#line 1466 "compilador.tab.c"
    break;

  case 64: /* $@10: %empty  */
#line 218 "compilador.y"
        { pureExpression = 0; }
#line 1472 "compilador.tab.c"
    break;

  case 65: /* lista_fator: $@10 ASTERISCO fator  */
#line 218 "compilador.y"
                                                { typeVerify(&typesTable, "multiplicacao"); geraCodigo(NULL, "MULT"); }
#line 1478 "compilador.tab.c"
    break;

  case 66: /* $@11: %empty  */
#line 219 "compilador.y"
          { pureExpression = 0; }
#line 1484 "compilador.tab.c"
    break;

  case 67: /* lista_fator: $@11 BARRA fator  */
#line 219 "compilador.y"
                                              { typeVerify(&typesTable, "divisao"); geraCodigo(NULL, "DIVI"); }
#line 1490 "compilador.tab.c"
    break;

  case 68: /* $@12: %empty  */
#line 220 "compilador.y"
          { pureExpression = 0; }
#line 1496 "compilador.tab.c"
    break;

  case 69: /* lista_fator: $@12 AND fator  */
#line 220 "compilador.y"
                                            { typeVerify(&typesTable, "and"); geraCodigo(NULL, "CONJ"); }
#line 1502 "compilador.tab.c"
    break;

  case 70: /* fator: variavel  */
#line 227 "compilador.y"
        {
		if(loadedVariable != NULL) {
				strcpy(command, "CRVL ");
				sprintf(varLexDisp, "%d, ", loadedVariable->lexicalLevel);
				strcat(command, varLexDisp);
				sprintf(varLexDisp, "%d", loadedVariable->displacement);
				loadedVariable = NULL;
				strcat(command, varLexDisp);
				geraCodigo(NULL, command);
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
#line 1527 "compilador.tab.c"
    break;

  case 71: /* $@13: %empty  */
#line 248 "compilador.y"
        {
	}
#line 1534 "compilador.tab.c"
    break;

  case 72: /* fator: variavel ABRE_PARENTESES $@13 lista_expressoes FECHA_PARENTESES  */
#line 251 "compilador.y"
        { 
	}
#line 1541 "compilador.tab.c"
    break;

  case 76: /* variavel: IDENT  */
#line 260 "compilador.y"
              {
      
		// If null, looks for left side of atribution
      fprintf(stdout, "DESTINO: %s \n", token);

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
#line 1568 "compilador.tab.c"
    break;

  case 84: /* simbolo_leitura: IDENT  */
#line 301 "compilador.y"
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
#line 1591 "compilador.tab.c"
    break;

  case 86: /* lista_escrita: lista_escrita VIRGULA expressao  */
#line 323 "compilador.y"
                                               { geraCodigo (NULL, "IMPR"); }
#line 1597 "compilador.tab.c"
    break;

  case 87: /* lista_escrita: expressao  */
#line 324 "compilador.y"
            { geraCodigo (NULL, "IMPR"); }
#line 1603 "compilador.tab.c"
    break;

  case 88: /* numero: NUMERO  */
#line 329 "compilador.y"
        {
		pushTypeStack(&typesTable, integer);
		strcpy(command,"CRCT ");
		sprintf(totalVars, "%s", token);
		strcat(command, totalVars);
		geraCodigo(NULL, command); 
	}
#line 1615 "compilador.tab.c"
    break;


#line 1619 "compilador.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 339 "compilador.y"


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
 *  Inicia a Tabela de S�mbolos
 * ------------------------------------------------------------------- */
 	createStack(&symbolsTable);
   createTypeStack(&typesTable);
	lexicalLevel = 0;
	displacement = 0;

   yyin=fp;
   yyparse();

   return 0;
}
