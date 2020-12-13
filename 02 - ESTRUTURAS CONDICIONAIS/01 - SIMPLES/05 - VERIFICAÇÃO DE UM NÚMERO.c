#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float num, raiz, quadrado;
	printf("insere um numero: ");
	scanf("%f", &num);
	
	if(num > 0 ){
		raiz = sqrt(num);
		printf("a raiz quadrada do numero %.1f, eh igual a %.1f \n\n", num, raiz);	
	}
	
	if(num < 0){
		quadrado = pow(num, 2);
		printf("o quadrado do numero %.1f, eh igual a %.1f \n\n", num, quadrado);
	}
	system("pause");
	return 0;		
}
