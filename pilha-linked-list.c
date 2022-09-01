#include <stdio.h>
#include <stdlib.h>

typedef struct no{int dado; struct no* next;}No;
typedef struct pilha{No* head;}Pilha;

void push(); void pop(); Pilha* init(); void peak();

int main(){
    int opt; Pilha* pilha = init();

    printf("Seja bem-vindo ao criador de linked list 3001.\n\n");
    while (1){
        printf("Qual opereação deseja realizar?\n");
        printf("[1] Push\n[2] Pop\n[3] Peak\n[4] Sair\n\n");
        scanf("%i", &opt);
        if (opt == 1){
            push(pilha);
        }
        /* else if (opt == 2)
            pop(); */
        else if (opt == 3){
            peak(pilha);
        } 
        else if (opt == 4)
            exit(0);
        else
            printf("Opção inválida\n");
    }
}

Pilha* init(){
    Pilha* pilha = malloc(sizeof(No));      // Inicializa uma pilha
    pilha->head = NULL;                     // Atribui NULL ao head
    return pilha;              
}
void push(Pilha* pilha) {
    int valor; printf("Digite o valor do nó: ");
    scanf("%i", &valor);
    No* novo = malloc(sizeof(No));          // Aloca um nó
    novo->dado = valor;                     // Atribui valor ao nó
    novo->next = pilha->head;               //     ?
    pilha->head = novo;                     // head é o novo nó
}

/* void *pop(){
    
} */

void peak(Pilha* pilha){
    printf("Head: %i\n", pilha->head->dado);
    printf("Endereço: %p\n", pilha->head);
}