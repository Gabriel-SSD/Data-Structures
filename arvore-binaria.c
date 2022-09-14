#include <stdio.h>
#include <stdlib.h>
/* Observações */
/*
    - TODO: Implementação função de imprimir
*/
typedef struct no {
    char info;
    struct no *l;
    struct no *r;
} No;
void insere(int valor, No* ptr){
    if (valor > ptr->info){
        if (ptr->r == NULL){
            ptr->r = malloc(sizeof(No));
            ptr->r->info = valor;
            // printf("check");
        }
        else {
            ptr = ptr->r;
            insere(valor, ptr);
        }
    }
    else if (valor < ptr->info){
        if (ptr->l == NULL){
            ptr->l = malloc(sizeof(No));
            ptr->l->info = valor;
            // printf("check");
        }
        else {
            ptr = ptr->l;
            insere(valor, ptr);
        }
    }
    else
        printf("Valor inválido\n");   
}
int main() {
    No* raiz = malloc(sizeof(No));
    while (1){
        printf("[1] Inserir novo nó\n[2] Imprimir árvore\n[3] Sair\n");  
        int opt; scanf("%i", &opt);
        if (opt==1){
            printf("Digite o valor do nó a ser inserido: ");
            int temp; scanf("%i", &temp);
            insere(temp, raiz);
        }
        /* else if (opt==2){
            imprime();
        }*/
        else if (opt==3){
            exit(1);
        }       
        else
            printf("Opção inválida. Digite um número entre 1 e 3\n");
    }
}
