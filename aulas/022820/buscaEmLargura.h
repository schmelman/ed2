#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct N
{
	int v; /* Valor do vértice */
	struct N* prox; /* Próximo elemento da lista */
} no;

typedef struct L
{
	no** cab; /* Cabeça da lista */
	int nV; /* Número de vértices */
} lista;

typedef struct Q
{
	int dado; /* Vértice na fila */
	struct Q* prox; /* Próximo elemento da fila */
} fila;

/* Grafos */
bool grafoVazio(lista*);
bool inserirAresta(lista*, int, int);
bool inserirArestaAux(lista*, int, int);
bool novoGrafo(lista*, int);
bool verificaAresta(lista*, int, int);
bool verticeValido(lista*, int);
bool removerAresta(lista*, int, int);
void exibirGrafo(lista*);

/* Busca em Lagura */
bool inserirNaFila(fila*, int);
bool removerDaFila(fila*, int);