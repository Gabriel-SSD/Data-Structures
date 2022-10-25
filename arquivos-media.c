#include <stdio.h>

int main(){
	/* 					Inicialização				*/
	FILE* arq; int sum = 0; int total = -1; int buffer;

	/* 	  Abertura de arquivo em modo de escrita	*/

	arq = fopen("arquivos/media.txt", "w");		
	printf("Calcula média (0 Encerra)\n");
	while(buffer != 0){
		scanf("%i", &buffer);
		fprintf(arq, "%i\n", buffer);
	}
	fclose(arq);

	/* 	  Abertura de arquivo em modo de leitura 	*/

	arq = fopen("arquivos/media.txt", "r"); buffer = 0;
	while (fscanf(arq, "%d", &buffer) != EOF){
		total ++; sum += buffer;
	}
	printf("Média: %i\n", sum/total);
}
