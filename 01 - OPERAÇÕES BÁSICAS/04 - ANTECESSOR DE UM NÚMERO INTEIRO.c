#include <stdio.h>
#include <stdlib.h>

main(){
	int antecessor, num;
	printf("insere um numero: ");
	scanf("%i", &num);
	antecessor = num - 1;
	printf("\no antecessor do numero %d, eh igual a %i\n\n", num, antecessor);
	system("pause");
	return 0;
}
