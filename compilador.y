
// Testar se funciona corretamente o empilhamento de par�metros
// passados por valor ou por refer�ncia.


%{
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "compilador.h"
#include "tabelaSimbolos.h"
#include "tabelaTipos.h"
#include "tabelaRotulos.h"

int num_vars, nova_var, displacement, lexicalLevel, rotulo;
int pureExpression;
char totalVars[16], command[20], varLexDisp[12], relacaoUsada[5];

stackNode *newInput, *destinyVariable, *loadedVariable;
symbolsStack symbolsTable;
typesStack typesTable;
tagsStack tagsTable;

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

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%

// REGRA 1
programa    :{
               geraCodigo (NULL, "INPP");
             }
             PROGRAM IDENT
             ABRE_PARENTESES lista_idents FECHA_PARENTESES PONTO_E_VIRGULA
             bloco PONTO {
               strcpy(command,"DMEM ");
               sprintf(totalVars, "%d", num_vars);
               strcat(command, totalVars);
               geraCodigo(NULL, command);
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
		displacement++;
      }
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
	variavel atribuicao_procedimento
	| desvio
	| comando_composto
	| comando_condicional
	| comando_repetitivo
	| leitura
	| escrita
;

atribuicao_procedimento:
	atribuicao
	| chama_procedimento 
;


// REGRA 19
atribuicao:
   {}
	ATRIBUICAO expressao
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
;

chama_procedimento:

//REGRA 22
comando_condicional:
      if_then cond_else
      {
         int rot1 = popTagsStack(&tagsTable);
         sprintf(command, "R%d", rot1);
         geraCodigo(command, "NADA");
      }
;

if_then:
      IF ABRE_PARENTESES expressao FECHA_PARENTESES 
      {
         sprintf(command, "DSVF R%d", rotulo);
         geraCodigo(NULL, command);

         pushTagsStack(&tagsTable, rotulo+1);
         pushTagsStack(&tagsTable, rotulo);
         pushTagsStack(&tagsTable, rotulo+1);
         rotulo += 2;
      }
      THEN comando_sem_rotulo
      {
         int rot1 = popTagsStack(&tagsTable);
         sprintf(command, "DSVS R%d", rot1);
         geraCodigo(NULL, command);

         int rot0 = popTagsStack(&tagsTable);
         sprintf(command, "R%d", rot0);
         geraCodigo(command, "NADA");

      } 
      // ELSE comando_sem_rotulo
      // {
      //    int rot1 = popTagsStack(&tagsTable);
      //    sprintf(command, "R%d", rot1);
      //    geraCodigo(command, "NADA");
      // }
;

cond_else: 
         ELSE comando_sem_rotulo
         {
            int rot1 = popTagsStack(&tagsTable);
            sprintf(command, "R%d", rot1);
            geraCodigo(command, "NADA");
         }
         | %prec LOWER_THAN_ELSE 


//REGRA 23
comando_repetitivo: 
      // WHILE 
      // {
      //    sprintf(command, "R%d", rotulo);
      //    pushTagsStack(&tagsTable, rotulo);
      //    pushTagsStack(&tagsTable, rotulo+1);
      //    rotulo += 2;
      //    geraCodigo(command, "NADA");  
      // }
      // expressao 
      // {
      //    int rot1 = topTagsStack(&tagsTable);
      //    sprintf(command, "DSVF R%d", rot1);
      //    geraCodigo(NULL, command);
      // }
      // DO comando_sem_rotulo
      // {
      //    int rot1 = popTagsStack(&tagsTable);
      //    int rot0 = popTagsStack(&tagsTable);
      //    sprintf(command, "DSVS R%d", rot0);
      //    geraCodigo(NULL, command);
      //    sprintf(command, "R%d", rot1);
      //    geraCodigo(command, "NADA");
      // }

      // |

      WHILE 
      {
         sprintf(command, "R%d", rotulo);

         pushTagsStack(&tagsTable, rotulo);
         pushTagsStack(&tagsTable, rotulo+1);
         rotulo += 2;

         geraCodigo(command, "NADA");  
      }
      ABRE_PARENTESES expressao FECHA_PARENTESES 
      {
         int rot1 = topTagsStack(&tagsTable);
         sprintf(command, "DSVF R%d", rot1);
         geraCodigo(NULL, command);
      }
      DO comando_sem_rotulo
      {
         int rot1 = popTagsStack(&tagsTable);
         int rot0 = popTagsStack(&tagsTable);

         sprintf(command, "DSVS R%d", rot0);
         geraCodigo(NULL, command);

         sprintf(command, "R%d", rot1);
         geraCodigo(command, "NADA");
      }
;

//REGRA 24
lista_expressoes: expressao | expressao VIRGULA lista_expressoes;

//REGRA 25
expressao:
      
   	{ } expressao_simples relacao_exp_simples_vazio 
;

relacao_exp_simples_vazio:
	relacao expressao_simples
	{ 
		typeVerify(&typesTable, "relacional");
		geraCodigo(NULL, relacaoUsada);
	}
;

	|
// REGRA 26
relacao:
	IGUAL { strcpy(relacaoUsada, "CMIG"); } 
	| DIFF { strcpy(relacaoUsada, "CMDG"); } 
	| MENOR { strcpy(relacaoUsada, "CMME"); } 
	| MENOR_IGUAL { strcpy(relacaoUsada, "CMEG"); } 
	| MAIOR_IGUAL { strcpy(relacaoUsada, "CMAG"); } 
	| MAIOR { strcpy(relacaoUsada, "CMMA"); } 
;

// REGRA 27
expressao_simples:
   	mais_menos_vazio expressao_lista_termo
;

mais_menos_vazio:
   	MAIS { pureExpression = 0; } | MENOS { pureExpression = 0; } | ;
;

expressao_lista_termo:
	expressao_lista_termo lista_termo 
	| termo 
;

lista_termo:
	{ pureExpression = 0; } MAIS termo { typeVerify(&typesTable, "soma"); geraCodigo(NULL, "SOMA"); }
	| { pureExpression = 0; } MENOS termo { typeVerify(&typesTable, "subtracao"); geraCodigo(NULL, "SUBT"); }
	| { pureExpression = 0; } OR termo { typeVerify(&typesTable, "or"); geraCodigo(NULL, "DISJ"); }
;

// REGRA 28
termo:
	termo lista_fator 
	| fator 
;

lista_fator:
	{ pureExpression = 0; } ASTERISCO fator { typeVerify(&typesTable, "multiplicacao"); geraCodigo(NULL, "MULT"); }
	| { pureExpression = 0; } BARRA fator { typeVerify(&typesTable, "divisao"); geraCodigo(NULL, "DIVI"); }
	| { pureExpression = 0; } AND fator { typeVerify(&typesTable, "and"); geraCodigo(NULL, "CONJ"); }
;


// Regra 29
fator:
   	variavel %prec NADA
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
	| variavel ABRE_PARENTESES
	{
	}
	lista_expressoes FECHA_PARENTESES
	{ 
	}
	| numero
	| ABRE_PARENTESES expressao FECHA_PARENTESES
	| NOT fator
;

// Regra 30
variavel:
   	IDENT {
      
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
;

desvio:
;

comando_composto:
;

leitura: READ ABRE_PARENTESES lista_leitura FECHA_PARENTESES
;

lista_leitura: lista_leitura VIRGULA simbolo_leitura | simbolo_leitura

simbolo_leitura: IDENT {
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

escrita: WRITE ABRE_PARENTESES lista_escrita FECHA_PARENTESES
;

lista_escrita: lista_escrita VIRGULA expressao { geraCodigo (NULL, "IMPR"); } 
| expressao { geraCodigo (NULL, "IMPR"); }


numero: 	
   NUMERO
	{
		pushTypeStack(&typesTable, integer);
		strcpy(command,"CRCT ");
		sprintf(totalVars, "%s", token);
		strcat(command, totalVars);
		geraCodigo(NULL, command); 
	}
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
