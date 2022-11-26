#include "tabelaRotulos.h"

void createTagsStack(tagsStack *tagsTable) 
{
    tagsTable->size = 0;
    tagsTable->top = NULL;
}

void pushTagsStack(tagsStack *tagsTable, int new_tag) 
{
    tagNode *newTag;
    newTag = (tagNode*)malloc(sizeof(tagNode));
    newTag->rotulo = new_tag;

    newTag->next = tagsTable->top;
    tagsTable->top = newTag;
    tagsTable->size++;
}

int emptyTagStack(tagsStack *tagsTable) {
    return (tagsTable->size == 0);
}

int popTagsStack(tagsStack *tagsTable)
{
    if(emptyTagStack(tagsTable)) {
        puts("Pilha de rótulos vazia");
        exit(1);
    }

    tagNode *temp;
    temp = tagsTable->top;

    tagsTable->top = tagsTable->top->next;
    tagsTable->size--;

    int rotulo = temp->rotulo;
    free(temp);

    return rotulo;
}

int topTagsStack(tagsStack *tagsTable)
{
    return tagsTable->top->rotulo;
}