#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int i, contador = 0, troca, copia, vetor[100], j, menor, tam = 100;

		srand(time(NULL));

		for(i = 0; i < 100; i++){
			vetor[i] = rand() % 1000;
		}

		printf("Antes da ordenacao:\n");
		for(i = 0; i < 100; i++){
			printf("%3d ", vetor[i]);
		}

		for (i = 0; i < tam - 1; i++){
			menor = i;
			troca = 0;
			contador++;
			for (j = i; j < tam; j++){
				if (vetor[j] < vetor[menor])
					menor = j;
					copia = vetor[menor];
					vetor[menor] = vetor[i];
					vetor[i] = copia;
					troca = 1;
			}
		}

		printf("\nApos a ordenacao: Contador: %d\n", contador);
		for(i = 0; i < 100; i++){
			printf("%3d ", vetor[i]);   
		}
		return 0;
}