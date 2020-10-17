#include <stdio.h>
#include <stdlib.h>


typedef struct
{
	int **M; //Ponteiro que aponta na matriz
	int N; //Número de elementos - Ordem da Matriz
} grafo;//Matriz de adjacencia

// Criar e carregar o grafo do txt
int CriaGrafoVazio(grafo *g);
int CarregaGrafo(grafo *g, int nvert); //nvert - Número de vertices

// Buscas
int BuscaLargura();
int DFS_rec();

// Arvore geradora minima
int AGeradoraMinPrim();
int AGeradoraMinKrus();

// Caminhos
int CaminhosMinBFS();//Busca em Largura
int CaminhosMinDij();
int CaminhosMinFloyd();
int Vazio(grafo *g);


// Operações sem retorno
void ExibeGrafo(grafo *g);
void BuscaProfundidade();