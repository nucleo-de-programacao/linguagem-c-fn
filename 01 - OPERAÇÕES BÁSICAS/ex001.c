#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	printf("Bem-vindo à Linguagem de Programação C!\n\n");
	
	system("pause");
	
	return 0;
}
