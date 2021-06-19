#include <stdio.h>

int main()
{
	int a, b, c;
	
	a = 1;
	b = 0;
	printf("digite um numero:");
	scanf("%d", &c);
	if(c < a){
		printf("O valor do numero não pdoe ser menor que 1!");
	}
	else
	{
		while(a <= c)
		{
			b = b + a;
			a = a + 1;
		}
	printf("A soma de todos numeros de 0 a %d eh %d", c, b);
	}
	return 0;
}

