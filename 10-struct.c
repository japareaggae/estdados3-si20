/*
 * Uma estrutura (palavra-chave: 'struct') é um container de dados que armazena
 * uma quantidade determinada de variáveis a serem utilizadas.
 *
 * Em termos Java: pense numa classe que não tem funções, apenas variáveis
 * Em termos simples: pense numa variável que guarda outras variáveis dentro
 */

#include <stdio.h>

int main(void){
	// Definimos uma estrutura "conta", com variáveis:
	// identidade, nome, saldo
	struct conta {
		int identidade;
		char* nome;
		float saldo;
	};
	
	// Criamos uma instância da estrutura "conta", com nome "user1"
	struct conta user1;

	// Atribuímos valores às variáveis de user1
	user1.identidade = 1;
	user1.nome = "John Doe";
	user1.saldo = 5555.44;

	// Imprime na tela
	printf("ID: %d\n", user1.identidade);
	printf("Nome: %s\n", user1.nome);
	printf("Saldo: %f\n", user1.saldo);

	return 0;
}

