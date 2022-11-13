#ifndef __TABELA_SIMBOLOS__
#define __TABELA_SIMBOLOS__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tabelaSimbolos.h"

typedef struct stackNode {
	char *identifier, *label;
	int lexicalLevel, displacement, numParams;

	struct stackNode *next;
} stackNode;

typedef struct symbolsStack {
	int size;
	stackNode *top;
} symbolsStack;

void createStack(symbolsStack *symbolsTable);

int emptyStack(symbolsStack *symbolsTable);

void push(symbolsStack *symbolsTable, stackNode *newSymbol);

stackNode* search(symbolsStack *symbolsTable, char *identifier);

void pop(symbolsStack *symbolsTable, int n);

stackNode* createSimpleVarInput(char *identifier, int lexicalLevel, int displacement);

#endif