#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	double altura, imc, peso;
	printf("qual eh a sua altura? ");
	scanf("%lf", &altura);
	printf("qual eh o seu peso? ");
	scanf("%lf", &peso);
	
	imc = peso / (altura * altura);
	
	printf("\nimc => %3.2lf\n\n", imc);
	
	if(imc < 19)
		printf("observacao: magreza\n\n");
	else if (imc <= 25)
		printf("observacao: normal\n\n");
	else if (imc <= 30)
		printf("observacao: excesso de peso\n\n");
	else if (imc <= 40)
		printf("observacao: obesidade\n\n");
	else printf("observacao: obesidade morbida\n\n");
	system("pause");
	return 0;
}
