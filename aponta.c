#include <stdio.h>

main(){
	int var1 = 3;
	int var2 = 1;
	int var3 = 0;
	int soma;
	// int soma = var1 + var2 + var3;

	int* ponteiro1;
	int* ponteiro2;
	int* ponteiro3;
	int* ponteirosoma;

	ponteiro1 = &var1;
	ponteiro2 = &var2;
	ponteiro3 = &var3;
	ponteirosoma = &soma;

	*ponteirosoma = *ponteiro1 + *ponteiro2 + *ponteiro3;

	printf("ponteiro1 aponta para %p (valor %d)\n", ponteiro1, *ponteiro1);
	printf("ponteiro2 aponta para %p (valor %d)\n", ponteiro2, *ponteiro2);
	printf("ponteiro3 aponta para %p (valor %d)\n", ponteiro3, *ponteiro3);
	printf("ponteirosoma aponta para %p (valor %d)\n", ponteirosoma, *ponteirosoma);
}
