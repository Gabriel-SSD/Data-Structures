#include <stdio.h>
#include <stdlib.h>

// Um vetor comum que é acessado como se fosse uma pilha
// Last in First 

typedef struct dpilha{int info;}Cel;

void inicializa(int* base, int* lim, int* topo, int* length){*base = 0;*topo = -1;*lim=*length-1;}

int pilhaCheia(int lim, int topo){  // Verifica se a pilha está cheia ou não
    if (lim == topo)
        return 1;
    else
        return 0;
}
int pilhaVazia(int topo, int base){   // Verifica se a pilha está vazia
    if (topo<base)
        return 1;
    else
        return 0;
}
void peek(Cel* pilha, int topo, int base){      // Analisa o topo da pilha
    if (pilhaVazia(topo, base) == 1)
        printf("Pilha vazia\n");
    else{
        printf("Valor do topo: %i\n", pilha[topo].info);
        printf("Endereço do topo: %p\n", &pilha[topo]);
    }
}
void push(Cel* pilha, int dado, int* base, int* lim, int* topo){    // Adiciona um elemento ao topo da pilha
    if (pilhaCheia(*lim, *topo)==1)
        printf("Pilha cheia\n");
    else {
        *topo += 1;
        pilha[*topo].info = dado;
    }
}
void printPilha(Cel* pilha, int lim, int topo){     // Imprime a pilha
    for (int c = 0; c<=topo;c++)
        printf("Posição %i: %i\n", c, pilha[c].info);
}
void pop(Cel* pilha, int* topo){        // Remove o topo da pilha
    *topo -= 1;
}

int main(){
    /* Inicialização da pilha */
    int length; printf("Qual é o tamanho da pilha? "); scanf("%i", &length);
    Cel pilha[length]; int base, lim, topo;
    inicializa(&base, &lim, &topo, &length);

    /* Interface de escolha */
    while (1){
        printf("Qual operação deseja realizar?\n");
        printf("[1] Push\n[2] Pop\n[3] Peek\n[4] Print\n[5] Exit\n");
        int opt; scanf("%i", &opt);
        
        if (opt == 1){
            printf("Digite um valor a ser inserido: ");
            int valor = 0; scanf("%i", &valor);
            push(pilha, valor, &base, &lim, &topo);
        }
        else if (opt == 2)
            pop(pilha, &topo);
        else if (opt == 3)
            peek(pilha, topo, base);
        else if (opt == 4)
            printPilha(pilha, lim, topo);
        else if (opt == 5)
            break;
        else
            printf("Opção inválida, digite valores entre 1 e 5\n");
    }  
}