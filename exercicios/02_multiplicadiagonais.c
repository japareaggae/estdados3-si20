/*
 * 2014-02-19 - 02
 * Implemente um programa para multiplicar todos os elementos diferentes de 0
 * da diagonal principal com os elementos da diagonal secundário da matriz 3x3
 */

#include <stdio.h>

int main(int argc, char* argv[]){
	int tamanho = 3;

	int matriz[tamanho][tamanho];

	matriz[0][0] = 2;
	matriz[1][1] = 4;
	matriz[2][2] = 6;

	matriz[0][2] = 8;
	matriz[2][0] = 0;

	int soma = 0;

	int i;
	int j = tamanho - 1;

	for (i = 0; i < 3; i++){
		int resultado = matriz[i][i] * matriz[i][j];
		printf("%d\n", resultado);
		soma += resultado;
		j--;
	}

	printf("%d\n", soma);
	return soma;
}
