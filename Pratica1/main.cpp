/***************************************************************
* Alunos: Murilo Fuza da Cunha & Ivo Henrique 
* Curso: Bacharelado (Licenciatura) em Ciências da Computação
*
* Lista 2: Grafos - Implementações
*
* Estrutura de Dados II - 2020 -- DACC/UNIR, - Profa.Carolina Watanabe
* Compilador: gcc version 9.2.0 (tdm64-1) [https://jmeubank.github.io/tdm-gcc]
* Sistema Operacional: Windows 10 Pro
***************************************************************/

#include "grafo.hpp"

int main() {
	int op = 0;
	Grafo g;
	do {
		clearScreen();
		cout << ">>>TODOS OS METODOS (EXCETO O 1) FICAM EXIBIDOS NA TELA DURANTE 15 SEGUNDOS ANTES DE VOLTAR AO MENU<<<" << endl
			 << "1 - carregar" << endl
			 << "2 - exibir" << endl
			 << "3 - busca em largura" << endl
			 << "4 - busca em profundidade" << endl
			 << "5 - arvore geradora minima (prim)" << endl
			 << "6 - arvore geradora minima (kruskal)" << endl
			 << "7 - caminho minimo (busca em largura)" << endl
			 << "8 - caminho minimo (dijkstra)" << endl
			 << "9 - caminho minimo (floyd)" << endl
			 << ">>> menu.: ";
		cin >> op;
		switch(op) {
			case 1:
				g.carregaGrafo();
				break;

			case 2:
				g.exibe();
				break;

			case 3:
				g.bfs(0);
				break;

			case 4:
				g.dfs(0);
				break;

			case 5:
				break;

			case 6:
				break;

			case 7:
				break;

			case 8:
				break;

			case 9:
				break;
		}
	} while(op != 0);
	return 0;
}
