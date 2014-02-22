/*
 * Uma matriz é um vetor bidimensional.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	// Declaração da matriz
	// Para fins de comodidade, declaramos uma matriz quadrada.
	int tamanho = 3;

	int matriz[tamanho][tamanho];

	// Declaração das variáveis para utilização no for
	int linha, coluna;
	int valor = 0;

	// Populamos a matriz com múltiplos de 5
	for (linha = 0; linha < tamanho; linha++){
		for (coluna = 0; coluna < tamanho; coluna++){
			matriz[linha][coluna] = valor;
			valor += 5;
		}
	}

	// Mostramos o conteúdo da matriz
	for (linha = 0; linha < tamanho; linha++){
		for (coluna = 0; coluna < tamanho; coluna++){
			printf("linha %d, coluna %d: %d\n", linha, coluna, matriz[linha][coluna]);
		}
	}

	// Em formato mais gráfico
	for (linha = 0; linha < tamanho; linha++){
		for (coluna = 0; coluna < tamanho; coluna++){
			printf("%2d ", matriz[linha][coluna]);
		}
		printf("\n");
	}

	exit(0);
}
