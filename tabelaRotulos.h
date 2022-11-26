#ifndef __TABELA_ROTULOS__
#define __TABELA_ROTULOS__

#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

// poderia ter soh os nodos?
typedef struct tagNode {
	int rotulo;

	struct tagNode *next;
} tagNode;

typedef struct tagsStack {
	int size;
	tagNode *top;
} tagsStack;

void createTagsStack(tagsStack *tagsTable);

void pushTagsStack(tagsStack *tagsTable, int new_tag);

int popTagsStack(tagsStack *tagsTable);

int topTagsStack(tagsStack *tagsTable);

#endif