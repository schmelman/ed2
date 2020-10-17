#include "grafo.h"

void carregaGrafo(grafo* g) {
	FILE *gFile = fopen("grafo.txt", "r");
	
	fclose(gFile);
}

int checaVazio(grafo* g)
{
	if (g->N == 0)
		return 1;
	return 0;
}

void exibe(grafo* g)
{
	if (checaVazio(g))
		return;
	for (int i = 0; i < g->N; i++)
	{
		printf("\n");
		for (int j = 0; j < g->N; j++)
			printf("%d\t", g->M[i][j]);
		printf("\n");
	}
}