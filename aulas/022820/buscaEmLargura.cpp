#include "buscaEmLargura.h"

bool grafoVazio(lista* L)
{
	if (L->cab == NULL)
		return true;
	return false;
}

bool inserirAresta(lista* L, int vertice, int vertice1)
{
	if (!verticeValido(L, vertice) || !verticeValido(L, vertice1)) return false;
	if (verificaAresta(L, vertice, vertice1)) return false;

	if(inserirArestaAux(L, vertice, vertice1) && inserirArestaAux(L, vertice1, vertice))
		return true;
	return false;
}

bool inserirArestaAux(lista* L, int vertice, int vertice1)
{
	no* p = (no*)malloc(sizeof(no));
	if (p == NULL) return false;
	p->v = vertice1;
	p->prox = L->cab[vertice]->prox;
	L->cab[vertice]->prox = p;
	return true;
}

bool novoGrafo(lista* L, int vertices)
{
	L->cab = NULL;
	L->nV = vertices;
	return true;
}

bool verificaAresta(lista* L, int vertice, int vertice1)
{
	if (grafoVazio(L)) return false;
	if (!verticeValido(L, vertice) || !verticeValido(L, vertice1)) return false;
	no* p = L->cab[vertice];
	while (p && p->v != vertice1)
		p = p->prox;
	if (p == NULL)
		return false;
	return true;
}

bool verticeValido(lista* L, int vertice)
{
	if (vertice >= L->nV || vertice < 0)
		return false;
	return true;
}

bool removerAresta(lista* L, int vertice, int vertice1)
{
	if (grafoVazio(L)) return false;
	if (!verificaAresta(L, vertice, vertice1)) return false;

	/**
	 * (vertice, vertice1)
	 */
	no* p = L->cab[vertice]->prox;
	no* q = NULL;
	while (p && p->v != vertice1)
	{
		q = p;
		p = p->prox;
	}
	if (q == NULL)
		L->cab[vertice]->prox = p->prox;
	else
		q->prox = p->prox;
	free(p);

	/* (vertice1, vertice) */
	p = L->cab[vertice1]->prox;
	q = NULL;
	while (p && p->v != vertice)
	{
		q = p;
		p = p->prox;
	}
	if (q == NULL)
		L->cab[vertice1]->prox = p->prox;
	else
		q->prox = p->prox;
	free(p);

	return true;
}
