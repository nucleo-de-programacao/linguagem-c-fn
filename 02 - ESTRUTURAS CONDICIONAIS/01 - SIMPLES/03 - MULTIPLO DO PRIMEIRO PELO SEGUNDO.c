#include <stdio.h>
#include <stdlib.h>

main(){
	int num1, num2, mult;
	printf("qual eh o primeiro numero? ");
	scanf("%d", &num1);
	printf("qual eh o segundo numero? ");
	scanf("%i", &num2);
	
	if(num1 >= num2 && num1 % num2 == 0)
		printf("o numero %d eh multiplo do numero %i \n\n", num1, num2);
	system("pause");
	return 0;
}
