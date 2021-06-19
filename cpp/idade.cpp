#include <stdio.h>

int main()
{
	int a, b, c, d, maior;
	
	printf("Digite a primeira idade: ");
	scanf("%d", &a);
	
	printf("Digite a segunda idade: ");
	scanf("%d", &b);
	
	if(a == b) {
		printf("As idades não podem ser iguais!");
	}
	else if((a <= 0)||(b <= 0)) {
		printf("A idade nao pode ser negativa");
	}
	else {
		printf("Digite a idade da Monica: ");
		scanf("%d", &c);
		
		if((c <= 39)||(c >= 111)) {
			printf("A idade da Monica nao pode ser menor que 40 nem maior que 110");
		}
		else if(c <= a + b) {
			printf("A idade da Monica nao pode ser menor que a soma das idades!");
		}
		else {
			d = c - b - a;
			maior = a;
			
			if(maior <= b){
				maior = b;
			}
			if(maior <= d){
				maior = d;
			}
			
			printf("A idade do filho mais velho eh %d",maior);
		}
	}

	return 0;
}

