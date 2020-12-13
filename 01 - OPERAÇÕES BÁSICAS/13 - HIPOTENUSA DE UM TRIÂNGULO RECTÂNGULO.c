#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float hipotenusa;
	int lado1, lado2;
	printf("qual eh o valor do primeiro cateto? ");
	scanf("%i", &lado1);
	printf("qual eh o valor segundo ceteto? ");
	scanf("%d", &lado2);
	hipotenusa = sqrt((lado1 * lado1) + (lado2 * lado2));
	printf("\no valor da hipotenusa do triangulo retangulo eh igual a %3.2f\n\n", hipotenusa);
	system("pause");
	return 0;
}
