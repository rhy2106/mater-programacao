#include <stdio.h>
int main() {
//int cria variavel
//float cria variavel com numeros decimais
	float n1, n2, s, d, m, u;
	
	n1 = 6;
	n2 = 3;
	d = n1 / n2;
	u = n1 - n2;
	m = n1 * n2;
	s = n1 + n2;
	//printf imprime na tela oq vc escreveu
	//\n coloca na linha de baixo
	printf("soma: %f",s);
	printf("\nsubtracao: %f",u);
	printf("\nmultiplicacao: %f",m);
	printf("\ndivisao: %f",d);
	
	return 0;
}

