#include <stdio.h>

int main()
{
	int N, D, A, K;

	printf("Digite o numero de posicoes: ");
	scanf("%d",&N);
	
	if((N <= 2)||(N >= 101)) {
		printf("O numero de posicoes nao pode ser maior que 100 nem menor que 3");
	}
	else {
		printf("Digite a posicao do disco voador: ");
		scanf("%d",&D);
		printf("Digite a posicao do aviao: ");
		scanf("%d",&A);
		
		if((N <= 0)||(A <= 0)||(D > N)||(A > N)) {
			printf("A posicao do disco voador e do aviao nao podem ser maior que o numero de posicoes nem menor que 1!");
		}
		else {
			if(A > D) {
				K = (N - A) + D;
			}
			else if (D == A) {
				K = 0;
			}
			else if(A < D) {
				K = D - A;
			}
			
			if(K == 1) {
				printf("O jogador devera apertar o botao 1 vez!");
			}
			else if(K == 0) {
				printf("O jogador ja esta na posicao para atirar!");
			}
			else {
				printf("O jogador devera apertar o botao %d vezes!", K);
			}
		}
	}
	
	return 0;
}

