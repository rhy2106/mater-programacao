#include <stdio.h>

int main()
{
		
	int a, b, c, d;
	
	printf("digite um numero: ");
	scanf("%d",&a);
	
	b = 1;
	d = 0;
	
	while (b <= a)
	{
		c = a % b;
		b = b + 1;
		if(c == 0)
		{
			d = d + 1;
		}
	}
	
	if(d == 2)
	{
		printf("O numero %d eh primo",a);
	}
	else
	{
		printf("O numero %d nao eh primo",a);
	}
	
	return 0;
}

