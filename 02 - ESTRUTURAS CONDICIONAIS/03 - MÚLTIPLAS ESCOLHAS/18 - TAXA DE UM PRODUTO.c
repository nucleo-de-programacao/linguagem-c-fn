#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int cod;
	float preco, taxa;
	printf("taxa de um produto\n\n");
	printf("informe o codigo do produto: ");
	scanf("%d", &cod);
	printf("informe o preco do produto: ");
	scanf("%f", &preco);
	switch(cod){
		case 10:
			printf("\nproduto: electrodomesticos\n\n");
			printf("o preco do produto eh akz %3.2f\n\n", preco);
			printf("a taxa do produto foi de 6%% e, eh akz %3.2f\n\n", preco * 6 / 100);
			break;
		case 20:
			printf("\nproduto: roupas\n\n");
			printf("o preco do produto eh akz %3.2f\n\n", preco);
			printf("a taxa do produto foi de 0%% e, eh akz %3.2f\n\n");
			break;
		case 30:
			printf("\nproduto: moveis\n\n");
			printf("o preco do produto eh akz %3.2f\n\n", preco);
			printf("a taxa do produto foi de 5%% e, eh akz %3.2\n\n", preco * 5 / 100);
			break;
		case 40:
			printf("\nproduto: ferramentas\n\n");
			printf("o preco do produto eh akz %3.2f\n\n", preco);
			printf("a taxa do produto foi de 4%% e, eh akz %3.2f\n\n", preco * 4 / 100);
			break;
	}
	system("pause");
	return 0;
}
