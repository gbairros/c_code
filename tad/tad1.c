/*
	TAD - Implementação de Tipo Abstrato de Dados. 
	Exemplo de Ponto Cartesiano (x,y)
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	struct Ponto{
		int a;
		int b;
	};
	
	struct Ponto ponto1;
	struct Ponto ponto2;
	
	ponto1.a = 2;
	ponto1.b = 5;
	printf("Ponto1 a=%d, b=%d\n", ponto1.a, ponto1.b);
	
	ponto2.a = 4;
	ponto2.b = 4;
	printf("Ponto2 a=%d, b=%d\n", ponto2.a, ponto2.b);
	
	return 0;
}
