#include "tabelaSimbolos.h"

void createStack(symbolsStack *symbolsTable) {
    symbolsTable->size = 0;
    symbolsTable->top = NULL;
}

int emptyStack(symbolsStack *symbolsTable) {
    return (symbolsTable->size == 0);
}

void push(symbolsStack *symbolsTable, stackNode *newSymbol) {
    newSymbol->next = symbolsTable->top;
    symbolsTable->top = newSymbol;
    symbolsTable->size++;
}

stackNode* search(symbolsStack *symbolsTable, char *identifier) {
    if(emptyStack(symbolsTable)) {
        puts("Pilha vazia");
        return NULL;
    }

    stackNode *node;
    int hasFound = 0;

    node = symbolsTable->top;
    fprintf(stdout, "PROCURANDO POR: %s\n", identifier);
    while(node != NULL) {
        // Returns zero if equal
        fprintf(stdout, "ATUAL: %s\n", node->identifier);
        hasFound = !strcmp(node->identifier, identifier);
        if(hasFound) {
            return node;
        }
        node = node->next;
    }

    if(!hasFound) {
        return NULL;
    }

    return node;
}

void pop(symbolsStack *symbolsTable, int n) {
    if(emptyStack(symbolsTable)) {
        puts("Pilha vazia");
        exit(1);
    }

    int i = 0;
    stackNode *temp;
    while((i < n) && (symbolsTable->size > 0)) {
        temp = symbolsTable->top;
        symbolsTable->top = symbolsTable->top->next;
        free(temp);
        symbolsTable->size--;
        i++;
    }
}

stackNode* createSimpleVarInput(char *identifier, int lexicalLevel, int displacement) {
    stackNode *newNode = (stackNode*)malloc(sizeof(stackNode));

    newNode->identifier = (char*)malloc(strlen(identifier) * sizeof(char));
    strcpy(newNode->identifier, identifier);
    
    newNode->lexicalLevel = lexicalLevel;
    newNode->displacement = displacement;
    
    return newNode;
}


void printTable(symbolsStack *symbolsTable) {
    stackNode *aux = symbolsTable->top;
    while(aux != NULL) {
        printf("--------------> VAR\n");
				printf("--> &x: %p\n", aux);
        printf("--> id: %s\n", aux->identifier);
        printf("--> lb: %s\n", aux->label);
				printf("--> #p: %d\n", aux->numParams);
				printf("--> nl, ds: %d, %d\n", aux->lexicalLevel, aux->displacement);
				printf("--> type: (%d) int, (%d) bool, (%d) undef\n", aux->type == integer, aux->type == boolean, aux->type == undefined);
        aux = aux->next;
    }
}