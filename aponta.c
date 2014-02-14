#include <stdio.h>

main(){
	// Declaração das variáveis normais
	int var1 = 3;
	int var2 = 1;
	int var3 = 0;
	int soma;

	// Declaração dos ponteiros. Perceba o asterisco no int*
	int* ponteiro1;
	int* ponteiro2;
	int* ponteiro3;
	int* ponteirosoma;

	// Valor da variável ponteiro = Endereço de memória da variável normal
	// (perceba o & na frente)
	ponteiro1 = &var1;
	ponteiro2 = &var2;
	ponteiro3 = &var3;
	ponteirosoma = &soma;

	// Some as variáveis pra onde ponteiro1, 2, 3 apontam e salve onde ponteirosoma aponta
	*ponteirosoma = *ponteiro1 + *ponteiro2 + *ponteiro3;

	// Imprime tudo
	printf("ponteiro1 aponta para %p (valor %d)\n", ponteiro1, *ponteiro1);
	printf("ponteiro2 aponta para %p (valor %d)\n", ponteiro2, *ponteiro2);
	printf("ponteiro3 aponta para %p (valor %d)\n", ponteiro3, *ponteiro3);
	printf("ponteirosoma aponta para %p (valor %d)\n", ponteirosoma, *ponteirosoma);
}
