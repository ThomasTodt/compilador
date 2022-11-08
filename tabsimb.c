#include "tabsimb.h"

tabsimb_t* empilha(tabsimb_t *t, int valor) 
{
	tabsimb_t* elemento = malloc(sizeof(tabsimb_t));
	elemento->valor = valor;

	if (t != NULL)
		elemento->anterior = t;

	return elemento;
}

// void remove(tabsimb_t *t, int n) {
// 	tabsimb* aux = p->anterior;
// 	for (int i = 0; i < n; i++) {
// 		free(p);
// 		p = aux;
// 		aux = aux->anterior;
// 	}
// }

int devolveValor(tabsimb_t *t) 
{
	if (t == NULL)
		return 0;

	return t->valor;
}

tabsimb_t* desempilha(tabsimb_t *t) 
{
	tabsimb_t* aux = NULL;

	if (t != NULL)
	{
		aux = t->anterior;
		free(t);
	}

	return aux;
}