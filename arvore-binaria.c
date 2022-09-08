#include <stdio.h>
#include <stdlib.h>
/* Observações */
/*
    * É desperdiçado ou o left ou o right da raiz 
    * É possível sobrescrever um nó
    * Não tem função para visualizar a folha
*/
typedef struct no {
    char info;
    struct no *l;
    struct no *r;
} No;

No* criaPrimeiroNo(No* ptr){
    ptr = malloc(sizeof(No));
    int num; printf("Digite um número para o nó: "); scanf("%i", &num);
    ptr->info = num;
    return ptr;
}
No* criaEsquerda(No* ptr){
    ptr->l = malloc(sizeof(No));
    int num; printf("Digite um número para o nó: "); scanf("%i", &num);
    ptr->l->info = num;
    return ptr->l;
}
No* criaDireita(No* ptr){
    ptr->r = malloc(sizeof(No));
    int num; printf("Digite um número para o nó: "); scanf("%i", &num);
    ptr->r->info = num;
    return ptr->r;
}

int main() {
    No* raiz;
    No* folha;
    while (1){
        printf("Qual operação você deseja fazer?\n");
        printf("[1] Primeiro Nó\n[2] Criar nó na esquerda\n[3] Criar nó na direita\n");
        int var; scanf("%i", &var);
        if (var == 1){
            //printf("%p\n", raiz);
            raiz = criaPrimeiroNo(raiz); folha = raiz;
            printf("%p\n", raiz);
            //printf("%i\n", folha->info);
            //printf("%i\n", raiz->info);
        }
        else if (var == 2){
            folha = criaEsquerda(folha);
            //printf("%i\n", raiz->info);
            //printf("%i\n", folha->info);
        }
         else if (var == 3){
            folha = criaDireita(folha);
        }
        else
            printf("Opção inválida. Digite um número entre 1 e 3\n");
    }
}
