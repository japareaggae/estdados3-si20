#include <stdio.h>

main(){
	struct Box{
		int x;
		int y;
	};

	struct Box Caixa;

	Caixa.x = 4;
	Caixa.y = 6;

	printf("%d\n", Caixa.x);
	printf("%d\n", Caixa.y);

}
