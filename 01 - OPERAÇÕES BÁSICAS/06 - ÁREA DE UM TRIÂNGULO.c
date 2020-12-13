#include <stdio.h>
#include <stdlib.h>

main(){
	int altura, base;
	float area;
	printf("qual eh o valor da altura do triangulo? ");
	scanf("%d", &altura);
	printf("qual eh o valor da base do triangulo? ");
	scanf("%i", &base);
	area = (altura * base) / 2;
	printf("\na area do triangulo com altura %d e base %i, eh igual a %.2f \n\n", altura, base, area);
	system("pause");
	return 0;
}
