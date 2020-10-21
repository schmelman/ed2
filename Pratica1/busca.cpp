#include "grafo.hpp"

void Grafo::bfs(int inicio) {
	vector<bool> visitados(vertices, false);
	vector<int> fila;
	fila.push_back(inicio);

	visitados[inicio] = true;

	int vis;
	while(!fila.empty()) {
		vis = fila[0];
		cout << vis << " ";
		fila.erase(fila.begin());

		for(int i = 0; i < this->vertices; i++) {
			if(this->matriz[vis][i] != PESO_DEF && (!visitados[i])) {
				fila.push_back(i);
				visitados[i] = true;
			}
		}
	}
	cout << endl;
	pause();
}

void Grafo::dfs(int inicio) {
	vector<bool> visitadosDFS(vertices, false);
	dfsAux(inicio, visitadosDFS);
	cout << endl;
	pause();
}

void Grafo::dfsAux(int inicio, vector<bool>& visitados) {
	cout << inicio << " ";
	visitados[inicio] = true;
	for(int i = 0; i < this->vertices; i++) {
		if(this->matriz[inicio][i] != PESO_DEF && (!visitados[i])) {
			dfsAux(i, visitados);
		}
	}
}