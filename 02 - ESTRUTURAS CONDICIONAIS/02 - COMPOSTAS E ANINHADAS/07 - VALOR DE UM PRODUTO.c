#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	double valorProduto;
	printf("qual eh o valor do produto? ");
	scanf("%lf", &valorProduto);
	
	if(valorProduto < 20)
		printf("\nvalor da venda com lucro de 45%% eh %.2lf \n\n", valorProduto * 1.45);
	else
		printf("o valor da venda com lucro de 30%% eh %.2lf \n\n", valorProduto * 1.30);
	system("pause");
	return 0;
}
