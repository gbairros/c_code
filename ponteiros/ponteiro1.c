/*
	Trabalhando com ponteiros. Maninupalando valores, endereços e conteúdo das 		variáveis
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade;
	int *ptr_idade;
	
	idade = 20;
	
	ptr_idade = &idade;
	
	printf("Variavel Idade %d\n", idade);
	printf("Variavel Ponteiro Idade %p\n", ptr_idade); 
	printf("Conteúdo Variavel Ponteiro Idade %d\n", *ptr_idade); 
	
	printf("------------------------------------\n");
	*ptr_idade = 30;
	printf("Variavel Idade %d\n", idade);
	printf("Variavel Ponteiro Idade %p\n", ptr_idade);
	printf("Conteúdo Variavel Ponteiro Idade %d\n", *ptr_idade); 
	
	return 0;
}
