#include <stdio.h>

int main(){
	
	int x;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	if(x > 0){
		printf("Numero positivo\n");
	}
	 else if(x < 0){
		printf("Numero negativo");
	}
	else{
		printf("Numero igual a zero");
	}
	return 0;
}
