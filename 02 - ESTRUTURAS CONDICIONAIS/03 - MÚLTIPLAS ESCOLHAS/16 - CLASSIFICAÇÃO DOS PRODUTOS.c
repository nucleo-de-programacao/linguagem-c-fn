#include <stdio.h>
#include <stdlib.h>

main(){
	int cod;
	printf("introduza um codigo: ");
	scanf("%d", &cod);
	switch(cod){
		case 1:
			printf("\nalimento nao-perecivel\n\n");
			break;
		case 2:
			printf("\nalimento perecivel\n\n");
			break;
		case 60:
			printf("\nproduto de higiene pessoal\n\n");
			break;
		case 80:
			printf("\nproduto de limpeza\n\n");
			break;
		default:
			printf("\ncodigo invalido\n\n");
	}
	system("pause");
	return 0;
}
