#include <stdio.h>

int main()
{
	int A, B, N1, N2, N3;
	
	printf("Quantas vezes os interruptores foram apertados: ");
	scanf("%d", &N1);
	
	A = 0;
	B = 0;
	N3 = 1;
	
	while(N3 <= N1) {
		printf("Qual foi o %d interruptor apertado: ", N3);
		scanf("%d",&N2);
		
		N3 = N3 + 1;
		
		if(N2 == 1) {
			A =  A + 1;
		}
		else if(N2 == 2) {
			B = B + 1;
		}
	}
	
	if(A % 2 == 0) {
		A = 0;
	}
	else if(A % 2 == 1) {
		A = 1;
	}
	if(B % 2 == 0) {
		B = 0;
	}
	else if(B % 2 == 1) {
		B = 1;
	}
	
	if(A == 0) {
		printf("O primeiro interruptor esta desligado\n");
	} else if(A == 1) {
		printf("O primeiro interruptor esta ligado\n");
	}
	if(B == 0) {
		printf("O segundo interruptor esta desligado");
	} else if(B == 1) {
		printf("O segundo interruptor esta ligado");
	}
	
	return 0;
}
