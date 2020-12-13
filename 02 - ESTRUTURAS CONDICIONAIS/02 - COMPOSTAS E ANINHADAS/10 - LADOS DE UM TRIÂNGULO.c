#include <stdio.h>
#include <stdlib.h>

main(){
	int num1, num2, num3;
	printf("qual eh o primeiro numero? ");
	scanf("%d", &num1);
	printf("qual eh o segundo numero? ");
	scanf("%i", &num2);
	printf("qual eh o terceiro numero? ");
	scanf("%d", &num3);
	
	if(num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1){
		if(num1 == num2 && num2 == num3)
			printf("\ntriangulo equilatero.\n\n");
		else if(num1 == num2 || num2 == num3 || num1 == num3)
				printf("\ntriangulo isosceles.\n\n");
			else printf("\ntriangulo escaleno.\n\n");
	} else printf("\nnao eh um triangulo.\n\n");
	system("pause");
	return 0;
}
