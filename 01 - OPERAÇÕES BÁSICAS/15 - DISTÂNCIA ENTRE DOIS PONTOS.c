#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float d, x1, x2, y1, y2;
	printf("qual eh o valor de x1? ");
	scanf("%f", &x1);
	printf("qual eh o valor de x2? ");
	scanf("%f", &x2);
	printf("qual eh o valor de y1? ");
	scanf("%f", &y1);
	printf("qual eh o valor de y2? ");
	scanf("%f", &y2);
	
	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	
	printf("\na distancia entre os dois pontos eh %f \n\n", d);
}
