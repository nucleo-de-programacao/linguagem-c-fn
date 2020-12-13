#include <stdio.h>
#include <stdlib.h>

main(){
	float num, reajuste;
	printf("insere um numero: ");
	scanf("%f", &num);
	reajuste = (num + (num * 10 / 100));
	printf("\nvalor inicial %3.2f \n\n", num);
	printf("valor com reajuste de 10%% eh igual a %3.2f\n\n", reajuste);
	system("pause");
	return 0;
}
