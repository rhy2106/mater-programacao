#include <stdio.h>

int main(){
	
	int x, y;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	if(x > 1000){
		printf("Numero alto!\n");
	}
	y = x * 2;
	printf("O dobro desse numero eh %d",y);
	return 0;
}
