#include <stdio.h>
#include <stdlib.h>

main(){
	int area, lado1, lado2, perimetro;
	printf("qual eh o valor do lado (A)? ");
	scanf("%d", &lado1);
	printf("qual eh o valor do lado (B)? ");
	scanf("%i", &lado2);
	area = lado1 * lado2;
	perimetro = 2 * (lado1 + lado2);
	printf("\na area de um rectangulo de lados %d e %i, eh igual a %d\n\n", lado1, lado2, area);
	printf("o perimtero de um rectangulo de lados %i e %d, eh igual a %i \n\n", lado1, lado2, perimetro);
	system("pause");
	return 0;
}
