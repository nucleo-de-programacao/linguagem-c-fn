#include <stdio.h>
#include <stdlib.h>

main () {
	char nome[30];
	int i = 0;
	printf("qual eh o seu nome? ");
	gets(nome);
	while (i < 10) {
		printf("%s\n", nome);
		i++;
	}
	system("pause");
	return 0;
}
