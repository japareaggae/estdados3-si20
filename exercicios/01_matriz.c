/*
 * 2014-02-19 - 01
 * Implemente um programa para somar todos os elementos
 * da diagonal principal de uma matriz 4x4
 */

#include <stdio.h>
int main(int argc, char* argv[]){

	// matriz[filas][colunas]
	int matriz[4][4];

	matriz[0][0] = 4;
	matriz[1][1] = 8;
	matriz[2][2] = 12;
	matriz[3][3] = 16;

	int soma = 0;
	int i;

	for (i = 0; i < 4; i++){
		soma += matriz[i][i];
	}

	printf("%d\n", soma);
	return soma;
}

