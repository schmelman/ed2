#define SLEEP_SECONDS 15

#include <bits/stdc++.h>

using namespace std;

/**
 * @class Grafo
 * @author ivo
 * @date 19/10/2020
 * @file grafo.h
 * @brief estrutura para a matriz de adjacencia
 */
class Grafo {
	int arestas = 0, **matriz, vertices = 0;
	public:
		// Buscas
		void bfs(int);
		void dfs(int);
		void dfsAux(int, vector<bool>&);

		// Arvore geradora minima
		int aMinPrim();
		int aMinKrus();

		// Caminhos
		int cMinBFS();//Busca em Largura
		int cMinDij();
		int cMinFloyd();

		// Utils
		int inserirAresta(int, int);
		int checaAresta(int, int);
		int iniciaGrafo(int);
		int carregaGrafo();
		int checaVazio();
		void exibe();
};

// Extras
void clearScreen();
void flush (istream& in);
void pause();