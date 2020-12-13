#include <stdio.h>
#include <stdlib.h>

main(){
	int temp, hh, mm, ss;
	printf("digite o tempo em segundos: ");
	scanf("%d", &temp);
	hh = temp / 3600;
	mm = (temp % 3600) / 60;
	ss = (temp % 3600) % 60;
	printf("\no evento durou %d:%d:%d \n\n", hh, mm, ss);
	system("pause");
	return 0;
}
