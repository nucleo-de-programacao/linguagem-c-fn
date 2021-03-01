#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[30], sobrenome[30], curso[30];
	int idade, num_mat;
	
	printf("Por favor! Informe o número de matrícula: ");
	scanf("%d", &num_mat);
	
	printf("Por favor! Informe o seu nome : ");
	scanf("%s", nome);
	
	printf("Por favor! Informe o seu sobrenome: ");
	scanf("%s", sobrenome);
	
	printf("Por favor! Informe a sua idade: ");
	scanf("%i", &idade);
	
	printf("Por favor! Informe o seu curso: ");
	fflush(stdin);
	gets(curso);
	
	printf("\nSeja Bem-vindo!\n-----------------------\n\n");
	printf("Número de matrícula: %d\n", num_mat);
	printf("Nome Completo: %s %s\n", nome, sobrenome);
	printf("Curso: %s\n", curso);
	printf("Idade %i\n\n", idade);
	
	system("pause");
	return 0;
	
}
