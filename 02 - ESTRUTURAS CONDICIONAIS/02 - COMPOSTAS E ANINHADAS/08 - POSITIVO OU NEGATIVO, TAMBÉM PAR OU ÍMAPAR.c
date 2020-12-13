#include <stdio.h>
#include <stdlib.h>

main(){
	int num;
	printf("insere um numero: ");
	scanf("%d", &num);
	
	if(num > 0){
		printf("\no numero %d eh POSITIVO!\n\n", num);
		if(num % 2 == 0)
			printf("o numero %i eh PAR!\n\n", num);
		else
			printf("o numero %d eh IMPAR!\n\n", num);
	} else
		printf("\no numero %i eh NEGATIVO!\n\n", num);
	system("pause");
	return 0;
}
