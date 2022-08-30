#include <stdio.h>
#include <stdlib.h>

int atribui(int qtd, int* ptr_start){
    int soma = 0; printf("Array alocado dinamicamente:\n");
    for(int x = 0; x<qtd; x++){
        ptr_start[x] = x+1;
        soma += ptr_start[x];
        printf("%i ", ptr_start[x]);
    }
    printf("\nSomatório: %i\n", soma);
    printf("Média: %i\n", soma/qtd);
    free(ptr_start);
}

int* inicializa(int qtd){
    int* pinicio = malloc(qtd * sizeof(int));
    return pinicio;
}
int main(){
    int* ptr_start = inicializa(5);
    atribui(5, ptr_start);
}