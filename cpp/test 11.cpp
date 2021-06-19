#include <stdio.h>

int main()
{
	int idade, ano, decada;
	
	printf("Digite a idade q voce fez ou fazera esse ano: ");
	scanf("%d", &idade);
	
	ano = 2021 - idade;
	
	if(ano > 2020){
		decada = 2020;
	}
	else if(ano > 2010){
		decada = 2010;
	}
	else if(ano > 2000){
		decada = 2000;
	}
	else if(ano > 1990){
		decada = 1990;
	}
	else if(ano > 1980){
		decada = 1980;
	}
	else if(ano > 1970){
		decada = 1970;
	}
	else if(ano > 1960){
		decada = 1960;
	}
	else if(ano > 1950){
		decada = 1950;
	}
	else if(ano > 1940){
		decada = 1940;
	}
	else if(ano > 1930){
		decada = 1930;
	}
	else if(ano > 1920){
		decada = 1920;
	}
	if(idade > 100) {
		printf("numero muito grnade!");
	}
	else if(idade < 1) {
		printf("o numero nao pode ser negativo!");
	}
	else( 0 < idade < 100);
	 {
		printf("Voce nasceu na decada %d", decada);
	}
	return 0;
}
