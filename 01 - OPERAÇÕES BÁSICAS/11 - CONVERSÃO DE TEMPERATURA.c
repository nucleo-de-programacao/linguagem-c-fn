#include <stdio.h>
#include <stdlib.h>

main(){
	int grausC;
	float grausF;
	printf("qual eh a temperatura em graus Celcius? ");
	scanf("%d", &grausC);
	grausF = 9 * grausC / 5 + 32;
	printf("\na temperatura em graus Fahrenheit eh igual a %.2f\n\n ", grausF);
	system("pause");
	return 0;
}
