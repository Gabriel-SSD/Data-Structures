#include <stdio.h>
#include <stdlib.h>

//    - TODO: Implementar função pop

typedef struct no {
    char info;
    struct no *l;
    struct no *r;
} No;
No* busca (No* ptr, int info){
    while(ptr->info != info){
        if (info > ptr->info)
            ptr = ptr->r;
        else
            ptr = ptr->l;
        if (ptr == NULL)
            return NULL;
    }
    return ptr;
}
void pop(No* ptr, int info){
    No* pont =  busca(ptr, info);
    if (pont == NULL)
        exit(-1);
    if ((pont->r == NULL) && (pont->l == NULL))
        pont->info = 0;
	//Linha de baixo gera segmentation fault, a solução na linha de cima não desaloca espaço em memória, mas é o código continua funcional
    	//free(pont)	
    else if ((pont->r == NULL) || (pont->l == NULL)){
        if (pont->r == NULL){
            pont->info = pont->l->info;
            No* ptrtemp = pont->l->l;
            pont->l = ptrtemp;
        }
        else{
            pont->info = pont->r->info;
            No* ptrtemp = pont->r->r;
            pont->r = ptrtemp;
        }
    }
}
void imprime(No* ptr, int tab){
    for (int i = 0; i<tab;i++)
        printf("-");
    if (ptr != NULL){
        printf("%i\n", ptr->info);
        imprime(ptr->l, tab+tab);
        printf("\n");
        imprime(ptr->r, tab+tab);
    } else printf("NULL");
}
void insere(int valor, No* ptr){
    if (ptr->info == 0)             // Primeira inserção, que é a da raiz
        ptr->info = valor;         
    if (valor > ptr->info){
        if (ptr->r == NULL){
            ptr->r = malloc(sizeof(No));
            ptr->r->info = valor;
        }
        else {
            ptr = ptr->r;
            insere(valor, ptr);
        }
    }
    else if (valor < ptr->info){
        if (ptr->l == NULL){
            ptr->l = malloc(sizeof(No));
            ptr->l->info = valor;
        }
        else {
            ptr = ptr->l;
            insere(valor, ptr);
        }
    }
    else
        printf("Valor inválido\n");   
}
int main() {
    No* raiz = malloc(sizeof(No));
    while (1){
        printf("\n[1] Inserir novo nó\n[2] Imprimir árvore\n[3] Buscar nó\n[4] Excluir nó\n[5] Sair\n");  
        int opt; scanf("%i", &opt);
        if (opt==1){
            printf("Digite o valor do nó a ser inserido: ");
            int temp; scanf("%i", &temp);
            insere(temp, raiz);
        }
        else if (opt==2)
            imprime(raiz, 4);
        else if (opt==3){
            printf("Digite o nó que deseja achar: "); int tmpno; scanf("%i", &tmpno);
            printf("O nó está em: %p\n", busca(raiz, tmpno));
        }
        else if (opt==4){
            printf("Digite o valor do nó a ser excluído: "); int tmpno; scanf("%i", &tmpno);
            pop(raiz, tmpno);
        }
        else if (opt==5)
            exit(0);      
        else
            printf("Opção inválida. Digite um número entre 1 e 3\n");
    }
}
