#include <stdio.h>
#include <stdlib.h>

main () {
	int i = 1, num, soma = 0;
	printf("digite um numero: ");
	scanf("%i", &num);
	if (num > 0) {
		while (i <= num) {
			soma += i;
			i++;
		}
	} else printf("digite apenas numeros naturais.\n");
	printf("\na soma dos %i primeiros numero naturais eh igual a %i\n\n", num, soma);
}
