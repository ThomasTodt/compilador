/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_COMPILADOR_TAB_H_INCLUDED
# define YY_YY_COMPILADOR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PROGRAM = 258,                 /* PROGRAM  */
    ABRE_PARENTESES = 259,         /* ABRE_PARENTESES  */
    FECHA_PARENTESES = 260,        /* FECHA_PARENTESES  */
    VIRGULA = 261,                 /* VIRGULA  */
    PONTO_E_VIRGULA = 262,         /* PONTO_E_VIRGULA  */
    DOIS_PONTOS = 263,             /* DOIS_PONTOS  */
    PONTO = 264,                   /* PONTO  */
    T_BEGIN = 265,                 /* T_BEGIN  */
    T_END = 266,                   /* T_END  */
    VAR = 267,                     /* VAR  */
    IDENT = 268,                   /* IDENT  */
    ATRIBUICAO = 269,              /* ATRIBUICAO  */
    ABRE_COLCHETES = 270,          /* ABRE_COLCHETES  */
    FECHA_COLCHETES = 271,         /* FECHA_COLCHETES  */
    ABRE_CHAVES = 272,             /* ABRE_CHAVES  */
    FECHA_CHAVES = 273,            /* FECHA_CHAVES  */
    LABEL = 274,                   /* LABEL  */
    TYPE = 275,                    /* TYPE  */
    OF = 276,                      /* OF  */
    GOTO = 277,                    /* GOTO  */
    ARRAY = 278,                   /* ARRAY  */
    RELACAO = 279,                 /* RELACAO  */
    PROCEDURE = 280,               /* PROCEDURE  */
    FUNCTION = 281,                /* FUNCTION  */
    READ = 282,                    /* READ  */
    WRITE = 283,                   /* WRITE  */
    IF = 284,                      /* IF  */
    THEN = 285,                    /* THEN  */
    ELSE = 286,                    /* ELSE  */
    WHILE = 287,                   /* WHILE  */
    DO = 288,                      /* DO  */
    OR = 289,                      /* OR  */
    AND = 290,                     /* AND  */
    NOT = 291,                     /* NOT  */
    DIV = 292,                     /* DIV  */
    MAIS = 293,                    /* MAIS  */
    MENOS = 294,                   /* MENOS  */
    ASTERISCO = 295,               /* ASTERISCO  */
    BARRA = 296,                   /* BARRA  */
    NUMERO = 297,                  /* NUMERO  */
    IGUAL = 298,                   /* IGUAL  */
    DIFF = 299,                    /* DIFF  */
    MENOR = 300,                   /* MENOR  */
    MENOR_IGUAL = 301,             /* MENOR_IGUAL  */
    MAIOR = 302,                   /* MAIOR  */
    MAIOR_IGUAL = 303,             /* MAIOR_IGUAL  */
    NADA = 304                     /* NADA  */
  };
  typedef enum yytokentype yytoken_kind_t;
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
