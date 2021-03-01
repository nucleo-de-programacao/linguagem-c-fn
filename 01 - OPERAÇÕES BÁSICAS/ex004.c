#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	int num1, num2, produto, soma;
	
	printf("Por favor! Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Por favor! Digite o segundo número: ");
	scanf("%i", &num2);
	produto = num1 * num2;
	soma = produto + num1;
	printf("O produto entre  %d e %i é igual a %d \n", num1, num2, produto);
	printf("A soma entre  %d e %i é igual a %d \n\n", produto, num2, soma);
	system("pause");
	return 0;
}
