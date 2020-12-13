#include <stdio.h>
#include <stdlib.h>

main(){
	float consumo, distancia;
	char tipo;
	printf("TIPO DO CARRO: [A, B E C]\n\n");
	printf("qual eh o tipo do carro? ");
	scanf("%c", &tipo);
	printf("qual eh a distancia percorrida em km/h? ");
	scanf("%f", &distancia);
	
	if (tipo == 'A')
		consumo = distancia / 8;
	else if (tipo == 'B')
		consumo = distancia / 9;
	else if (tipo == 'C')
		consumo = distancia / 12;
	
	printf("\no carro consumiu %.2f km/l\n\n", consumo);
	system("pause");
	return 0;
	
}
