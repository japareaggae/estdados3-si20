/*
 * 2014-02-20 - 03
 * Implemente um programa para calcular o maior salario dos clientes do vetor
 *
 * clientes (cpf, nome, sexo, salario)
 */

#include <stdio.h>

int main(int argc, char* argv[]){
	// Definimos a estrutura cliente
	struct cliente {
		int cpf;
		char* nome;
		char sexo;
		float salario;
	};

	// Declaramos um vetor de clientes
	struct cliente clientes[5];

	// ALL THESE SCRATCHES MAKE ME RICH
	float emone = 420.00;

	int i;
	for (i = 0; i < 5; i++){
		clientes[i].salario = emone+=80;
	}

	int maior = 0;
	for (i = 0; i < 5; i++){
		if (clientes[i].salario > maior) maior = i;
	}

	printf("%d\n", i);
	return i;
}
