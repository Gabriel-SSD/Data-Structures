#include <stdio.h>

// Troca simples de valores utilizando ponteiros

int troca(int* pa, int* pb){
    int* temp = pa;
    pa = pb;
    pb = temp;
    printf("Valor de A: %i\nValor de B: %i\n\n", *pa, *pb);
}
int main(){
    int a, b;
    a = 6, b = 8;
    printf("Valor de A: %i\nValor de B: %i\n\n", a, b);
    printf("A troca será feita\n\n");
    troca(&a, &b);
}
