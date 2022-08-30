#include <stdio.h>
#include <stdlib.h>
int addFinal(); int addInicio(); int removeNo(); int printLL();

typedef struct no{int dado; struct no* next;}No;

int main(){
    int opt;
    No* start = malloc(sizeof(No));

    printf("Seja bem-vindo ao criador de linked list 3000.\n\n");
    while (1){
        printf("Qual opereação deseja realizar?\n");
        printf("[1] Adicionar nó no final\n[2] Adicionar nó no início\n[3] Remover um nó\n[4] Imprimir a lista\n[5] Sair\n\n");
        scanf("%i", &opt);
        if (opt == 1)
            addFinal(start);
        else if (opt == 2){
            //addInicio();
        }
        else if (opt == 3){
            //removeNo();
        }
        else if (opt == 4){
            printLL(start);
        }
        else if (opt == 5)
            exit(0);
        else{
            printf("Opção inválida\n");
        }
    }
}
int addFinal(No* ptr){
    if (qtdNo > 1){
        while(ptr->next != NULL)
            ptr = ptr->next;
        printf("Digite o valor do nó: ");
        int valor; scanf("%i", &valor);
        ptr->next = malloc(sizeof(No));
        ptr = ptr->next; ptr->dado = valor;
    }
    printf("Valor adicionado com sucesso\n\n");
}
int printLL(No* ptr){
    int c = 0;
    while(ptr != NULL){
        printf("Nó %i:\nEnd: %p\nDado: %i\n\n", c, ptr, ptr->dado);
        c++; ptr = ptr->next;
    }
}