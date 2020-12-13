#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float a, b, c,         // coeficientes
		  delta,          //  delta
		  sqrtdelta,     //   raíz quadrada de delta
		  raiz1, raiz2;  //   raízes
	
	// 1º Passo: recebendo os coeficientes
	printf("Equacao do 2o grau: ax^2 + bx + cx = 0\n\n");
	
	printf("Entre com o valor de a: ");
	scanf("%f", &a);
	printf("Entre com o valor de b: ");
	scanf("%f", &b);
	printf("Entre com o valor de c: ");
	scanf("%f", &c);
	
	// 2º Passo: verificando a equação é válida
	if (a != 0) {
		
		// 3º Passo: recebendo o valor de delta e calcular à sua raíz quadrada
		delta = (b * b) - (4 * a * c);
		sqrtdelta = sqrt(delta);
		
		// 4º Passo: se delta for maior ou igual a 0, as raízes são reais
		if (delta >= 0) {
			
			raiz1 = (- b + sqrt(delta)) / (2 * a);
			raiz2 = (- b - sqrt(delta)) / (2 * a);
			printf("\nRaizes: %.2f ; %.2f\n\n", raiz1, raiz2);
		}
		
		// 5º Passo: se delta for menor que 0, as raízes serão complexas
		else {
			
			delta = - delta;
			sqrtdelta = sqrt(delta);
			printf("\nRaiz 1: %.2f + i.%.2f \n\n", (- b) / (2 * a), (sqrt(delta)) / (2 * a));
			printf("\nRaiz 2: %.2f - i.%.2f \n\n", (- b) / (2 * a), (sqrt(delta)) / (2 * a));
		}
	} else printf("\n Coeficiente 'a' invalido. Nao eh uma equacao do 2o grau!\n\n");
	system("pause");
	return 0;
}
