#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int cod, extra, nht;
	double salarioExtra, salarioTotal;
	
	printf("qual eh o teu codigo? ");
	scanf("%d", &cod);
	printf("quantas horas trabalhadas? ");
	scanf("%i", &nht);
	
	if(nht > 50){
		extra = nht - 50;
	} else extra = 0;
	
	salarioExtra = extra * 550;
	salarioTotal = salarioExtra + (nht - extra) * 1050;
	
	printf("\no seu salario excedente foi de AOA %3.2lf \n\n", salarioExtra);
	printf("o seu salario total eh de AOA %3.2lf \n\n", salarioTotal);
}
