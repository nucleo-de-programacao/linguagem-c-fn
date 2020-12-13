#include <stdio.h>
#include <stdlib.h>

main(){
	double salario, novoSalario;
	printf("digite o valor do salario: ");
	scanf("%lf", &salario);
	printf("\nsalario eh %3.2lf\n\n", salario);
	if(salario < 70000){
		novoSalario = salario + salario * 20 / 100;
		printf("novo salario com reajuste de 20%% eh %3.2lf\n\n", novoSalario);
	} else if(salario <= 100000){
		novoSalario = salario + salario * 15 / 100;
		printf("novo salario com reajuste de 15%% eh %3.2lf\n\n", novoSalario);
	} else{
		novoSalario = salario + salario * 10 / 100;
		printf("novo salario com reajuste de 10%% eh %3.2lf\n\n", novoSalario);
	}
	system("pause");
	return 0;
}
