#include <stdio.h>

/* o comando || � como OU e o commando && � como E
o comando || ira fazer o if utlizar apenas uma das duas condi��es
o comando && ira fazer o if realizar se as duas condi��es forem verdadeiras*/

int main()
{
	int a, b, c, d;
	
	a = 1;
	c = 0;
	
	printf("Digite a quantidade de numeros que serao digitados: ");
	scanf("%d", &d);
	
	while (a <= d)
	{
		printf("Digite o %d valor: ", a);
		scanf("%d", &b);
		a = a + 1;
		if((b > c) || (c == 0))
		{
			c = b;
		} 
	}
	printf("O maior valor eh %d", c);
	return 0;
}

