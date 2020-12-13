#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	char sexo;
	float altura, peso = 0;
	printf("entre com seu sexo [F/M]\n\n");
	printf("qual eh o seu sexo? ");
	sexo = getchar();
	printf("qual eh a sua altura? ");
	scanf("%f", &altura);
	
	if(sexo == 'M' || sexo == 'm'){
		peso = (72.7 * altura) - 58;
	} else if(sexo == 'F' || sexo == 'f'){
		peso = (62.1 * altura) - 44.7;
	}
	printf("\npesas %.2f kg\n\n", peso);
	system("pause");
	return 0;
}
