#include <stdio.h>

int calculaMediaV(int x, int y) {
    return((x+y)/2);
}
int calculaMediaP(int* m, int* n){
    return((*m+*n)/2);
}
int main(void){
    // Exemplo de utilização de ponteiros em funções
    int a, b;
    a = 7, b=10;
    printf("A média é: %i\n\n", calculaMediaV(a, b));

    int c, d;
    c = 10, d = 20;
    printf("A média é: %i\n", calculaMediaP(&c, &d));
}