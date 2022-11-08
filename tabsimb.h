#ifndef tabsimb_H_   

#define tabsimb_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct tabsimb_t
{
	int valor;
	struct tabsimb_t* anterior;
} tabsimb_t;

tabsimb_t* empilha(tabsimb_t *t, int valor);

// void remove(tabsimb_t *t, int n);

int devolveValor(tabsimb_t *t);

tabsimb_t* desempilha(tabsimb_t *t);

#endif