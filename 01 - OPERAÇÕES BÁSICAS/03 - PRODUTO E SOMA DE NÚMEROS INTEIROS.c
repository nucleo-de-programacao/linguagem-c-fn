#include <stdio.h>
#include <stdlib.h>

main(){
	int num1, num2, produto, soma;
	printf("qual eh o primeiro numero? ");
	scanf("%i", &num1);
	printf("qual eh o segundo numero? ");
	scanf("%d", &num2);
	produto = num1 * num2;
	soma = produto + num1;
	printf("\no produto entre %d e %i eh igual a %d\n\n", num1, num2, produto);
	system("pause");
	return 0;
}
