#include <stdio.h>
#include <stdlib.h>

// Implementação simples de fila, utilizando vetores.

void imprime(int* inicio, int* fim){
	while(inicio<fim){
		printf("%i->",*inicio);
		inicio+=1;
	}
	if (inicio == fim) {printf("%i\n\n", *inicio); inicio+=1;}
	else printf("Fila vazia\n\n");
}
int main(){
	int fila[10]; int* start; int* end;
	printf("Digite 10 valores separados por <enter>\n");
	for (int c =0; c<10;c++)
		scanf("%i", &fila[c]);
	start = &fila[0];
	end = &fila[9];
	while(1){
		printf("Qual operação deseja realizar?\n[1] Diminuir 1 da fila\n[2] Imprimir lista\n[3] Sair\n");
		int opt; scanf("%i", &opt);
		if (opt == 1){
			if (start>end) printf("Fila vazia\n\n");
			else{
				printf("O %i estava mais tempo na fila, por isso foi liberado\n\n", *start);
				start += 1;
			}
		}
		else if (opt == 2)
			imprime(start, end);
		else
			exit(0);
		}
}
