#include <stdio.h>
#include <stdlib.h>

main(){
	float vel;
	printf("qual eh o valor da velocidade em (km/h)? ");
	scanf("%f", &vel);
	vel = vel / 3.6;
	printf("\no valor da velocidade em (m/s) eh igual a %.2f\n\n", vel);
	system("pause");
	return 0;
}
