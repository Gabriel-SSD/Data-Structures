#include <stdio.h>

// Struct é um tipo de dado composto, que pode armazenar vários tipos primitivos.

int main(){
    struct coordenadas {int x; float y; float z;};
    struct coordenadas c;   // Declara a variável c, do tipo struct coordenadas
                            // Através dela, é possível acessar a estrutura do struct
    c.x = 10;
    c.y = 7.2;              // O acesso tanto de leitura, quanto escrita, é feita atraves do "."
    c.z = 6.3;
    printf("X: %i\nY: %f\nZ: %f", c.x, c.y, c.z);
}