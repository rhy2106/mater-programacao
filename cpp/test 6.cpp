#include <stdio.h>

int main() {
	
	float n1, n2, a, b, c, d;
	
	/*scanf é o comando para pedir ao usuario 
	do aplicativo digitar alguma coisa*/
	
	printf("Digite um numero: ");
	scanf("%f", &n1);
	
	printf("Digite outro numero: ");
	scanf("%f", &n2);
	
	a = n1 + n2;
	b = n1 - n2;
	c = n1 * n2;
	d = n1 / n2;
	
	printf("%f + %f = %f\n", n1, n2, a);
	printf("%f - %f = %f\n", n1, n2, b);
	printf("%f x %f = %f\n", n1, n2, c);
	printf("%f : %f = %f", n1, n2, d);
	return 0;
}

