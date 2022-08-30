#include <stdio.h>
#include <stdlib.h>

// Um vetor comum que é acessado como se fosse uma pilha

/* TODO*/
// Trocar valores estáticos por entrada do usuário

typedef struct dpilha{int info;}Cel;

void inicializa(int* base, int* lim, int* topo){*base = 0;*topo = -1;*lim=9;}
int pilhaCheia(int lim, int topo){
    if ((lim - topo) == 0)
        return 1;
    else
        return 0;
}
void push(Cel* pilha, int dado, int* base, int* lim, int* topo){
    if (pilhaCheia(*lim, *topo)==1){
        printf("Pilha cheia.\n");
        exit(-1);
    }
    else {
        *topo += 1;
        pilha[*topo].info = dado;
    }
}
void printPilha(Cel* pilha, int lim, int topo){
    for (int c = 0; c<=topo;c++)
        printf("Posição %i: %i\n", c, pilha[c].info);
}
void pop(Cel* pilha, int* topo){
    *topo -= 1;
}
int main(){
    Cel pilha[10]; int base, lim, topo;
    inicializa(&base, &lim, &topo);
    for(int c = 0; c<10;c++){
        int dado; scanf("%i", &dado);
        push(pilha, dado, &base, &lim, &topo);
    }
    pop(pilha, &topo);
    printPilha(pilha, lim, topo);    
}