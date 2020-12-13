#include <stdio.h>
#include <stdlib.h>

main(){
	int valor = 0, soma = 0;
	printf("insere um valor de 0 a 999: ");
	scanf("%d", &valor);
	
	soma += valor % 10;
	valor /= 10;
	
	soma += valor % 10;
	valor /= 10;
	
	soma += valor % 10;
	valor /= 10;
	
	printf("\na soma dos digitos eh %i \n\n", soma);
	system("pause");
	return 0;
}
