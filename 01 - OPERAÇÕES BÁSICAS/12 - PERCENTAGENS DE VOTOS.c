#include <stdio.h>
#include <stdlib.h>

main(){
	int numvotoBrancos, numvotoNulos, numvotoValidos, numtotalVotos;
	float porcentoBrancos, porcentoNulos, porcentoValidos;
	printf("qual eh o numero de votos em brancos? ");
	scanf("%d", &numvotoBrancos);
	printf("qual eh o numero de votos nulos? ");
	scanf("%i", &numvotoNulos);
	printf("qual eh o numero de votos validos? ");
	scanf("%d", &numvotoValidos);
	numtotalVotos = numvotoBrancos + numvotoNulos + numvotoValidos;
	porcentoBrancos = numvotoBrancos * 100 / numtotalVotos;
	porcentoNulos = numvotoNulos * 100 / numtotalVotos;
	porcentoValidos = numvotoValidos * 100 / numtotalVotos;
	printf("\no porcento de votos em branco de %d, eh igual a %3.2f%% \n\n", numvotoBrancos, porcentoBrancos);
	printf("o porcento de votos nulos de %i, eh igual a %3.2f%% \n\n", numvotoNulos, porcentoNulos);
	printf("o porcento de votos validos de %d, eh igual a %3.2f%% \n\n", numvotoValidos, porcentoValidos);
	system("pause");
	return 0;
	
}
