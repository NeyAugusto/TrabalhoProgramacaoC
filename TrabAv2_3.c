#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i, contador = 0, troca, copia, vetor[100], j, tam = 100;

    srand(time(NULL));

    for(i = 0; i < tam; i++){
        vetor[i] = rand() % 1000;
    }

    printf("Antes da ordenacao:\n");
    for(i = 0; i < tam; i++){
        printf("%3d ", vetor[i]);
    }

    for (i = 1; i < tam; i++){
        copia = vetor[i];
        j = i;
        troca = 0;
        contador++;
            while (j > 0 && vetor[j-1] > copia){
                vetor[j] = vetor[j-1];
                j--;
                vetor[j] = copia;
                troca = 1;
            }
    }
    
    printf("\nApos a ordenacao: Contador: %d\n", contador);
    for(i = 0; i < 100; i++){
        printf("%3d ", vetor[i]);
    }

    typedef struct no{
        int valor;
        struct no *direita;
        struct no *esquerda;        
    }No;

    void criarArvore(No **raiz){
        *raiz == NULL;
    }
    
    void inserir (No **raiz, int num){
        if(*raiz == NULL){
            *raiz = (No *)malloc(sizeof(No));
            (*raiz)->valor = num;
            (*raiz)->esquerda = NULL;
            (*raiz)->direita = NULL;
        }
        else{
            if(num < ((*raiz) -> valor)){
                inserir(&((*raiz) -> esquerda),num);
                }
            else{
                inserir(&((*raiz) -> direita),num);
            }
        }
    }
    
    void imprimirEmOrdem (No *raiz){
        if(raiz != NULL){
            imprimirEmOrdem(raiz -> esquerda);
            printf("%d", raiz -> valor);
            imprimirEmOrdem(raiz -> direita);
        }
    }

    int contarNos(No *raiz){
        if(raiz == NULL)
            return 0;
        else
            return 1 + contarNos(raiz->esquerda) + contarNos(raiz->direita);
    }      
}   