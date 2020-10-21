#define PESO_DEF -1
#include <bits/stdc++.h>

using namespace std;


struct Aresta {
	int v1, v2;
};
/**
 * @class Grafo
 * @author ivo
 * @date 19/10/2020
 * @file grafo.h
 * @brief estrutura para a matriz de adjacencia
 */
class Grafo {
	int vertices = 0, **matriz;
	vector<Aresta> arestas;
	public:
		// Buscas
		void bfs(int);
		void dfs(int);
		void dfsAux(int, vector<bool>&);

		// Arvore geradora minima
		void exibeFloresta(int[]);
		int menorChave(int[], bool[]);
		void aMinPrim();
		int aMinKrus();

		// Caminhos
		int cMinBFS();//Busca em Largura
		int cMinDij();
		int cMinFloyd();

		// Utils
		int inserirAresta(int, int, int);
		int checaAresta(int, int, bool);
		int iniciaGrafo(int);
		int carregaGrafo();
		int checaVazio();
		void exibe();
};

// Extras
void clearScreen();
void flush (istream& in);
void pause();