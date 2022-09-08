#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    char info;
    struct no *l;
    struct no *r;
} No;

criaNo(int opt){
    if (opt == 1){

    }
    else if (opt == 2){

    }
    else if (opt == 3){
        
    }
}

int main() {
    No* raiz;
    while (1){
        printf("Qual operação você deseja fazer?\n"); int var; scanf("%i", &var);
        printf("[1] Primeiro Nó\n[2] Criar nó na esquerda\n[3] Criar nó na direita\n");
        if (var == 1)
            criaNo(1);
        else if (var == 2)
            criaNo(2);
        else if (var == 3)
            criaNo(3);
        else
            printf("Opção inválida. Digite um número entre 1 e 3\n");
    }
}
