#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int ladoA, ladoB, retangulo, perimetro;
	
	printf("========= INSIRA OS VALORES DE RECT�NCULO =========\n\n");
	printf("Por favor! Digite um valor para lado (a):\t");
	scanf("%d", &ladoA);
	printf("Por favor! Digite um valor para lado (b):\t");
	scanf("%i", &ladoB);
	
	retangulo = ladoA * ladoB;
	perimetro = 2 * (ladoA + ladoB);
	
	printf("\n==================== RESULTADO ====================\n\n");
	printf("\tA �rea de um rect�ngulo �:\t %d\n", retangulo);
	printf("\tO per�metro de um rect�ngulo �:\t %i\n", perimetro);
	printf("\n===================================================\n\n");
	
	system("pause");
	return 0;
}
