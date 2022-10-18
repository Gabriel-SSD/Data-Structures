#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* arq;	// ptr para arquivo
	// Abre arquivo em modo de leitura
	arq = fopen("dados.txt","r");
	// Verifica se houve erro na abertura
	if (arq != NULL){
		// Enquanto não terminar o arquivo
		char c;	// Variável que recebe o char
		while ((c = fgetc(arq))!=EOF)
			printf("%c", c);
		fclose(arq);
	}
}
