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
int pureExpression, newParams, oldVars, num_parameter,insideProcedure;
int isSubRoutine, receivingByReference, receivingFormalParams;
char totalVars[16], command[20], varLexDisp[12], relacaoUsada[5], callProcedure[20];
char labelSubroutineEnd[10], labelSubroutineStart[10] ;
char functionIdentifier[30];
int declaredProcedures = 0;
pascalType returnType;

stackNode *newInput, *destinyVariable, *loadedVariable, *currentProcedure;
symbolsStack symbolsTable;
typesStack typesTable;
tagsStack tagsTable;


#line 98 "compilador.tab.c"

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
  YYSYMBOL_programa_header = 53,           /* programa_header  */
  YYSYMBOL_inicia = 54,                    /* inicia  */
  YYSYMBOL_programa = 55,                  /* programa  */
  YYSYMBOL_bloco = 56,                     /* bloco  */
  YYSYMBOL_57_1 = 57,                      /* $@1  */
  YYSYMBOL_parte_declara_vars = 58,        /* parte_declara_vars  */
  YYSYMBOL_var = 59,                       /* var  */
  YYSYMBOL_60_2 = 60,                      /* $@2  */
  YYSYMBOL_declara_vars = 61,              /* declara_vars  */
  YYSYMBOL_declara_var = 62,               /* declara_var  */
  YYSYMBOL_63_3 = 63,                      /* $@3  */
  YYSYMBOL_64_4 = 64,                      /* $@4  */
  YYSYMBOL_tipo = 65,                      /* tipo  */
  YYSYMBOL_lista_id_var = 66,              /* lista_id_var  */
  YYSYMBOL_lista_idents = 67,              /* lista_idents  */
  YYSYMBOL_parte_declara_sub_rotinas = 68, /* parte_declara_sub_rotinas  */
  YYSYMBOL_opcoes_sub_rotinas = 69,        /* opcoes_sub_rotinas  */
  YYSYMBOL_declaracao_procedimento = 70,   /* declaracao_procedimento  */
  YYSYMBOL_71_5 = 71,                      /* $@5  */
  YYSYMBOL_72_6 = 72,                      /* $@6  */
  YYSYMBOL_73_7 = 73,                      /* $@7  */
  YYSYMBOL_74_8 = 74,                      /* $@8  */
  YYSYMBOL_parametros_formais_vazio = 75,  /* parametros_formais_vazio  */
  YYSYMBOL_declaracao_funcao = 76,         /* declaracao_funcao  */
  YYSYMBOL_77_9 = 77,                      /* $@9  */
  YYSYMBOL_78_10 = 78,                     /* $@10  */
  YYSYMBOL_79_11 = 79,                     /* $@11  */
  YYSYMBOL_80_12 = 80,                     /* $@12  */
  YYSYMBOL_81_13 = 81,                     /* $@13  */
  YYSYMBOL_tipo_funcao = 82,               /* tipo_funcao  */
  YYSYMBOL_parametros_formais = 83,        /* parametros_formais  */
  YYSYMBOL_84_14 = 84,                     /* $@14  */
  YYSYMBOL_lista_parametros_formais = 85,  /* lista_parametros_formais  */
  YYSYMBOL_86_15 = 86,                     /* $@15  */
  YYSYMBOL_secao_parametros_formais = 87,  /* secao_parametros_formais  */
  YYSYMBOL_88_16 = 88,                     /* $@16  */
  YYSYMBOL_89_17 = 89,                     /* $@17  */
  YYSYMBOL_var_vazio = 90,                 /* var_vazio  */
  YYSYMBOL_comando_composto = 91,          /* comando_composto  */
  YYSYMBOL_comandos = 92,                  /* comandos  */
  YYSYMBOL_comando = 93,                   /* comando  */
  YYSYMBOL_numero_ou_nada = 94,            /* numero_ou_nada  */
  YYSYMBOL_comando_sem_rotulo = 95,        /* comando_sem_rotulo  */
  YYSYMBOL_atribuicao_procedimento = 96,   /* atribuicao_procedimento  */
  YYSYMBOL_atribuicao = 97,                /* atribuicao  */
  YYSYMBOL_98_18 = 98,                     /* $@18  */
  YYSYMBOL_chama_procedimento = 99,        /* chama_procedimento  */
  YYSYMBOL_100_19 = 100,                   /* $@19  */
  YYSYMBOL_101_20 = 101,                   /* $@20  */
  YYSYMBOL_102_21 = 102,                   /* $@21  */
  YYSYMBOL_103_22 = 103,                   /* $@22  */
  YYSYMBOL_lista_expressoes_ou_vazio = 104, /* lista_expressoes_ou_vazio  */
  YYSYMBOL_comando_condicional = 105,      /* comando_condicional  */
  YYSYMBOL_106_23 = 106,                   /* $@23  */
  YYSYMBOL_cond_else = 107,                /* cond_else  */
  YYSYMBOL_108_24 = 108,                   /* $@24  */
  YYSYMBOL_109_25 = 109,                   /* $@25  */
  YYSYMBOL_comando_repetitivo = 110,       /* comando_repetitivo  */
  YYSYMBOL_111_26 = 111,                   /* $@26  */
  YYSYMBOL_112_27 = 112,                   /* $@27  */
  YYSYMBOL_lista_expressoes = 113,         /* lista_expressoes  */
  YYSYMBOL_expressao = 114,                /* expressao  */
  YYSYMBOL_115_28 = 115,                   /* $@28  */
  YYSYMBOL_relacao_exp_simples_vazio = 116, /* relacao_exp_simples_vazio  */
  YYSYMBOL_relacao = 117,                  /* relacao  */
  YYSYMBOL_expressao_simples = 118,        /* expressao_simples  */
  YYSYMBOL_mais_menos_vazio = 119,         /* mais_menos_vazio  */
  YYSYMBOL_expressao_lista_termo = 120,    /* expressao_lista_termo  */
  YYSYMBOL_lista_termo = 121,              /* lista_termo  */
  YYSYMBOL_122_29 = 122,                   /* $@29  */
  YYSYMBOL_123_30 = 123,                   /* $@30  */
  YYSYMBOL_124_31 = 124,                   /* $@31  */
  YYSYMBOL_termo = 125,                    /* termo  */
  YYSYMBOL_lista_fator = 126,              /* lista_fator  */
  YYSYMBOL_127_32 = 127,                   /* $@32  */
  YYSYMBOL_128_33 = 128,                   /* $@33  */
  YYSYMBOL_129_34 = 129,                   /* $@34  */
  YYSYMBOL_fator = 130,                    /* fator  */
  YYSYMBOL_131_35 = 131,                   /* $@35  */
  YYSYMBOL_variavel = 132,                 /* variavel  */
  YYSYMBOL_desvio = 133,                   /* desvio  */
  YYSYMBOL_leitura = 134,                  /* leitura  */
  YYSYMBOL_lista_leitura = 135,            /* lista_leitura  */
  YYSYMBOL_simbolo_leitura = 136,          /* simbolo_leitura  */
  YYSYMBOL_escrita = 137,                  /* escrita  */
  YYSYMBOL_lista_escrita = 138,            /* lista_escrita  */
  YYSYMBOL_numero = 139                    /* numero  */
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
#define YYLAST   162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

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
       0,    53,    53,    57,    62,    68,    81,    79,    92,   101,
     101,   102,   106,   107,   110,   115,   110,   122,   123,   127,
     134,   144,   150,   161,   162,   166,   167,   172,   174,   207,
     208,   172,   250,   251,   256,   258,   292,   294,   302,   256,
     339,   345,   345,   355,   356,   356,   361,   361,   361,   365,
     365,   369,   373,   373,   376,   379,   379,   384,   385,   386,
     387,   388,   389,   390,   394,   395,   401,   401,   419,   428,
     431,   419,   438,   438,   456,   457,   502,   501,   516,   522,
     516,   533,   573,   583,   572,   602,   602,   606,   606,   610,
     617,   620,   621,   622,   623,   624,   625,   630,   634,   634,
     634,   638,   639,   643,   643,   644,   644,   645,   645,   650,
     651,   655,   655,   656,   656,   657,   657,   663,   728,   727,
     748,   749,   750,   755,   776,   779,   782,   785,   785,   787,
     806,   809,   810,   814
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
  "INTEGER", "LOWER_THAN_ELSE", "NADA", "$accept", "programa_header",
  "inicia", "programa", "bloco", "$@1", "parte_declara_vars", "var", "$@2",
  "declara_vars", "declara_var", "$@3", "$@4", "tipo", "lista_id_var",
  "lista_idents", "parte_declara_sub_rotinas", "opcoes_sub_rotinas",
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

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-157)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-116)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -157,    13,    17,  -157,    32,    46,    39,    47,  -157,    61,
    -157,    67,  -157,  -157,    50,    57,    64,  -157,    43,  -157,
      47,  -157,  -157,  -157,    68,  -157,    72,    73,    70,  -157,
      71,  -157,    74,    75,    40,  -157,  -157,  -157,  -157,  -157,
      49,  -157,  -157,  -157,     7,  -157,    -2,    77,    76,    -6,
    -157,  -157,    40,  -157,  -157,    82,    86,    87,  -157,  -157,
    -157,  -157,  -157,    15,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,    88,    88,  -157,    80,  -157,  -157,    90,  -157,
    -157,    81,  -157,    92,  -157,    91,  -157,    93,  -157,    89,
    -157,    65,  -157,  -157,    34,    69,    94,  -157,  -157,  -157,
    -157,  -157,  -157,    52,  -157,    80,  -157,  -157,   -12,     2,
    -157,  -157,  -157,    97,  -157,    98,    53,  -157,    47,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,    34,
    -157,     2,   -22,    14,  -157,   100,  -157,  -157,    51,  -157,
     101,  -157,    99,  -157,  -157,  -157,    95,  -157,   102,  -157,
     103,  -157,  -157,    78,    79,    83,  -157,    84,    85,    96,
    -157,    -2,   104,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
       2,     2,     2,     2,     2,     2,  -157,   105,    -2,  -157,
    -157,    39,    47,    14,    14,    14,  -157,  -157,  -157,   106,
    -157,   107,  -157,    55,  -157,  -157,  -157,    -6,    -2,  -157,
    -157
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,     0,     0,    11,    22,     0,
       3,     0,    24,     8,     0,     0,     0,     5,     6,    14,
      11,    21,    27,    34,   125,    23,     0,     0,    10,    13,
       0,     2,     0,     0,    56,     7,    25,    26,    12,    20,
       0,    28,    35,   133,     0,    53,   124,     0,     0,     0,
      29,    36,    56,    51,   123,     0,     0,     0,    82,    59,
      54,    60,    61,    72,    58,    62,    63,    55,    19,    18,
      17,    15,    33,    33,    52,     0,    87,    87,     0,    57,
      64,     0,    65,     0,    73,     0,    41,     0,    32,     0,
     129,     0,   128,   132,   100,     0,     0,    87,    87,    69,
      16,    44,    30,     0,   126,     0,    98,    99,    90,     0,
     130,    87,    76,     0,    67,    87,     0,    46,    11,    40,
      37,   127,    91,    92,    93,    94,    96,    95,    88,   100,
      87,     0,    97,   102,   110,   117,   120,   131,     0,    83,
       0,    74,    85,    42,    46,    45,    50,    31,     0,    89,
       0,   122,   101,     0,     0,     0,   109,     0,     0,     0,
     118,   124,     0,    70,    87,    43,    49,    47,    38,   121,
       0,     0,     0,     0,     0,     0,    87,    81,   124,    71,
      86,     0,    11,   104,   106,   108,   112,   114,   116,     0,
      77,     0,    84,     0,    39,   119,    79,     0,   124,    48,
      80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,  -157,   108,  -117,  -157,  -157,  -157,  -157,  -157,
     111,  -157,  -157,   -87,  -157,   -69,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,    41,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,   -31,  -157,  -157,  -157,   109,
    -157,   110,  -157,  -156,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -155,   -74,  -157,  -157,  -157,   -10,  -157,  -157,  -157,
    -157,  -157,  -157,  -131,  -157,  -157,  -157,  -157,  -127,  -157,
     -46,  -157,  -157,  -157,    16,  -157,  -157,   -24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    10,    11,    24,    12,    13,    14,    28,
      29,    30,    85,    71,    40,     9,    18,    25,    26,    32,
      50,    72,   118,    87,    27,    33,    51,    73,   148,   182,
     120,    88,   101,   116,   117,   145,   146,   181,   167,    59,
      44,    45,    46,    60,    79,    80,    81,    82,    83,   115,
     179,    84,   140,    61,   138,   190,   191,   198,    62,    78,
     162,   141,   142,    94,   128,   129,   108,   109,   132,   152,
     153,   154,   155,   133,   156,   157,   158,   159,   134,   176,
     135,    64,    65,    91,    92,    66,    95,   136
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,   147,    93,    96,   151,   177,   130,    69,    34,   180,
      47,    54,  -107,     3,    52,    54,  -103,  -105,    53,   -68,
       4,   189,   192,   113,   114,    55,    56,    57,    47,   -66,
      58,   122,   123,   124,   125,   126,   127,   137,   131,   183,
     184,   185,   200,    70,    43,     5,   186,   187,   188,  -115,
       6,  -113,     8,     7,  -111,    48,   150,    49,   143,    -9,
     144,    16,    19,   197,    20,   194,    15,    16,    22,    23,
     104,   105,   106,   107,   110,   111,    17,    21,    34,    36,
      37,   161,    43,   -14,    39,    67,    75,    41,    42,    68,
      76,    77,    86,    90,    97,    98,    99,   103,   100,   112,
     102,   119,   139,   -75,   160,   164,   163,   166,   169,   168,
     199,   195,   193,   165,    89,    63,   170,   172,   171,   149,
       0,   121,   174,     0,   173,     0,     0,     0,    31,     0,
       0,   175,    63,    35,     0,     0,   -78,   178,   196,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74
};

static const yytype_int16 yycheck[] =
{
      46,   118,    76,    77,   131,   161,     4,    13,    10,   164,
      34,    13,    34,     0,     7,    13,    38,    39,    11,     4,
       3,   176,   178,    97,    98,    27,    28,    29,    52,    14,
      32,    43,    44,    45,    46,    47,    48,   111,    36,   170,
     171,   172,   198,    49,    42,    13,   173,   174,   175,    35,
       4,    37,    13,     7,    40,     6,   130,     8,     5,    12,
       7,     6,    12,     8,     7,   182,     5,     6,    25,    26,
       5,     6,    38,    39,     5,     6,     9,    13,    10,     7,
       7,    30,    42,    13,    13,     8,     4,    13,    13,    13,
       4,     4,     4,    13,     4,    14,     4,     8,     7,     5,
       7,    49,     5,     5,     4,     6,     5,    12,     5,     7,
     197,     5,   181,   144,    73,   161,    38,    34,    39,   129,
      -1,   105,    37,    -1,    40,    -1,    -1,    -1,    20,    -1,
      -1,    35,   178,    24,    -1,    -1,    31,    33,    31,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    54,     0,     3,    13,     4,     7,    13,    67,
      55,    56,    58,    59,    60,     5,     6,     9,    68,    12,
       7,    13,    25,    26,    57,    69,    70,    76,    61,    62,
      63,    55,    71,    77,    10,    91,     7,     7,    62,    13,
      66,    13,    13,    42,    92,    93,    94,   139,     6,     8,
      72,    78,     7,    11,    13,    27,    28,    29,    32,    91,
      95,   105,   110,   132,   133,   134,   137,     8,    13,    13,
      49,    65,    73,    79,    93,     4,     4,     4,   111,    96,
      97,    98,    99,   100,   103,    64,     4,    75,    83,    75,
      13,   135,   136,   114,   115,   138,   114,     4,    14,     4,
       7,    84,     7,     8,     5,     6,    38,    39,   118,   119,
       5,     6,     5,   114,   114,   101,    85,    86,    74,    49,
      82,   136,    43,    44,    45,    46,    47,    48,   116,   117,
       4,    36,   120,   125,   130,   132,   139,   114,   106,     5,
     104,   113,   114,     5,     7,    87,    88,    56,    80,   118,
     114,   130,   121,   122,   123,   124,   126,   127,   128,   129,
       4,    30,   112,     5,     6,    87,    12,    90,     7,     5,
      38,    39,    34,    40,    37,    35,   131,    95,    33,   102,
     113,    89,    81,   125,   125,   125,   130,   130,   130,   113,
     107,   108,    95,    67,    56,     5,    31,     8,   109,    65,
      95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    55,    57,    56,    58,    60,
      59,    59,    61,    61,    63,    64,    62,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    71,    72,    73,
      74,    70,    75,    75,    77,    78,    79,    80,    81,    76,
      82,    84,    83,    85,    86,    85,    88,    89,    87,    90,
      90,    91,    92,    92,    93,    94,    94,    95,    95,    95,
      95,    95,    95,    95,    96,    96,    98,    97,   100,   101,
     102,    99,   103,    99,   104,   104,   106,   105,   108,   109,
     107,   107,   111,   112,   110,   113,   113,   115,   114,   116,
     116,   117,   117,   117,   117,   117,   117,   118,   119,   119,
     119,   120,   120,   122,   121,   123,   121,   124,   121,   125,
     125,   127,   126,   128,   126,   129,   126,   130,   131,   130,
     130,   130,   130,   132,   133,    91,   134,   135,   135,   136,
     137,   138,   138,   139
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     8,     5,     0,     2,     0,     4,     1,     0,
       3,     0,     2,     1,     0,     0,     6,     1,     1,     3,
       1,     3,     1,     2,     0,     2,     2,     0,     0,     0,
       0,     9,     1,     0,     0,     0,     0,     0,     0,    12,
       1,     0,     4,     3,     0,     2,     0,     0,     6,     1,
       0,     3,     3,     1,     2,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     0,     0,
       0,     6,     0,     1,     1,     0,     0,     8,     0,     0,
       4,     0,     0,     0,     8,     1,     3,     0,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       0,     2,     1,     0,     3,     0,     3,     0,     3,     2,
       1,     0,     3,     0,     3,     0,     3,     1,     0,     5,
       1,     3,     2,     1,     0,     0,     4,     3,     1,     1,
       4,     3,     1,     1
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
  case 4: /* inicia: %empty  */
#line 62 "compilador.y"
              {
			    geraCodigo (NULL, "INPP");
		    }
#line 1389 "compilador.tab.c"
    break;

  case 5: /* programa: bloco PONTO  */
#line 68 "compilador.y"
                         {
               strcpy(command,"DMEM ");
               sprintf(totalVars, "%d", num_vars);
               strcat(command, totalVars);
               geraCodigo(NULL, command);
               geraCodigo (NULL, "PARA");
             }
#line 1401 "compilador.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 81 "compilador.y"
                  {
                     if(declaredProcedures > 0 && lexicalLevel == 0) {
                        int rot1 = popTagsStack(&tagsTable);
                        sprintf(command, "R0%d", rot1);
                        geraCodigo(command, "NADA");
                     }
                  }
#line 1413 "compilador.tab.c"
    break;

  case 8: /* parte_declara_vars: var  */
#line 92 "compilador.y"
                        {
      	strcpy(command,"AMEM ");
		sprintf(totalVars, "%d", num_vars);
		strcat(command, totalVars);
		geraCodigo(NULL, command); 
}
#line 1424 "compilador.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 101 "compilador.y"
              { }
#line 1430 "compilador.tab.c"
    break;

  case 14: /* $@3: %empty  */
#line 110 "compilador.y"
              {
               nova_var = 0;
            }
#line 1438 "compilador.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 115 "compilador.y"
              { /* AMEM */
               num_vars += nova_var;
              }
#line 1446 "compilador.tab.c"
    break;

  case 17: /* tipo: INTEGER  */
#line 122 "compilador.y"
                { setTypes(&symbolsTable, integer, nova_var); }
#line 1452 "compilador.tab.c"
    break;

  case 19: /* lista_id_var: lista_id_var VIRGULA IDENT  */
#line 128 "compilador.y"
              {
      nova_var++;
		newInput = createSimpleVarInput(token, lexicalLevel, displacement);
		push(&symbolsTable, newInput);
		displacement++;
      }
#line 1463 "compilador.tab.c"
    break;

  case 20: /* lista_id_var: IDENT  */
#line 134 "compilador.y"
                    { 
      nova_var++;
		newInput = createSimpleVarInput(token, lexicalLevel, displacement);
		push(&symbolsTable, newInput);
		displacement++;
      }
#line 1474 "compilador.tab.c"
    break;

  case 21: /* lista_idents: lista_idents VIRGULA IDENT  */
#line 145 "compilador.y"
        {
		nova_var++;
		newInput = createSimpleFormalParameterInput(token, lexicalLevel, 1, receivingByReference ? reference : value);
		push(&symbolsTable, newInput);
	}
#line 1484 "compilador.tab.c"
    break;

  case 22: /* lista_idents: IDENT  */
#line 151 "compilador.y"
        {
		nova_var++;
		newInput = createSimpleFormalParameterInput(token, lexicalLevel, 1, receivingByReference ? reference : value);
		push(&symbolsTable, newInput);
	}
#line 1494 "compilador.tab.c"
    break;

  case 27: /* $@5: %empty  */
#line 172 "compilador.y"
                  { isSubRoutine = 1; }
#line 1500 "compilador.tab.c"
    break;

  case 28: /* $@6: %empty  */
#line 174 "compilador.y"
        {
		declaredProcedures++;
      pushTagsStack(&tagsTable, rotulo);
		rotulo++;
      pushTagsStack(&tagsTable, rotulo);
		rotulo++;
	  pushTagsStack(&tagsTable, rotulo-2);


      int rot0 = popTagsStack(&tagsTable);
      int rot1 = popTagsStack(&tagsTable);

      sprintf(labelSubroutineEnd, "R0%d", rot0);
      sprintf(labelSubroutineStart, "R0%d", rot1);

      
		// Soh imprime no primeiro pois desvia pra main
		if(declaredProcedures == 1) {
			// Imprime rotulo de saida da subrotina
			sprintf(command, "DSVS R0%d", rot0);
			geraCodigo(NULL, command);
		}

		// Imprime rotulo de entrada da subrotina
        sprintf(command, "ENPR ");
		lexicalLevel++; // Lexical level is elevated on subroutine
		sprintf(varLexDisp, "%d", lexicalLevel);
		strcat(command, varLexDisp);
		geraCodigo(labelSubroutineStart, command); 

		newInput = createSimpleProcedureInput(token, labelSubroutineStart, lexicalLevel, 0);
		push(&symbolsTable, newInput);
	}
#line 1538 "compilador.tab.c"
    break;

  case 29: /* $@7: %empty  */
#line 207 "compilador.y"
        { newParams = 0; }
#line 1544 "compilador.tab.c"
    break;

  case 30: /* $@8: %empty  */
#line 208 "compilador.y"
        {
		// Zera para ser utilizado na subrotina
		// Mas salva valor para ser recuperado
		oldVars = num_vars;
		num_vars = 0;
		displacement = 0;
	}
#line 1556 "compilador.tab.c"
    break;

  case 31: /* declaracao_procedimento: PROCEDURE $@5 IDENT $@6 $@7 parametros_formais_vazio PONTO_E_VIRGULA $@8 bloco  */
#line 216 "compilador.y"
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

		// int rot0 = popTagsStack(&tagsTable);
		// sprintf(command, "R%d", rot0);
		// geraCodigo(command, "NADA");

		destinyVariable = NULL; // Libera variavel destino
		num_vars = oldVars;    // Restabelece numero de variaveis no nivel lexico
		isSubRoutine = 0;
	}
#line 1592 "compilador.tab.c"
    break;

  case 34: /* $@9: %empty  */
#line 256 "compilador.y"
             { isSubRoutine = 1; }
#line 1598 "compilador.tab.c"
    break;

  case 35: /* $@10: %empty  */
#line 258 "compilador.y"
        {
		nova_var++;	
		declaredProcedures++;
      pushTagsStack(&tagsTable, rotulo);
		rotulo++;
      pushTagsStack(&tagsTable, rotulo);
		rotulo++;
	  pushTagsStack(&tagsTable, rotulo-2);

      int rot0 = popTagsStack(&tagsTable);
      int rot1 = popTagsStack(&tagsTable);

      sprintf(labelSubroutineEnd, "R0%d", rot0);
      sprintf(labelSubroutineStart, "R0%d", rot1);

		// Soh imprime no primeiro pois desvia pra main
		if(declaredProcedures == 1) {
			// Imprime rotulo de saida da subrotina
         sprintf(command, "DSVS R0%d", rot0);
         geraCodigo(NULL, command);
		}

		// Imprime rotulo de entrada da subrotina
        sprintf(command, "ENPR ");
		lexicalLevel++; // Lexical level is elevated on subroutine
		sprintf(varLexDisp, "%d", lexicalLevel);
		strcat(command, varLexDisp);
		geraCodigo(labelSubroutineStart, command); 

		strcpy(functionIdentifier, token);
		newParams = 0;
		newInput = createSimpleFunctionInput(functionIdentifier, labelSubroutineStart, lexicalLevel, 0, undefined);
		push(&symbolsTable, newInput);
	}
#line 1637 "compilador.tab.c"
    break;

  case 36: /* $@11: %empty  */
#line 292 "compilador.y"
        { newParams = 0; }
#line 1643 "compilador.tab.c"
    break;

  case 37: /* $@12: %empty  */
#line 294 "compilador.y"
        {
		// Updates paramters and return type
		newInput = search(&symbolsTable, functionIdentifier);
		newInput->numParams = newParams;
		newInput->type = returnType;
		newInput->displacement = -5 - newParams;
	}
#line 1655 "compilador.tab.c"
    break;

  case 38: /* $@13: %empty  */
#line 302 "compilador.y"
        {
		// Zera para ser utilizado na subrotina
		// Mas salva valor para ser recuperado
		oldVars = num_vars;
		num_vars = 0;
		displacement = 0;
	}
#line 1667 "compilador.tab.c"
    break;

  case 39: /* declaracao_funcao: FUNCTION $@9 IDENT $@10 $@11 parametros_formais_vazio DOIS_PONTOS tipo_funcao $@12 PONTO_E_VIRGULA $@13 bloco  */
#line 310 "compilador.y"
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
#line 1698 "compilador.tab.c"
    break;

  case 40: /* tipo_funcao: INTEGER  */
#line 339 "compilador.y"
                { returnType = integer; }
#line 1704 "compilador.tab.c"
    break;

  case 41: /* $@14: %empty  */
#line 345 "compilador.y"
                        { num_parameter = 0; }
#line 1710 "compilador.tab.c"
    break;

  case 42: /* parametros_formais: ABRE_PARENTESES $@14 lista_parametros_formais FECHA_PARENTESES  */
#line 348 "compilador.y"
        {
		updateParams(getNth(&symbolsTable, num_parameter + 1),
								&symbolsTable, num_parameter);
	}
#line 1719 "compilador.tab.c"
    break;

  case 44: /* $@15: %empty  */
#line 356 "compilador.y"
          { newParams++; }
#line 1725 "compilador.tab.c"
    break;

  case 46: /* $@16: %empty  */
#line 361 "compilador.y"
        { num_parameter++; }
#line 1731 "compilador.tab.c"
    break;

  case 47: /* $@17: %empty  */
#line 361 "compilador.y"
                                       { nova_var = 0; }
#line 1737 "compilador.tab.c"
    break;

  case 49: /* var_vazio: VAR  */
#line 365 "compilador.y"
            { receivingByReference = 1; }
#line 1743 "compilador.tab.c"
    break;

  case 66: /* $@18: %empty  */
#line 401 "compilador.y"
   {}
#line 1749 "compilador.tab.c"
    break;

  case 67: /* atribuicao: $@18 ATRIBUICAO expressao  */
#line 403 "compilador.y"
        {
		typeVerify(&typesTable, "atribuicao");
		if(destinyVariable->pass == 0)
			strcpy(command,"ARMZ ");
		else
			strcpy(command,"ARMI ");
		sprintf(varLexDisp, "%d, ", destinyVariable->lexicalLevel);
		strcat(command, varLexDisp);
		sprintf(varLexDisp, "%d", destinyVariable->displacement);
		strcat(command, varLexDisp);
		geraCodigo(NULL, command); 
		destinyVariable = NULL;
	}
#line 1767 "compilador.tab.c"
    break;

  case 68: /* $@19: %empty  */
#line 419 "compilador.y"
    {
		insideProcedure = 1;
		// Imprime rotulo de entrada da subrotina
		currentProcedure = destinyVariable;
		strcpy(callProcedure, "CHPR ");
		strcat(callProcedure, destinyVariable->label);
		sprintf(varLexDisp, ", %d", lexicalLevel);
		strcat(callProcedure, varLexDisp);
   	}
#line 1781 "compilador.tab.c"
    break;

  case 69: /* $@20: %empty  */
#line 428 "compilador.y"
                        {  receivingFormalParams = 1; newParams = 0; }
#line 1787 "compilador.tab.c"
    break;

  case 70: /* $@21: %empty  */
#line 431 "compilador.y"
        { 
		insideProcedure = 0;
		geraCodigo(NULL, callProcedure); 
		receivingFormalParams = 0;
	}
#line 1797 "compilador.tab.c"
    break;

  case 71: /* chama_procedimento: $@19 ABRE_PARENTESES $@20 lista_expressoes_ou_vazio FECHA_PARENTESES $@21  */
#line 436 "compilador.y"
        { destinyVariable = NULL; }
#line 1803 "compilador.tab.c"
    break;

  case 72: /* $@22: %empty  */
#line 438 "compilador.y"
        {
		insideProcedure = 1;
		currentProcedure = destinyVariable;
		// Imprime rotulo de entrada da subrotina
		strcpy(callProcedure, "CHPR ");
		strcat(callProcedure, destinyVariable->label);
		sprintf(varLexDisp, ", %d", lexicalLevel);
		strcat(callProcedure, varLexDisp);

		destinyVariable = NULL;
	}
#line 1819 "compilador.tab.c"
    break;

  case 73: /* chama_procedimento: $@22  */
#line 449 "compilador.y"
        { 
		insideProcedure = 0;
    	geraCodigo(NULL, callProcedure); 
	}
#line 1828 "compilador.tab.c"
    break;

  case 76: /* $@23: %empty  */
#line 502 "compilador.y"
          {
		sprintf(command, "DSVF R0%d", rotulo);

		pushTagsStack(&tagsTable, rotulo+1);
		pushTagsStack(&tagsTable, rotulo);
		pushTagsStack(&tagsTable, rotulo+1);
		rotulo += 2;
		
		geraCodigo(NULL, command);
	  }
#line 1843 "compilador.tab.c"
    break;

  case 78: /* $@24: %empty  */
#line 516 "compilador.y"
                 {
			int rot1 = popTagsStack(&tagsTable);
			sprintf(command, "DSVS R0%d", rot1);
			geraCodigo(NULL, command);
		 }
#line 1853 "compilador.tab.c"
    break;

  case 79: /* $@25: %empty  */
#line 522 "compilador.y"
         {
            int rot0 = popTagsStack(&tagsTable);
            sprintf(command, "R0%d", rot0);
            geraCodigo(command, "NADA");
         }
#line 1863 "compilador.tab.c"
    break;

  case 80: /* cond_else: $@24 ELSE $@25 comando_sem_rotulo  */
#line 528 "compilador.y"
                 {
			int rot1 = popTagsStack(&tagsTable);
			sprintf(command, "R0%d", rot1);
			geraCodigo(command, "NADA");
		 }
#line 1873 "compilador.tab.c"
    break;

  case 81: /* cond_else: %empty  */
#line 534 "compilador.y"
                 {
			popTagsStack(&tagsTable);
			int rot1 = popTagsStack(&tagsTable);
			sprintf(command, "R0%d", rot1);
			geraCodigo(command, "NADA");
			popTagsStack(&tagsTable);
		 }
#line 1885 "compilador.tab.c"
    break;

  case 82: /* $@26: %empty  */
#line 573 "compilador.y"
      {
         sprintf(command, "R0%d", rotulo);

         pushTagsStack(&tagsTable, rotulo);
         pushTagsStack(&tagsTable, rotulo+1);
         rotulo += 2;

         geraCodigo(command, "NADA");  
      }
#line 1899 "compilador.tab.c"
    break;

  case 83: /* $@27: %empty  */
#line 583 "compilador.y"
      {
         int rot1 = topTagsStack(&tagsTable);
         sprintf(command, "DSVF R0%d", rot1);
         geraCodigo(NULL, command);
      }
#line 1909 "compilador.tab.c"
    break;

  case 84: /* comando_repetitivo: WHILE $@26 ABRE_PARENTESES expressao FECHA_PARENTESES $@27 DO comando_sem_rotulo  */
#line 589 "compilador.y"
      {
         int rot1 = popTagsStack(&tagsTable);
         int rot0 = popTagsStack(&tagsTable);

         sprintf(command, "DSVS R0%d", rot0);
         geraCodigo(NULL, command);

         sprintf(command, "R0%d", rot1);
         geraCodigo(command, "NADA");
      }
#line 1924 "compilador.tab.c"
    break;

  case 87: /* $@28: %empty  */
#line 606 "compilador.y"
        { newParams++; }
#line 1930 "compilador.tab.c"
    break;

  case 89: /* relacao_exp_simples_vazio: relacao expressao_simples  */
#line 611 "compilador.y"
        { 
		typeVerify(&typesTable, "relacional");
		geraCodigo(NULL, relacaoUsada);
	}
#line 1939 "compilador.tab.c"
    break;

  case 91: /* relacao: IGUAL  */
#line 620 "compilador.y"
              { strcpy(relacaoUsada, "CMIG"); }
#line 1945 "compilador.tab.c"
    break;

  case 92: /* relacao: DIFF  */
#line 621 "compilador.y"
               { strcpy(relacaoUsada, "CMDG"); }
#line 1951 "compilador.tab.c"
    break;

  case 93: /* relacao: MENOR  */
#line 622 "compilador.y"
                { strcpy(relacaoUsada, "CMME"); }
#line 1957 "compilador.tab.c"
    break;

  case 94: /* relacao: MENOR_IGUAL  */
#line 623 "compilador.y"
                      { strcpy(relacaoUsada, "CMEG"); }
#line 1963 "compilador.tab.c"
    break;

  case 95: /* relacao: MAIOR_IGUAL  */
#line 624 "compilador.y"
                      { strcpy(relacaoUsada, "CMAG"); }
#line 1969 "compilador.tab.c"
    break;

  case 96: /* relacao: MAIOR  */
#line 625 "compilador.y"
                { strcpy(relacaoUsada, "CMMA"); }
#line 1975 "compilador.tab.c"
    break;

  case 98: /* mais_menos_vazio: MAIS  */
#line 634 "compilador.y"
             { pureExpression = 0; }
#line 1981 "compilador.tab.c"
    break;

  case 99: /* mais_menos_vazio: MENOS  */
#line 634 "compilador.y"
                                             { pureExpression = 0; }
#line 1987 "compilador.tab.c"
    break;

  case 103: /* $@29: %empty  */
#line 643 "compilador.y"
        { pureExpression = 0; }
#line 1993 "compilador.tab.c"
    break;

  case 104: /* lista_termo: $@29 MAIS termo  */
#line 643 "compilador.y"
                                           { typeVerify(&typesTable, "soma"); geraCodigo(NULL, "SOMA"); }
#line 1999 "compilador.tab.c"
    break;

  case 105: /* $@30: %empty  */
#line 644 "compilador.y"
          { pureExpression = 0; }
#line 2005 "compilador.tab.c"
    break;

  case 106: /* lista_termo: $@30 MENOS termo  */
#line 644 "compilador.y"
                                              { typeVerify(&typesTable, "subtracao"); geraCodigo(NULL, "SUBT"); }
#line 2011 "compilador.tab.c"
    break;

  case 107: /* $@31: %empty  */
#line 645 "compilador.y"
          { pureExpression = 0; }
#line 2017 "compilador.tab.c"
    break;

  case 108: /* lista_termo: $@31 OR termo  */
#line 645 "compilador.y"
                                           { typeVerify(&typesTable, "or"); geraCodigo(NULL, "DISJ"); }
#line 2023 "compilador.tab.c"
    break;

  case 111: /* $@32: %empty  */
#line 655 "compilador.y"
        { pureExpression = 0; }
#line 2029 "compilador.tab.c"
    break;

  case 112: /* lista_fator: $@32 ASTERISCO fator  */
#line 655 "compilador.y"
                                                { typeVerify(&typesTable, "multiplicacao"); geraCodigo(NULL, "MULT"); }
#line 2035 "compilador.tab.c"
    break;

  case 113: /* $@33: %empty  */
#line 656 "compilador.y"
          { pureExpression = 0; }
#line 2041 "compilador.tab.c"
    break;

  case 114: /* lista_fator: $@33 DIV fator  */
#line 656 "compilador.y"
                                            { typeVerify(&typesTable, "divisao"); geraCodigo(NULL, "DIVI"); }
#line 2047 "compilador.tab.c"
    break;

  case 115: /* $@34: %empty  */
#line 657 "compilador.y"
          { pureExpression = 0; }
#line 2053 "compilador.tab.c"
    break;

  case 116: /* lista_fator: $@34 AND fator  */
#line 657 "compilador.y"
                                            { typeVerify(&typesTable, "and"); geraCodigo(NULL, "CONJ"); }
#line 2059 "compilador.tab.c"
    break;

  case 117: /* fator: variavel  */
#line 664 "compilador.y"
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
				//fprintf(stdout, "TIPO: %d - PASSAGEM: %d \n", loadedVariable->category, loadedVariable->pass);
				if (loadedVariable->category == 0){
					if(loadedVariable->pass == 0){
						strcpy(command, "CRVL ");
					}
					else
						strcpy(command, "CRVL ");
				} else {
					if(loadedVariable->pass == 0)
						strcpy(command, "CRVL ");
					else
						strcpy(command, "CRVI ");
				}

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
				
				if (destinyVariable->category == 0){
					if(destinyVariable->pass == 0){
						strcpy(command, "CRVL ");
					}
					else
						strcpy(command, "CRVL ");
				} else {
					if(destinyVariable->pass == 0)
						strcpy(command, "CRVL ");
					else
						strcpy(command, "CRVI ");
				}
				sprintf(varLexDisp, "%d, ", destinyVariable->lexicalLevel);
				strcat(command, varLexDisp);
				sprintf(varLexDisp, "%d", destinyVariable->displacement);
				destinyVariable = NULL;
				strcat(command, varLexDisp);
				geraCodigo(NULL, command);
			}
		}
	}
#line 2127 "compilador.tab.c"
    break;

  case 118: /* $@35: %empty  */
#line 728 "compilador.y"
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
#line 2144 "compilador.tab.c"
    break;

  case 119: /* fator: variavel ABRE_PARENTESES $@35 lista_expressoes FECHA_PARENTESES  */
#line 741 "compilador.y"
        { 
		strcpy(callProcedure, "CHPR ");
		strcat(callProcedure, currentProcedure->label);
		sprintf(varLexDisp, ", %d", lexicalLevel);
		strcat(callProcedure, varLexDisp);
		geraCodigo(NULL, callProcedure);
	}
#line 2156 "compilador.tab.c"
    break;

  case 123: /* variavel: IDENT  */
#line 755 "compilador.y"
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
#line 2180 "compilador.tab.c"
    break;

  case 129: /* simbolo_leitura: IDENT  */
#line 787 "compilador.y"
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
#line 2203 "compilador.tab.c"
    break;

  case 131: /* lista_escrita: lista_escrita VIRGULA expressao  */
#line 809 "compilador.y"
                                               { geraCodigo (NULL, "IMPR"); }
#line 2209 "compilador.tab.c"
    break;

  case 132: /* lista_escrita: expressao  */
#line 810 "compilador.y"
            { geraCodigo (NULL, "IMPR"); }
#line 2215 "compilador.tab.c"
    break;

  case 133: /* numero: NUMERO  */
#line 815 "compilador.y"
        {
		pushTypeStack(&typesTable, integer);
		strcpy(command,"CRCT ");
		sprintf(totalVars, "%s", token);
		strcat(command, totalVars);
		geraCodigo(NULL, command); 
	}
#line 2227 "compilador.tab.c"
    break;


#line 2231 "compilador.tab.c"

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

#line 825 "compilador.y"


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
