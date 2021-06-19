#include <stdio.h>

int main()
{
	
	int a, b, c;
	printf("Digite o primeiro valor: ");
	scanf("%d", &b);
	printf("Digite o segundo valor: ");
	scanf("%d", &c);
	a = b % c;
	
	printf("%d\n",a);
	
	if (a == 0){
		printf("O numero %d eh divisivel por %d", b, c);
	}
	else {
		printf("O numero %d nao eh divisivel por %d", b, c);
	}
	
	return 0;
}
