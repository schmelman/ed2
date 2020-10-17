/***************************************************************
* Alunos: Murilo Fuza da Cunha & Ivo Henrique 
* Curso: Bacharelado (Licenciatura) em Ciências da Computação
*
* Lista 2: Grafos - Implementações
*
* Estrutura de Dados II - 2020 -- DACC/UNIR, - Profa.Carolina Watanabe
* Compilador: Visual Studio Code versão ... 1.50.1
* Sistema Operacional: Windowns 10 Pro x64
***************************************************************/

#include "grafo.h"

int main() {
    int op = 0;
    do {
        printf("\n        |-  -   MENU    -   -|\n");
        printf("\n1   -   Carregar grafo de um arquivo texto");
        printf("\n2   -   Imprimir o grafo");
        printf("\n3   -   Busca em Largura(BFS)");
        printf("\n4   -   Busca em Profundidade(DFS)");
        printf("\n5   -   Arvore Geradora Minima (Algoritmo de Prim)");
        printf("\n6   -   Arvore Geradora Minima (Algoritmo de Kruskal)");
        printf("\n7   -   Caminhos Minimos - Busca em Largura (BFS)");
        printf("\n8   -   Caminhos Minimos - Dijkstra");
        printf("\n9   -   Caminhos Minimos - Floyd-Warshall");
        printf("\nOpcao: ");
        scanf("%d", &op);

        switch(op) {

            case 1:
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
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
