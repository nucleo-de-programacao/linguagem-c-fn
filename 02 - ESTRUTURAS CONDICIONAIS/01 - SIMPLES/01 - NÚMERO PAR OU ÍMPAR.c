#include <stdio.h>
#include <stdlib.h>

main(){
	int num;
	printf("insere um numero: ");
	scanf("%i", &num);
	if(num % 2 == 0)
		printf("%d, eh PAR!\n\n", num);
	if(num % 2 != 0)
		printf("%i, eh IMPAR!\n\n", num);
	system("pause");
	return 0;
}
