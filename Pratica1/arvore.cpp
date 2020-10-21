#include "grafo.hpp"

int Grafo::menorChave(int chave[], bool floresta[]) {
	int min = INT_MAX, minIndex;
	
	for(int i = 0; i < this->vertices; i++)
		if(floresta[i] == false && chave[i] < min)
			min = chave[i], minIndex = i;
	return minIndex;
}

void Grafo::aMinPrim() {
	
}

int aMinKrus() {
	
}