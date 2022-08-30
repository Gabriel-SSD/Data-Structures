#include <stdio.h>

int main(void) {
// Ponteiro é uma variável destinada a armazenar endereços.
// A variável que está sendo apontada, pode ter seu valor modificado por ponteiros
    int a = 5;
    printf("Valor de a: %i\nEnd. de a: %p\n\n",a, &a);
    int* pa = &a;
    printf("Valor de pa: %i\nEnd. de pa: %p\nEnd. apontado: %p\n\n", *pa, &pa, pa);
    *pa = 6;
    printf("~~~~ Valor alterado através do ponteiro ~~~~\n\n");
    printf("Valor de a: %i\n", a);
    printf("Valor de pa: %i\n\n", *pa);
    printf("~~~~ Valor alterado através da variável ~~~~\n\n");
    printf("Valor de a: %i\n", a);
    printf("Valor de pa: %i\n\n", *pa);

// Nota que o operador "&" obtém o endereço daquela variável
// Já o operador "*" obtém o valor da variável apontada pelo ponteiro
}


