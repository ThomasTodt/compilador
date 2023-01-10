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


#line 97 "compilador.tab.c"

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
  YYSYMBOL_INTEGER = 49,                   /* INTEGER  */
  YYSYMBOL_LOWER_THAN_ELSE = 50,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_NADA = 51,                      /* NADA  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_programa = 53,                  /* programa  */
  YYSYMBOL_54_1 = 54,                      /* $@1  */
  YYSYMBOL_bloco = 55,                     /* bloco  */
  YYSYMBOL_56_2 = 56,                      /* $@2  */
  YYSYMBOL_parte_declara_vars = 57,        /* parte_declara_vars  */
  YYSYMBOL_var = 58,                       /* var  */
  YYSYMBOL_59_3 = 59,                      /* $@3  */
  YYSYMBOL_declara_vars = 60,              /* declara_vars  */
  YYSYMBOL_declara_var = 61,               /* declara_var  */
  YYSYMBOL_62_4 = 62,                      /* $@4  */
  YYSYMBOL_63_5 = 63,                      /* $@5  */
  YYSYMBOL_tipo = 64,                      /* tipo  */
  YYSYMBOL_lista_id_var = 65,              /* lista_id_var  */
  YYSYMBOL_lista_idents = 66,              /* lista_idents  */
  YYSYMBOL_parte_declara_sub_rotinas = 67, /* parte_declara_sub_rotinas  */
  YYSYMBOL_opcoes_sub_rotinas = 68,        /* opcoes_sub_rotinas  */
  YYSYMBOL_declaracao_procedimento = 69,   /* declaracao_procedimento  */
  YYSYMBOL_70_6 = 70,                      /* $@6  */
  YYSYMBOL_71_7 = 71,                      /* $@7  */
  YYSYMBOL_72_8 = 72,                      /* $@8  */
  YYSYMBOL_73_9 = 73,                      /* $@9  */
  YYSYMBOL_parametros_formais_vazio = 74,  /* parametros_formais_vazio  */
  YYSYMBOL_declaracao_funcao = 75,         /* declaracao_funcao  */
  YYSYMBOL_76_10 = 76,                     /* $@10  */
  YYSYMBOL_77_11 = 77,                     /* $@11  */
  YYSYMBOL_78_12 = 78,                     /* $@12  */
  YYSYMBOL_79_13 = 79,                     /* $@13  */
  YYSYMBOL_80_14 = 80,                     /* $@14  */
  YYSYMBOL_tipo_funcao = 81,               /* tipo_funcao  */
  YYSYMBOL_parametros_formais = 82,        /* parametros_formais  */
  YYSYMBOL_83_15 = 83,                     /* $@15  */
  YYSYMBOL_lista_parametros_formais = 84,  /* lista_parametros_formais  */
  YYSYMBOL_85_16 = 85,                     /* $@16  */
  YYSYMBOL_secao_parametros_formais = 86,  /* secao_parametros_formais  */
  YYSYMBOL_87_17 = 87,                     /* $@17  */
  YYSYMBOL_88_18 = 88,                     /* $@18  */
  YYSYMBOL_var_vazio = 89,                 /* var_vazio  */
  YYSYMBOL_comando_composto = 90,          /* comando_composto  */
  YYSYMBOL_comandos = 91,                  /* comandos  */
  YYSYMBOL_comando = 92,                   /* comando  */
  YYSYMBOL_numero_ou_nada = 93,            /* numero_ou_nada  */
  YYSYMBOL_comando_sem_rotulo = 94,        /* comando_sem_rotulo  */
  YYSYMBOL_atribuicao_procedimento = 95,   /* atribuicao_procedimento  */
  YYSYMBOL_atribuicao = 96,                /* atribuicao  */
  YYSYMBOL_97_19 = 97,                     /* $@19  */
  YYSYMBOL_chama_procedimento = 98,        /* chama_procedimento  */
  YYSYMBOL_99_20 = 99,                     /* $@20  */
  YYSYMBOL_100_21 = 100,                   /* $@21  */
  YYSYMBOL_101_22 = 101,                   /* $@22  */
  YYSYMBOL_102_23 = 102,                   /* $@23  */
  YYSYMBOL_lista_expressoes_ou_vazio = 103, /* lista_expressoes_ou_vazio  */
  YYSYMBOL_comando_condicional = 104,      /* comando_condicional  */
  YYSYMBOL_if_then = 105,                  /* if_then  */
  YYSYMBOL_106_24 = 106,                   /* $@24  */
  YYSYMBOL_cond_else = 107,                /* cond_else  */
  YYSYMBOL_comando_repetitivo = 108,       /* comando_repetitivo  */
  YYSYMBOL_109_25 = 109,                   /* $@25  */
  YYSYMBOL_110_26 = 110,                   /* $@26  */
  YYSYMBOL_lista_expressoes = 111,         /* lista_expressoes  */
  YYSYMBOL_expressao = 112,                /* expressao  */
  YYSYMBOL_113_27 = 113,                   /* $@27  */
  YYSYMBOL_relacao_exp_simples_vazio = 114, /* relacao_exp_simples_vazio  */
  YYSYMBOL_relacao = 115,                  /* relacao  */
  YYSYMBOL_expressao_simples = 116,        /* expressao_simples  */
  YYSYMBOL_mais_menos_vazio = 117,         /* mais_menos_vazio  */
  YYSYMBOL_expressao_lista_termo = 118,    /* expressao_lista_termo  */
  YYSYMBOL_lista_termo = 119,              /* lista_termo  */
  YYSYMBOL_120_28 = 120,                   /* $@28  */
  YYSYMBOL_121_29 = 121,                   /* $@29  */
  YYSYMBOL_122_30 = 122,                   /* $@30  */
  YYSYMBOL_termo = 123,                    /* termo  */
  YYSYMBOL_lista_fator = 124,              /* lista_fator  */
  YYSYMBOL_125_31 = 125,                   /* $@31  */
  YYSYMBOL_126_32 = 126,                   /* $@32  */
  YYSYMBOL_127_33 = 127,                   /* $@33  */
  YYSYMBOL_fator = 128,                    /* fator  */
  YYSYMBOL_129_34 = 129,                   /* $@34  */
  YYSYMBOL_variavel = 130,                 /* variavel  */
  YYSYMBOL_desvio = 131,                   /* desvio  */
  YYSYMBOL_leitura = 132,                  /* leitura  */
  YYSYMBOL_lista_leitura = 133,            /* lista_leitura  */
  YYSYMBOL_simbolo_leitura = 134,          /* simbolo_leitura  */
  YYSYMBOL_escrita = 135,                  /* escrita  */
  YYSYMBOL_lista_escrita = 136,            /* lista_escrita  */
  YYSYMBOL_numero = 137                    /* numero  */
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
#define YYLAST   144

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  197

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    50,    68,    66,    79,    88,    88,    89,
      93,    94,    97,   102,    97,   109,   110,   114,   121,   130,
     131,   136,   137,   141,   142,   147,   149,   180,   181,   147,
     219,   220,   225,   227,   259,   261,   269,   225,   306,   312,
     312,   322,   323,   323,   328,   328,   328,   332,   332,   336,
     340,   340,   343,   343,   346,   346,   351,   352,   353,   354,
     355,   356,   357,   361,   362,   368,   368,   383,   392,   395,
     383,   402,   402,   420,   421,   426,   436,   435,   465,   471,
     503,   513,   502,   532,   532,   537,   537,   541,   548,   551,
     552,   553,   554,   555,   556,   561,   565,   565,   565,   569,
     570,   574,   574,   575,   575,   576,   576,   581,   582,   586,
     586,   587,   587,   588,   588,   594,   634,   633,   654,   655,
     656,   661,   682,   685,   688,   691,   691,   693,   712,   715,
     716,   720
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
  "IGUAL", "DIFF", "MENOR", "MENOR_IGUAL", "MAIOR", "MAIOR_IGUAL",
  "INTEGER", "LOWER_THAN_ELSE", "NADA", "$accept", "programa", "$@1",
  "bloco", "$@2", "parte_declara_vars", "var", "$@3", "declara_vars",
  "declara_var", "$@4", "$@5", "tipo", "lista_id_var", "lista_idents",
  "parte_declara_sub_rotinas", "opcoes_sub_rotinas",
  "declaracao_procedimento", "$@6", "$@7", "$@8", "$@9",
  "parametros_formais_vazio", "declaracao_funcao", "$@10", "$@11", "$@12",
  "$@13", "$@14", "tipo_funcao", "parametros_formais", "$@15",
  "lista_parametros_formais", "$@16", "secao_parametros_formais", "$@17",
  "$@18", "var_vazio", "comando_composto", "comandos", "comando",
  "numero_ou_nada", "comando_sem_rotulo", "atribuicao_procedimento",
  "atribuicao", "$@19", "chama_procedimento", "$@20", "$@21", "$@22",
  "$@23", "lista_expressoes_ou_vazio", "comando_condicional", "if_then",
  "$@24", "cond_else", "comando_repetitivo", "$@25", "$@26",
  "lista_expressoes", "expressao", "$@27", "relacao_exp_simples_vazio",
  "relacao", "expressao_simples", "mais_menos_vazio",
  "expressao_lista_termo", "lista_termo", "$@28", "$@29", "$@30", "termo",
  "lista_fator", "$@31", "$@32", "$@33", "fator", "$@34", "variavel",
  "desvio", "leitura", "lista_leitura", "simbolo_leitura", "escrita",
  "lista_escrita", "numero", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-150)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-114)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -150,    30,    11,  -150,    20,    31,    27,  -150,    60,    48,
      67,    70,  -150,    72,  -150,  -150,    71,  -150,    47,  -150,
    -150,  -150,    74,  -150,    78,    79,    76,  -150,    77,    80,
      81,    -1,  -150,  -150,  -150,  -150,  -150,     9,  -150,  -150,
    -150,    83,    87,    88,  -150,  -150,  -150,    36,  -150,  -150,
    -150,  -150,    64,  -150,     7,  -150,  -150,  -150,    89,    85,
      -7,  -150,  -150,    86,  -150,  -150,    92,    -1,  -150,    24,
    -150,  -150,  -150,    90,  -150,    96,  -150,  -150,  -150,  -150,
    -150,  -150,    97,    97,  -150,    69,  -150,  -150,    38,    73,
      98,  -150,  -150,  -150,  -150,  -150,    95,  -150,    99,  -150,
     100,  -150,    86,  -150,  -150,    14,     3,  -150,  -150,  -150,
     104,  -150,   105,  -150,  -150,  -150,    56,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,    38,  -150,     3,    29,   -22,
    -150,   107,  -150,  -150,    82,  -150,   108,  -150,   109,    15,
    -150,    70,  -150,  -150,  -150,   111,  -150,  -150,    84,    75,
      93,  -150,    91,    94,   101,  -150,    24,   106,  -150,  -150,
    -150,  -150,  -150,   112,  -150,   110,  -150,     3,     3,     3,
       3,     3,     3,  -150,  -150,    24,  -150,  -150,  -150,  -150,
    -150,  -150,   -22,   -22,   -22,  -150,  -150,  -150,   113,  -150,
      27,    70,  -150,    17,  -150,    -7,  -150
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,    20,     0,     0,
       0,     9,    19,     0,    22,     6,     0,     3,     4,    12,
      25,    32,   123,    21,     0,     0,     8,    11,     0,     0,
       0,    55,     5,    23,    24,    10,    18,     0,    26,    33,
     121,     0,     0,     0,    80,   131,    58,     0,    51,    53,
      52,    59,    79,    60,    71,    57,    61,    62,     0,     0,
       0,    27,    34,     0,    85,    85,     0,    55,    49,   122,
      75,    56,    63,     0,    64,     0,    72,    54,    17,    16,
      15,    13,    31,    31,   127,     0,   126,   130,    98,     0,
       0,    85,    50,    78,    85,    68,     0,    39,     0,    30,
       0,   124,     0,    96,    97,    88,     0,   128,    85,    76,
       0,    66,    85,    14,    42,    28,     0,   125,    89,    90,
      91,    92,    94,    93,    86,    98,    85,     0,    95,   100,
     108,   115,   118,   129,     0,    81,     0,    73,    83,     0,
      44,     9,    38,    35,    87,     0,   120,    99,     0,     0,
       0,   107,     0,     0,     0,   116,   122,     0,    69,    85,
      40,    44,    43,    48,    29,     0,   119,     0,     0,     0,
       0,     0,     0,    85,    77,   122,    70,    84,    41,    47,
      45,    36,   102,   104,   106,   110,   112,   114,     0,    82,
       0,     9,   117,     0,    37,     0,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -150,  -137,  -150,  -150,  -150,  -150,  -150,   102,
    -150,  -150,   -76,  -150,   -70,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,    40,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,   -40,  -150,  -150,  -150,   115,  -150,
      59,  -150,   -68,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -149,
     -62,  -150,  -150,  -150,     4,  -150,  -150,  -150,  -150,  -150,
    -150,   -98,  -150,  -150,  -150,  -150,  -122,  -150,   -31,  -150,
    -150,  -150,    28,  -150,  -150,   -23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    13,    22,    14,    15,    16,    26,    27,
      28,    96,    81,    37,     8,    18,    23,    24,    29,    61,
      82,   141,    98,    25,    30,    62,    83,   165,   191,   143,
      99,   114,   139,   140,   162,   163,   190,   180,    46,    47,
      48,    49,    50,    71,    72,    73,    74,    75,   112,   176,
      76,   136,    51,    52,   134,    70,    53,    66,   157,   137,
     138,    88,   124,   125,   105,   106,   128,   147,   148,   149,
     150,   129,   151,   152,   153,   154,   130,   173,   131,    55,
      56,    85,    86,    57,    89,   132
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    93,    87,    90,   164,   146,    79,   126,    58,    31,
     177,   -67,    40,  -113,     4,    59,    40,    60,  -109,  -111,
     160,   -65,   161,    10,   188,   195,    41,    42,    43,   110,
       3,    44,   111,     5,    31,     6,    54,    40,    54,   127,
       7,    45,    80,    67,    58,    45,   133,    68,   185,   186,
     187,    41,    42,    43,   194,    11,    44,   118,   119,   120,
     121,   122,   123,  -105,   145,     9,    10,  -101,  -103,   182,
     183,   184,    20,    21,   101,   102,   103,   104,   107,   108,
      12,    17,    -7,    19,    31,    33,    34,    63,   174,   -12,
      36,    64,    65,    38,    39,    69,    91,    77,    78,    84,
      95,    97,   113,   109,    94,   142,   115,   189,   116,   135,
     -74,   155,   156,   158,   168,   159,   166,   181,   192,   196,
     193,   178,   167,   100,   179,    54,    92,   169,    35,   144,
     117,   170,     0,     0,     0,   171,   172,    32,     0,   175,
       0,     0,     0,     0,    54
};

static const yytype_int16 yycheck[] =
{
      31,    69,    64,    65,   141,   127,    13,     4,    31,    10,
     159,     4,    13,    35,     3,     6,    13,     8,    40,    41,
       5,    14,     7,     6,   173,     8,    27,    28,    29,    91,
       0,    32,    94,    13,    10,     4,    67,    13,    69,    36,
      13,    42,    49,     7,    67,    42,   108,    11,   170,   171,
     172,    27,    28,    29,   191,     7,    32,    43,    44,    45,
      46,    47,    48,    34,   126,     5,     6,    38,    39,   167,
     168,   169,    25,    26,     5,     6,    38,    39,     5,     6,
      13,     9,    12,    12,    10,     7,     7,     4,   156,    13,
      13,     4,     4,    13,    13,    31,     4,     8,    13,    13,
       4,     4,     7,     5,    14,    49,     7,   175,     8,     5,
       5,     4,    30,     5,    39,     6,     5,     7,     5,   195,
     190,   161,    38,    83,    12,   156,    67,    34,    26,   125,
     102,    40,    -1,    -1,    -1,    41,    35,    22,    -1,    33,
      -1,    -1,    -1,    -1,   175
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    54,     0,     3,    13,     4,    13,    66,     5,
       6,     7,    13,    55,    57,    58,    59,     9,    67,    12,
      25,    26,    56,    68,    69,    75,    60,    61,    62,    70,
      76,    10,    90,     7,     7,    61,    13,    65,    13,    13,
      13,    27,    28,    29,    32,    42,    90,    91,    92,    93,
      94,   104,   105,   108,   130,   131,   132,   135,   137,     6,
       8,    71,    77,     4,     4,     4,   109,     7,    11,    31,
     107,    95,    96,    97,    98,    99,   102,     8,    13,    13,
      49,    64,    72,    78,    13,   133,   134,   112,   113,   136,
     112,     4,    92,    94,    14,     4,    63,     4,    74,    82,
      74,     5,     6,    38,    39,   116,   117,     5,     6,     5,
     112,   112,   100,     7,    83,     7,     8,   134,    43,    44,
      45,    46,    47,    48,   114,   115,     4,    36,   118,   123,
     128,   130,   137,   112,   106,     5,   103,   111,   112,    84,
      85,    73,    49,    81,   116,   112,   128,   119,   120,   121,
     122,   124,   125,   126,   127,     4,    30,   110,     5,     6,
       5,     7,    86,    87,    55,    79,     5,    38,    39,    34,
      40,    41,    35,   129,    94,    33,   101,   111,    86,    12,
      89,     7,   123,   123,   123,   128,   128,   128,   111,    94,
      88,    80,     5,    66,    55,     8,    64
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    54,    53,    56,    55,    57,    59,    58,    58,
      60,    60,    62,    63,    61,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    68,    70,    71,    72,    73,    69,
      74,    74,    76,    77,    78,    79,    80,    75,    81,    83,
      82,    84,    85,    84,    87,    88,    86,    89,    89,    90,
      91,    91,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    95,    95,    97,    96,    99,   100,   101,
      98,   102,    98,   103,   103,   104,   106,   105,   107,   107,
     109,   110,   108,   111,   111,   113,   112,   114,   114,   115,
     115,   115,   115,   115,   115,   116,   117,   117,   117,   118,
     118,   120,   119,   121,   119,   122,   119,   123,   123,   125,
     124,   126,   124,   127,   124,   128,   129,   128,   128,   128,
     128,   130,   131,    90,   132,   133,   133,   134,   135,   136,
     136,   137
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     0,     4,     1,     0,     3,     0,
       2,     1,     0,     0,     6,     1,     1,     3,     1,     3,
       1,     2,     0,     2,     2,     0,     0,     0,     0,     9,
       1,     0,     0,     0,     0,     0,     0,    12,     1,     0,
       4,     3,     0,     2,     0,     0,     6,     1,     0,     3,
       3,     1,     1,     1,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     0,     0,
       6,     0,     1,     1,     0,     2,     0,     7,     2,     0,
       0,     0,     8,     1,     3,     0,     3,     2,     0,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     0,     2,
       1,     0,     3,     0,     3,     0,     3,     2,     1,     0,
       3,     0,     3,     0,     3,     1,     0,     5,     1,     3,
       2,     1,     0,     0,     4,     3,     1,     1,     4,     3,
       1,     1
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
#line 50 "compilador.y"
             {
               geraCodigo (NULL, "INPP");
             }
#line 1379 "compilador.tab.c"
    break;

  case 3: /* programa: $@1 PROGRAM IDENT ABRE_PARENTESES lista_idents FECHA_PARENTESES PONTO_E_VIRGULA bloco PONTO  */
#line 55 "compilador.y"
                         {
               strcpy(command,"DMEM ");
               sprintf(totalVars, "%d", num_vars);
               strcat(command, totalVars);
               geraCodigo(NULL, command);
               geraCodigo (NULL, "PARA");
             }
#line 1391 "compilador.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 68 "compilador.y"
                  {
                     if(declaredProcedures > 0 && lexicalLevel == 0) {
                        int rot1 = topTagsStack(&tagsTable);
                        sprintf(command, "R%d", rot1);
                        geraCodigo(command, "NADA");
                     }
                  }
#line 1403 "compilador.tab.c"
    break;

  case 6: /* parte_declara_vars: var  */
#line 79 "compilador.y"
                        {
      strcpy(command,"AMEM ");
		sprintf(totalVars, "%d", num_vars);
		strcat(command, totalVars);
		geraCodigo(NULL, command); 
}
#line 1414 "compilador.tab.c"
    break;

  case 7: /* $@3: %empty  */
#line 88 "compilador.y"
              { }
#line 1420 "compilador.tab.c"
    break;

  case 12: /* $@4: %empty  */
#line 97 "compilador.y"
              {
               nova_var = 0;
            }
#line 1428 "compilador.tab.c"
    break;

  case 13: /* $@5: %empty  */
#line 102 "compilador.y"
              { /* AMEM */
               num_vars += nova_var;
              }
#line 1436 "compilador.tab.c"
    break;

  case 15: /* tipo: INTEGER  */
#line 109 "compilador.y"
                { setTypes(&symbolsTable, integer, nova_var); }
#line 1442 "compilador.tab.c"
    break;

  case 17: /* lista_id_var: lista_id_var VIRGULA IDENT  */
#line 115 "compilador.y"
              {
      nova_var++;
		newInput = createSimpleVarInput(token, lexicalLevel, displacement);
		push(&symbolsTable, newInput);
		displacement++;
      }
#line 1453 "compilador.tab.c"
    break;

  case 18: /* lista_id_var: IDENT  */
#line 121 "compilador.y"
                    { 
      nova_var++;
		newInput = createSimpleVarInput(token, lexicalLevel, displacement);
		push(&symbolsTable, newInput);
		displacement++;
      }
#line 1464 "compilador.tab.c"
    break;

  case 25: /* $@6: %empty  */
#line 147 "compilador.y"
                  { isSubRoutine = 1; }
#line 1470 "compilador.tab.c"
    break;

  case 26: /* $@7: %empty  */
#line 149 "compilador.y"
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
#line 1506 "compilador.tab.c"
    break;

  case 27: /* $@8: %empty  */
#line 180 "compilador.y"
        { newParams = 0; }
#line 1512 "compilador.tab.c"
    break;

  case 28: /* $@9: %empty  */
#line 181 "compilador.y"
        {
		// Zera para ser utilizado na subrotina
		// Mas salva valor para ser recuperado
		oldVars = num_vars;
		num_vars = 0;
		displacement = 0;
	}
#line 1524 "compilador.tab.c"
    break;

  case 29: /* declaracao_procedimento: PROCEDURE $@6 IDENT $@7 $@8 parametros_formais_vazio PONTO_E_VIRGULA $@9 bloco  */
#line 189 "compilador.y"
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
#line 1556 "compilador.tab.c"
    break;

  case 32: /* $@10: %empty  */
#line 225 "compilador.y"
             { isSubRoutine = 1; }
#line 1562 "compilador.tab.c"
    break;

  case 33: /* $@11: %empty  */
#line 227 "compilador.y"
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
#line 1599 "compilador.tab.c"
    break;

  case 34: /* $@12: %empty  */
#line 259 "compilador.y"
        { newParams = 0; }
#line 1605 "compilador.tab.c"
    break;

  case 35: /* $@13: %empty  */
#line 261 "compilador.y"
        {
		// Updates paramters and return type
		newInput = search(&symbolsTable, functionIdentifier);
		newInput->numParams = newParams;
		newInput->type = returnType;
		newInput->displacement = -4 - newParams;
	}
#line 1617 "compilador.tab.c"
    break;

  case 36: /* $@14: %empty  */
#line 269 "compilador.y"
        {
		// Zera para ser utilizado na subrotina
		// Mas salva valor para ser recuperado
		oldVars = num_vars;
		num_vars = 0;
		displacement = 0;
	}
#line 1629 "compilador.tab.c"
    break;

  case 37: /* declaracao_funcao: FUNCTION $@10 IDENT $@11 $@12 parametros_formais_vazio DOIS_PONTOS tipo_funcao $@13 PONTO_E_VIRGULA $@14 bloco  */
#line 277 "compilador.y"
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
#line 1660 "compilador.tab.c"
    break;

  case 38: /* tipo_funcao: INTEGER  */
#line 306 "compilador.y"
                { returnType = integer; }
#line 1666 "compilador.tab.c"
    break;

  case 39: /* $@15: %empty  */
#line 312 "compilador.y"
                        { num_parameter = 0; }
#line 1672 "compilador.tab.c"
    break;

  case 40: /* parametros_formais: ABRE_PARENTESES $@15 lista_parametros_formais FECHA_PARENTESES  */
#line 315 "compilador.y"
        {
		updateParams(getNth(&symbolsTable, num_parameter + 1),
								&symbolsTable, num_parameter);
	}
#line 1681 "compilador.tab.c"
    break;

  case 42: /* $@16: %empty  */
#line 323 "compilador.y"
          { newParams++; }
#line 1687 "compilador.tab.c"
    break;

  case 44: /* $@17: %empty  */
#line 328 "compilador.y"
        { num_parameter++; }
#line 1693 "compilador.tab.c"
    break;

  case 45: /* $@18: %empty  */
#line 328 "compilador.y"
                                       { nova_var = 0; }
#line 1699 "compilador.tab.c"
    break;

  case 47: /* var_vazio: VAR  */
#line 332 "compilador.y"
            { receivingByReference = 1; }
#line 1705 "compilador.tab.c"
    break;

  case 65: /* $@19: %empty  */
#line 368 "compilador.y"
   {}
#line 1711 "compilador.tab.c"
    break;

  case 66: /* atribuicao: $@19 ATRIBUICAO expressao  */
#line 370 "compilador.y"
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
#line 1726 "compilador.tab.c"
    break;

  case 67: /* $@20: %empty  */
#line 383 "compilador.y"
    {
		insideProcedure = 1;
		// Imprime rotulo de entrada da subrotina
		currentProcedure = destinyVariable;
		strcpy(callProcedure, "CHPR ");
		strcat(callProcedure, destinyVariable->label);
		sprintf(varLexDisp, ",%d", lexicalLevel);
		strcat(callProcedure, varLexDisp);
   	}
#line 1740 "compilador.tab.c"
    break;

  case 68: /* $@21: %empty  */
#line 392 "compilador.y"
                        {  receivingFormalParams = 1; newParams = 0; }
#line 1746 "compilador.tab.c"
    break;

  case 69: /* $@22: %empty  */
#line 395 "compilador.y"
        { 
		insideProcedure = 0;
		geraCodigo(NULL, callProcedure); 
		receivingFormalParams = 0;
	}
#line 1756 "compilador.tab.c"
    break;

  case 70: /* chama_procedimento: $@20 ABRE_PARENTESES $@21 lista_expressoes_ou_vazio FECHA_PARENTESES $@22  */
#line 400 "compilador.y"
        { destinyVariable = NULL; }
#line 1762 "compilador.tab.c"
    break;

  case 71: /* $@23: %empty  */
#line 402 "compilador.y"
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
#line 1778 "compilador.tab.c"
    break;

  case 72: /* chama_procedimento: $@23  */
#line 413 "compilador.y"
        { 
		insideProcedure = 0;
    	geraCodigo(NULL, callProcedure); 
	}
#line 1787 "compilador.tab.c"
    break;

  case 75: /* comando_condicional: if_then cond_else  */
#line 427 "compilador.y"
      {
         int rot1 = popTagsStack(&tagsTable);
         sprintf(command, "R%d", rot1);
         geraCodigo(command, "NADA");
      }
#line 1797 "compilador.tab.c"
    break;

  case 76: /* $@24: %empty  */
#line 436 "compilador.y"
      {
         sprintf(command, "DSVF R%d", rotulo);
         geraCodigo(NULL, command);

         pushTagsStack(&tagsTable, rotulo+1);
         pushTagsStack(&tagsTable, rotulo);
         pushTagsStack(&tagsTable, rotulo+1);
         rotulo += 2;
      }
#line 1811 "compilador.tab.c"
    break;

  case 77: /* if_then: IF ABRE_PARENTESES expressao FECHA_PARENTESES $@24 THEN comando_sem_rotulo  */
#line 446 "compilador.y"
      {
         int rot1 = popTagsStack(&tagsTable);
         sprintf(command, "DSVS R%d", rot1);
         geraCodigo(NULL, command);

         int rot0 = popTagsStack(&tagsTable);
         sprintf(command, "R%d", rot0);
         geraCodigo(command, "NADA");

      }
#line 1826 "compilador.tab.c"
    break;

  case 78: /* cond_else: ELSE comando_sem_rotulo  */
#line 466 "compilador.y"
         {
            int rot1 = popTagsStack(&tagsTable);
            sprintf(command, "R%d", rot1);
            geraCodigo(command, "NADA");
         }
#line 1836 "compilador.tab.c"
    break;

  case 80: /* $@25: %empty  */
#line 503 "compilador.y"
      {
         sprintf(command, "R%d", rotulo);

         pushTagsStack(&tagsTable, rotulo);
         pushTagsStack(&tagsTable, rotulo+1);
         rotulo += 2;

         geraCodigo(command, "NADA");  
      }
#line 1850 "compilador.tab.c"
    break;

  case 81: /* $@26: %empty  */
#line 513 "compilador.y"
      {
         int rot1 = topTagsStack(&tagsTable);
         sprintf(command, "DSVF R%d", rot1);
         geraCodigo(NULL, command);
      }
#line 1860 "compilador.tab.c"
    break;

  case 82: /* comando_repetitivo: WHILE $@25 ABRE_PARENTESES expressao FECHA_PARENTESES $@26 DO comando_sem_rotulo  */
#line 519 "compilador.y"
      {
         int rot1 = popTagsStack(&tagsTable);
         int rot0 = popTagsStack(&tagsTable);

         sprintf(command, "DSVS R%d", rot0);
         geraCodigo(NULL, command);

         sprintf(command, "R%d", rot1);
         geraCodigo(command, "NADA");
      }
#line 1875 "compilador.tab.c"
    break;

  case 85: /* $@27: %empty  */
#line 537 "compilador.y"
        { }
#line 1881 "compilador.tab.c"
    break;

  case 87: /* relacao_exp_simples_vazio: relacao expressao_simples  */
#line 542 "compilador.y"
        { 
		typeVerify(&typesTable, "relacional");
		geraCodigo(NULL, relacaoUsada);
	}
#line 1890 "compilador.tab.c"
    break;

  case 89: /* relacao: IGUAL  */
#line 551 "compilador.y"
              { strcpy(relacaoUsada, "CMIG"); }
#line 1896 "compilador.tab.c"
    break;

  case 90: /* relacao: DIFF  */
#line 552 "compilador.y"
               { strcpy(relacaoUsada, "CMDG"); }
#line 1902 "compilador.tab.c"
    break;

  case 91: /* relacao: MENOR  */
#line 553 "compilador.y"
                { strcpy(relacaoUsada, "CMME"); }
#line 1908 "compilador.tab.c"
    break;

  case 92: /* relacao: MENOR_IGUAL  */
#line 554 "compilador.y"
                      { strcpy(relacaoUsada, "CMEG"); }
#line 1914 "compilador.tab.c"
    break;

  case 93: /* relacao: MAIOR_IGUAL  */
#line 555 "compilador.y"
                      { strcpy(relacaoUsada, "CMAG"); }
#line 1920 "compilador.tab.c"
    break;

  case 94: /* relacao: MAIOR  */
#line 556 "compilador.y"
                { strcpy(relacaoUsada, "CMMA"); }
#line 1926 "compilador.tab.c"
    break;

  case 96: /* mais_menos_vazio: MAIS  */
#line 565 "compilador.y"
             { pureExpression = 0; }
#line 1932 "compilador.tab.c"
    break;

  case 97: /* mais_menos_vazio: MENOS  */
#line 565 "compilador.y"
                                             { pureExpression = 0; }
#line 1938 "compilador.tab.c"
    break;

  case 101: /* $@28: %empty  */
#line 574 "compilador.y"
        { pureExpression = 0; }
#line 1944 "compilador.tab.c"
    break;

  case 102: /* lista_termo: $@28 MAIS termo  */
#line 574 "compilador.y"
                                           { typeVerify(&typesTable, "soma"); geraCodigo(NULL, "SOMA"); }
#line 1950 "compilador.tab.c"
    break;

  case 103: /* $@29: %empty  */
#line 575 "compilador.y"
          { pureExpression = 0; }
#line 1956 "compilador.tab.c"
    break;

  case 104: /* lista_termo: $@29 MENOS termo  */
#line 575 "compilador.y"
                                              { typeVerify(&typesTable, "subtracao"); geraCodigo(NULL, "SUBT"); }
#line 1962 "compilador.tab.c"
    break;

  case 105: /* $@30: %empty  */
#line 576 "compilador.y"
          { pureExpression = 0; }
#line 1968 "compilador.tab.c"
    break;

  case 106: /* lista_termo: $@30 OR termo  */
#line 576 "compilador.y"
                                           { typeVerify(&typesTable, "or"); geraCodigo(NULL, "DISJ"); }
#line 1974 "compilador.tab.c"
    break;

  case 109: /* $@31: %empty  */
#line 586 "compilador.y"
        { pureExpression = 0; }
#line 1980 "compilador.tab.c"
    break;

  case 110: /* lista_fator: $@31 ASTERISCO fator  */
#line 586 "compilador.y"
                                                { typeVerify(&typesTable, "multiplicacao"); geraCodigo(NULL, "MULT"); }
#line 1986 "compilador.tab.c"
    break;

  case 111: /* $@32: %empty  */
#line 587 "compilador.y"
          { pureExpression = 0; }
#line 1992 "compilador.tab.c"
    break;

  case 112: /* lista_fator: $@32 BARRA fator  */
#line 587 "compilador.y"
                                              { typeVerify(&typesTable, "divisao"); geraCodigo(NULL, "DIVI"); }
#line 1998 "compilador.tab.c"
    break;

  case 113: /* $@33: %empty  */
#line 588 "compilador.y"
          { pureExpression = 0; }
#line 2004 "compilador.tab.c"
    break;

  case 114: /* lista_fator: $@33 AND fator  */
#line 588 "compilador.y"
                                            { typeVerify(&typesTable, "and"); geraCodigo(NULL, "CONJ"); }
#line 2010 "compilador.tab.c"
    break;

  case 115: /* fator: variavel  */
#line 595 "compilador.y"
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
#line 2053 "compilador.tab.c"
    break;

  case 116: /* $@34: %empty  */
#line 634 "compilador.y"
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
#line 2070 "compilador.tab.c"
    break;

  case 117: /* fator: variavel ABRE_PARENTESES $@34 lista_expressoes FECHA_PARENTESES  */
#line 647 "compilador.y"
        { 
		strcpy(callProcedure, "CHPR ");
		strcat(callProcedure, currentProcedure->label);
		sprintf(varLexDisp, ",%d", lexicalLevel);
		strcat(callProcedure, varLexDisp);
		geraCodigo(NULL, callProcedure);
	}
#line 2082 "compilador.tab.c"
    break;

  case 121: /* variavel: IDENT  */
#line 661 "compilador.y"
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
#line 2106 "compilador.tab.c"
    break;

  case 127: /* simbolo_leitura: IDENT  */
#line 693 "compilador.y"
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
#line 2129 "compilador.tab.c"
    break;

  case 129: /* lista_escrita: lista_escrita VIRGULA expressao  */
#line 715 "compilador.y"
                                               { geraCodigo (NULL, "IMPR"); }
#line 2135 "compilador.tab.c"
    break;

  case 130: /* lista_escrita: expressao  */
#line 716 "compilador.y"
            { geraCodigo (NULL, "IMPR"); }
#line 2141 "compilador.tab.c"
    break;

  case 131: /* numero: NUMERO  */
#line 721 "compilador.y"
        {
		pushTypeStack(&typesTable, integer);
		strcpy(command,"CRCT ");
		sprintf(totalVars, "%s", token);
		strcat(command, totalVars);
		geraCodigo(NULL, command); 
	}
#line 2153 "compilador.tab.c"
    break;


#line 2157 "compilador.tab.c"

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

#line 731 "compilador.y"


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
