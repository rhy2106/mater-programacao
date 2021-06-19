#include <stdio.h>

int main()
{
	int l, c, a, b;
	printf("Digite a Largura da sala: ");
	scanf("%d",&l);
	printf("Digite o comprimento da sala: ");
	scanf("%d",&c);
	
	if((l <= 0)||(l >= 101)||(c <= 0)||(c >= 101)){
		printf("A largura e o comprimento da sala devem ser menor ou igual a 100 e nao podem ser negativos");
	}
	else{
		a = l * c + (l - 1) * (c - 1);
		b = ((l - 1) + (c - 1)) * 2;
		
		printf("A quantidade de ladrilhos do tipo 1 que serao utilizados sao %d\n", a);
		printf("A quantidade de ladrilhos do tipo 2 que serao utilizados sao %d", b);
	}
	return 0;
}
