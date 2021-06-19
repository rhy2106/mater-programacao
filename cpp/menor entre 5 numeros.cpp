#include <stdio.h>

int main()
{
		int a, b, c, d;
	
	a = 1;
	c = 1;
	
	printf("Digite a quantidade de numeros que serao digitados: ");
	scanf("%d", &d);
	
	while (a <= d)
	{
		printf("Digite o %d valor: ", a);
		scanf("%d", &b);
		a = a + 1;
		if((b <= c) || (c == 1))
		{
			c = b;
		}
	}
	printf("O menor valor eh %d", c);
	return 0;
}

