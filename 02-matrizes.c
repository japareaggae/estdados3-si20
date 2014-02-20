/*
 * Uma matriz é um vetor bidimensional.
 */

#include <stdio.h>

int main(void){

	// Declaração da matriz
	int matriz[3][3];

	// Declaração das variáveis para utilização no for
	int linha, coluna;
	int valor = 0;

	// Populamos a matriz com múltiplos de 5
	for (linha = 0; linha < 3; linha++){
		for (coluna = 0; coluna < 3; coluna++){
			matriz[linha][coluna] = valor;
			valor += 5;
		}
	}

	// Mostramos o conteúdo da matriz
	for (linha = 0; linha < 3; linha++){
		for (coluna = 0; coluna < 3; coluna++){
			printf("linha %d, coluna %d: %d\n", linha, coluna, matriz[linha][coluna]);
		}
	}

	// Em formato mais gráfico
	for (linha = 0; linha < 3; linha++){
		for (coluna = 0; coluna < 3; coluna++){
			printf("%2d ", matriz[linha][coluna]);
		}
		printf("\n");
	}
}
