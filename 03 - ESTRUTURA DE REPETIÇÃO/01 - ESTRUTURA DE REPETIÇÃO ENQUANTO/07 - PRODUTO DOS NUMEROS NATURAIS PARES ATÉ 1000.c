#include <stdio.h>
#include <stdlib.h>

main () {
	int i = 1;
	double produto = 1;
	while (i < 1000) {
		if (i % 2 == 0)
			produto *= i;
		i++;
	}
	printf("a produto dos numeros naturais pares ate 1000 eh igual a %lf\n", produto);
}
