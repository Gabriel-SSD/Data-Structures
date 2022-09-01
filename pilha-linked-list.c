#include <stdio.h>
#include <stdlib.h>

typedef struct no{int dado; struct no* next;}No;

void push(); void pop(); void printLL();

int main(){
    int opt; No* head = malloc(sizeof(No));
    

    printf("Seja bem-vindo ao criador de linked list 3001.\n\n");
    while (1){
        printf("Qual opereação deseja realizar?\n");
        printf("[1] Push\n[2] Pop\n[3] Imprimir a lista\n[4] Sair\n\n");
        scanf("%i", &opt);
        if (opt == 1)
            push(head);
        /* else if (opt == 2)
            //pop();
        else if (opt == 3)
            //printLL(); */
        else if (opt == 4)
            exit(0);
        else
            printf("Opção inválida\n");
    }
}

void push(No* head) {
    int valor; printf("Digite o valor do nó: ");
    scanf("%i", &valor);
    head->dado = valor;
    head->next = malloc(sizeof(No));
    head = head->next;
}

void printLL(){

}