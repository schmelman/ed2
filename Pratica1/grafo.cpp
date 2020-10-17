#include "grafo.h"

int CarregaGrafo(grafo *g, int nvert){

}

int Vazio(grafo *g){
    return (g->N==0);
}

void ExibeGrafo(grafo *g){
 if(Vazio(g)) return;
    int i,j;
    for(i=0;i<g->N;i++)
    {
    printf("\n");
         for(j=0;j<g->N;j++)
        {
            printf("%d\t",g->M[i][j]);
        }
    }
}