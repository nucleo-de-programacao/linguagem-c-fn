#include <stdio.h>
#include <stdlib.h>

main(){
	float valorCompra, valorPago;
	printf("qual eh o valor da compra? ");
	scanf("%f", &valorCompra);
	valorPago = valorCompra - (valorCompra * 9 / 100);
	printf("\nvalor da compra inicial %3.2f \n", valorCompra);
	printf("novo valor da compra com desconto de 9%% eh igual a %3.2f\n\n", valorPago);
	system("pause");
	return 0;
}
