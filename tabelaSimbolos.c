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
    while(node != NULL) {
        // Returns zero if equal
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
