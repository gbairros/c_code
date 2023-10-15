/*
	Trabalhando com ponteiros para parametros de funções. Troca de valores de função
*/

#include <stdio.h>
#include <stdlib.h>

void troca1(int a, int b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void troca2(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int a, b;
	a = 100;
	b = 200;
	printf("Antes Valores das variáveis: a=%d, b=%d\n", a, b);
	
	troca1(a, b);
	printf("Função Por Cópia - Valores das variáveis: a=%d, b=%d\n", a, b);

	printf("-----------------------------\n");
	troca2(&a, &b);
	printf("Função Por Referencia - Valores das variáveis: a=%d, b=%d\n", a, b);


	return 0;
}
