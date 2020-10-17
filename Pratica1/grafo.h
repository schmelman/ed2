#include <stdio.h>
#include <stdlib.h>


typedef struct
{
	int **M; //Ponteiro que aponta na matriz
	int N; //Número de elementos - Ordem da Matriz
} grafo;//Matriz de adjacencia

// Criar e carregar o grafo do txt
int carregaGrafo();

// Buscas
int bLargura();
void bProfundidade();
int DFS_rec();

// Arvore geradora minima
int arvoreMinPrim();
int arvoreMinKrus();

// Caminhos
int cMinBFS();//Busca em Largura
int cMinDij();
int cMinFloyd();

// Utils
int checaVazio(grafo *g);
void exibe(grafo *g);