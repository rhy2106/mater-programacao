#include <stdio.h>

int main()
{
	int a, b, c, d;
	
	a = 1;
	c = 0;
	
	printf("Digite a quantidade de numeros que serao digitados: ");
	scanf("%d", &d);
	
	if(d <= 0)
	{
		printf("O valor nao pode ser igual ou menor a 0");
	}
	else
	{
		while (a <= d)
		{
			printf("Digite o %d valor: ", a);
			scanf("%d", &b);
			a = a + 1;
			if(b >= c)
			{
				c = b;
			} 
		}
		printf("O maior valor eh %d", c);
	}
	return 0;
}

