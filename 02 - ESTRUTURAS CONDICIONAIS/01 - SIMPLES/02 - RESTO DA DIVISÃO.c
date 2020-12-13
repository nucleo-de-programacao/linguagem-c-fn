#include <stdio.h>
#include <stdlib.h>

main(){
	int num1, num2, resto;
	printf("qual eh o primeiro numero? ");
	scanf("%d", &num1);
	printf("qual eh o segundo numero? ");
	scanf("%i", &num2);
	
	if(num1 > num2){
		resto = num1 % num2;
		printf("o resto da divisao de %d com %i, eh igual a %d \n\n", num1, num2, resto);
	}
	
	if(num1 < num2){
		resto = num2 % num1;
		printf("o resto da divisao de %d com %i, eh igual a %d \n\n", num2, num1, resto);
	}
	
	system("pause");
	return 0;
}
