#include <stdio.h>
#include <stdlib.h>

void push(); void pop(); void printLL();

typedef struct no{int dado; struct no* next;}No;

int main(){
    int opt;
    printf("Seja bem-vindo ao criador de linked list 3000.\n\n");
    while (1){
        printf("Qual opereação deseja realizar?\n");
        printf("[1] Push\n[2] Pop\n[3] Imprimir a lista\n[4] Sair\n\n");
        scanf("%i", &opt);
        if (opt == 1)
            push();
        else if (opt == 2)
            pop();
        else if (opt == 3)
            printLL();
         else if (opt == 4)
            exit(0);
        else
            printf("Opção inválida\n");
    }
}
