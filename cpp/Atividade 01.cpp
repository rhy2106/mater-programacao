#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, delta, x1, x2, x3, x4;
	
	printf("digite os coeficientes da equacao separados por espaco na sequencia a b c: ");
	scanf("%f %f %f", &a, &b, &c);

	delta = pow(b,2) - 4 * a * c;

	b = b * -1;
	a = a * 2;
	
	if(delta < 0) {
		printf("\nNao existe raiz real");
	}
	else if(delta == 0) {
		printf ("\nAs raizes sao rais e iguais");
		
		x1 =  b + sqrt(delta);
		x3 = x1 / a;

		x2 =  b - sqrt(delta);
		x4 = x2 / a;
		printf("\nAs raizes da equacao sao %f %f", x3, x4);
	}
	else {
	
		x1 =  b + sqrt(delta);
		x3 = x1 / a;

		x2 =  b - sqrt(delta);
		x4 = x2 / a;
	printf("\nAs raizes da equacao sao %f %f", x3, x4);
	}
	
	return 0;
}
