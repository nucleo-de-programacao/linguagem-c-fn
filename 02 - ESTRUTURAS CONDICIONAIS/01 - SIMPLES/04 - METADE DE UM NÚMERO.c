#include <stdio.h>
#include <stdlib.h>

main(){
	int num, metade;
	printf("insere um numero: ");
	scanf("%d", &num);
	if(num > 20){
		metade = num / 2;
		printf("a metade do numero %i, eh igual a %d \n\n", num, metade);
	}
	system("pause");
	return 0;
}
