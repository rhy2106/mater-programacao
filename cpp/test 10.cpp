#include <stdio.h>

int main()
{
	int idade, ano;
	
	printf("Digite a idade q voce fez ou fazera esse ano15: ");
	scanf("%d", &idade);
	
	ano = 2021 - idade;
	
	printf("Voce nasceu em %d", ano);
	
	return 0;
}
