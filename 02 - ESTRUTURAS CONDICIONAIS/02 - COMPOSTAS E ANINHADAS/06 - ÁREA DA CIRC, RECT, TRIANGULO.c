#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	#define pi 3.1416
	int alturaRect, alturaTri, baseRect, baseTri, maior, raio;
	double areaCirc, areaRect, areaTri;
	
	printf("qual eh o valor da altura do rectangulo? ");
	scanf("%d", &alturaRect);
	printf("qual eh o valor da base do rectangulo? ");
	scanf("%i", &baseRect);
	printf("qual eh o valor da altura do triangulo? ");
	scanf("%d", &alturaTri);
	printf("qual eh o valor da base do triangulo? ");
	scanf("%i", &baseTri);
	printf("qual eh o valor do raio da circunferencia? ");
	scanf("%d", &raio);
	
	areaCirc = pi * pow(raio, 2.0);
	areaRect = alturaRect * baseRect;
	areaTri = (alturaTri * baseTri) / 2.0;
	
	printf("\no valor da area da circunferencia eh %.2lf \n\n", areaCirc);
	printf("o valor da area do rectangulo eh %.2lf \n\n", areaRect);
	printf("o valor da area do triangulo eh %.2lf \n\n", areaTri);
	
	if(areaCirc > areaRect && areaCirc > areaTri){
		if(areaRect > areaTri){
			maior = areaCirc;
			printf("a maior area eh %.2lf \n\n", areaCirc);	
		}	
	} else if(areaRect > areaCirc && areaRect > areaTri){
		if(areaCirc > areaTri){
			maior = areaRect;
			printf("a maior area eh %.2lf \n\n", areaRect);
		}
	} else {
		printf("a maior area eh %.2lf \n\n", areaTri);
	}
	system("pause");
	return 0;
}
