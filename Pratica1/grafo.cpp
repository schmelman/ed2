#include "grafo.h"


//Criar e carregar o grafo do txt
int CriaGrafoVazio(grafo *g){

}

int CarregaGrafo(grafo *g, int nvert){

}

//buscas
int BuscaLargura(){

}
/*
void BuscaProfundidade(grafo *g, int v){
 int Pilha[G->N];
    int visitados[G->N];
    for(int i =0;o<G->N;i++)
        {
            visitados[i] =0;
        }
    DFS_rec(G,Pilha,visitados,v,&fp);
}
int DFS_rec(grafo *g, int P[], int visitado[], int v,int *fp){
        visitados[v]++;
        P[fp] = v;
        fp++;
        No* q = G->L[v];
        for(q=G->[v];q!=NULL;q=q->prox)
        {   
            if(visitados(q->vert)==0)//Criar visitados
            {
                printf("(%d,%d) - ",v,q->vert);
                DFS_rec(G,P,visitados,q->vert,fp);
            }

            if(EstaNaPilha(q->vert,P) && (P[fp-2] != q->vert))//Criar EstaNaPilha
                printf("(%d,%d) - ",v,q->vert);
        }//close for
        *fp--;
}
*/

//árvore geradora minima
int AGeradoraMinPrim(){

}

int AGeradoraMinKrus(){

}

//caminhos
int CaminhosMinBFS(){

}

int CaminhosMinDij(){

}

int CaminhosMinFloyd(){

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