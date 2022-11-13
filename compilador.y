
// Testar se funciona corretamente o empilhamento de par�metros
// passados por valor ou por refer�ncia.


%{
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "compilador.h"
#include "tabelaSimbolos.h"

int num_vars, nova_var, displacement, lexicalLevel;
char totalVars[16], command[20];

stackNode *newInput;
symbolsStack symbolsTable;

%}


%token PROGRAM ABRE_PARENTESES FECHA_PARENTESES
%token VIRGULA PONTO_E_VIRGULA DOIS_PONTOS PONTO
%token T_BEGIN T_END VAR IDENT ATRIBUICAO
%token ABRE_COLCHETES FECHA_COLCHETES ABRE_CHAVES FECHA_CHAVES
%token LABEL TYPE OF GOTO ARRAY RELACAO
%token PROCEDURE FUNCTION READ WRITE
%token IF THEN ELSE WHILE DO
%token OR AND NOT DIV MAIS MENOS ASTERISCO BARRA NUMERO
%token IGUAL DIFF MENOR MENOR_IGUAL MAIOR MAIOR_IGUAL

%%

// REGRA 1
programa    :{
             geraCodigo (NULL, "INPP");
             }
             PROGRAM IDENT
             ABRE_PARENTESES lista_idents FECHA_PARENTESES PONTO_E_VIRGULA
             bloco PONTO {
             geraCodigo (NULL, "PARA");
             }
;

// REGRA 2
bloco       :
              parte_declara_vars

              comando_composto
              ;

// REGRA 8
parte_declara_vars:  var{
      strcpy(command,"AMEM ");
		sprintf(totalVars, "%d", num_vars);
		strcat(command, totalVars);
		geraCodigo(NULL, command); 
}
;


var         : { } VAR declara_vars
            |
;

// REGRA 9
declara_vars: declara_vars declara_var
            | declara_var
;

declara_var : {
               nova_var = 0;
            }
              lista_id_var DOIS_PONTOS
              tipo
              { /* AMEM */
               num_vars += nova_var;
              }
              PONTO_E_VIRGULA
;

tipo        : IDENT
;

lista_id_var: lista_id_var VIRGULA IDENT
              {
      nova_var++;
		newInput = createSimpleVarInput(token, lexicalLevel, displacement);
		push(&symbolsTable, newInput);
		displacement++; }
            | IDENT { 
      nova_var++;
		newInput = createSimpleVarInput(token, lexicalLevel, displacement);
		push(&symbolsTable, newInput);
		displacement++;
      }
;

// REGRA 9
lista_idents: lista_idents VIRGULA IDENT
            | IDENT
;

// REGRA 16
comando_composto: T_BEGIN comandos T_END
;

// REGRA 17
comandos: comandos PONTO_E_VIRGULA comando | comando
;

comando: comando_sem_rotulo | numero_ou_nada
;

numero_ou_nada: numero DOIS_PONTOS | 
;

// REGRA 18
comando_sem_rotulo:
	atribuicao
	| desvio
	| comando_composto
	| comando_condicional
	| comando_repetitivo
	| leitura
	| escrita
;

// REGRA 19
atribuicao: variavel ATRIBUICAO expressao 
{}
;

desvio:
;

comando_composto:
;

comando_condicional:
;

comando_repetitivo:
;

leitura:
;

escrita:
;

expressao: variavel_ou_numero
| lista_expressao
;

variavel_ou_numero: variavel | numero
;

lista_expressao: lista_expressao operacao variavel_ou_numero | variavel_ou_numero

operacao: SOMA 
| SUBTRACAO
| MULTIPLICACAO
| DIVISAO


numero: IDENT
;

variavel: IDENT
;

%%

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

   yyin=fp;
   yyparse();

   return 0;
}
