#include <stdlib.h>

// Structs podem ser alocados dinamicamente, e para acessar um ponteiro para struct
// Utiliza-se o "->" para acessar o espaço na memória

typedef struct totalnotas{
    int x;
    int y;
}Notas;

int main(){
    Notas* ptr = (Notas*) malloc(sizeof(Notas));
    ptr->x = 5;
}
