#include <stdio.h>

// Implementação de merge de dois arquivos ordenados em um novo ordenado
// Não consegui implementar o loop de acordo com EOF
// Utilizei o valor 77 como final do arquivo

int main(){
	FILE* arq1 = fopen("arquivos/merge1.txt", "r");
	FILE* arq2 = fopen("arquivos/merge2.txt", "r");
	FILE* arq3 = fopen("arquivos/merge3.txt", "w");
	int n1; int n2; fscanf(arq1, "%i", &n1); fscanf(arq2, "%i", &n2);
	while((n1 != 77)||(n2 != 77)){
		if (n1<n2){
			fprintf(arq3, "%i\n", n1);
			fscanf(arq1, "%i", &n1);
		}
		else if (n1>n2){
			fprintf(arq3, "%i\n", n2);
			fscanf(arq2, "%i", &n2);
		}
		else {
			fprintf(arq3, "%i\n", n2);
			fscanf(arq1, "%i", &n1);
			fscanf(arq2, "%i", &n2);
		}
		if (n2 == EOF){
			n2 = 777;
			printf("bumb");
		}
	}
}
