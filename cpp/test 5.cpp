#include <stdio.h>

int main() {
	float num, den;
	printf ("Entre com uma fracao (numerador e denominador separados por um espaco):");
	scanf ("%f %f", &num, &den);
	if (den != 0)
		printf ("A fracao decimal eh %f\n", num/den);
	else printf ("\nErro, denominador nao pode ser 0");
	return 0;
}

