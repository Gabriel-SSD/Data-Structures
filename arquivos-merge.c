#include <stdio.h>
int main(){
	FILE* arq1 = fopen("arquivos/merge1.txt", "r");
	FILE* arq2 = fopen("arquivos/merge2.txt", "r");
	FILE* arq3 = fopen("arquivos/merge3.txt", "w");
	int n1; int n2; fscanf(arq1, "%i", &n1); fscanf(arq2, "%i", &n2);
	while((!feof(arq1))||(!feof(arq2))){
		printf("n1=%i, n2=%i\n", n1, n2);
		fscanf(arq1, "%i", &n1); fscanf(arq2, "%i", &n2);
	}
}
