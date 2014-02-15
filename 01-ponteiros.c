/*
 * Um ponteiro é um objeto cujo valor se refere diretamente ao valor de memória
 * de um outro objeto armazenado na memória.
 *
 * Ponteiros tem performance excelente para tarefas repetitivas como navegar em
 * strings, tabelas ou em árvores de dados.
 *
 * Em termos simples: Pense numa variável que armazena A LOCALIZAÇÃO de outra variável.
 */

#include <stdio.h>

int main(void){
	// Declaração das variáveis normais
	int var1 = 3;
	int var2 = 1;
	int var3 = 0;
	int soma;

	// Declaração dos ponteiros. Perceba o asterisco no int*
	// Você pode criar ponteiros "tipo neutro" usando 'void*', mas se possível
	// declare ponteiros com tipos definidos para que o código seja mais legível
	int* ponteiro1;
	int* ponteiro2;
	int* ponteiro3;
	int* ponteirosoma;

	// REFERÊNCIA - Obtemos o endereço de memória de uma variável e armazenamos num ponteiro.
	// Caractere especial: '&'
	//
	// Valor da variável ponteiro = Endereço de memória da variável normal
	ponteiro1 = &var1;
	ponteiro2 = &var2;
	ponteiro3 = &var3;
	ponteirosoma = &soma;

	// DEREFERÊNCIA - Navegamos até o endereço de memória armazenado num ponteiro e obtemos o
	// valor armazendo na variável neste endereço. Caractere especial: '*'
	//
	// Pegue as variáveis para onde ponteiro{1,2,3} apontam, e armazene o
	// resultado na variável para onde ponteirosoma aponta.
	*ponteirosoma = *ponteiro1 + *ponteiro2 + *ponteiro3;

	// Imprime tudo
	printf("ponteiro1 aponta para %p (valor %d)\n", ponteiro1, *ponteiro1);
	printf("ponteiro2 aponta para %p (valor %d)\n", ponteiro2, *ponteiro2);
	printf("ponteiro3 aponta para %p (valor %d)\n", ponteiro3, *ponteiro3);
	printf("ponteirosoma aponta para %p (valor %d)\n", ponteirosoma, *ponteirosoma);

	return soma;
}
