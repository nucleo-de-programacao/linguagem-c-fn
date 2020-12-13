#include <stdio.h>
#include <stdlib.h>

main(){
	float desconto, numeroAulas, valorHora, valorINSS, salario, salarioL;
	printf("qual eh o valor da hora por aula? ");
	scanf("%f", &valorHora);
	printf("qual eh o numero de aulas? ");
	scanf("%f", &numeroAulas);
	printf("qual eh o valor percentual de desconto do INSS? ");
	scanf("%f", &valorINSS);
	salario = numeroAulas * valorHora;
	desconto = salario * valorINSS / 100;
	salarioL = salario - desconto;
	printf("\nsalario liquido eh %3.2f\n\n ", salario - desconto);
	system("pause");
	return 0;
}
