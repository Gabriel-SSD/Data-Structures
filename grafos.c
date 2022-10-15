#include <stdio.h>
#include <stdlib.h>

// Comments: Segmentation fault no primeiro scanf

/* Inicialização dos structs */

typedef struct vizinho{
	int id;
	struct vizinho* ptrVizinho;
}Vizinho;

typedef struct grafo{
	int id;
	struct grafo* nextGrafo;
	struct vizinho* ptrVizinho;
}Grafo;

void insereVertice(int valor, Grafo* ptr){
	if (ptr->id==0)
		ptr->id = valor;
	else
		ptr->nextGrafo = malloc(sizeof(Grafo));
		ptr->nextGrafo->id = valor;
}
//void insereAresta(int origem, int destino){
//}
void imprime(Grafo* ptr){
	while(ptr->nextGrafo != NULL){
		printf("%i", ptr->id);
		imprime(ptr->nextGrafo);
	}	
}
int main(){
	Grafo* raiz = malloc(sizeof(Grafo));int temp;
	while (1){
        printf("\n[1] Inserir Vértice\n[2] Imprimir grafo\n[3] Buscar nó\n[4] Excluir nó\n[5] Sair\n");  
        int opt; scanf("%i", &opt);
        if (opt==1){
            printf("Digite o id do vértice a ser inserido: ");
            scanf("%i", &temp);
			printf("Check2");
//			printf("%i", raiz->id);
            insereVertice(temp, raiz);
			printf("Cheeck3");
			printf("%i", raiz->id);
        }
        else if (opt==2)
            imprime(raiz);
		/*
        else if (opt==3){
            printf("Digite o nó que deseja achar: "); int tmpno; scanf("%i", &tmpno);
            printf("O nó está em: %p\n", busca(raiz, tmpno));
        }
        else if (opt==4){
            printf("Digite o valor do nó a ser excluído: "); int tmpno; scanf("%i", &tmpno);
            //pop(raiz, tmpno);
        }
        else if (opt==5)
            exit(0);*/      
        else
            printf("Opção inválida. Digite um número entre 1 e 3\n");
    }
} 
