/*
	Trabalhando com ponteiros e vetores.
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
	int vet[3] = {19, 27, 74};
	int *ptr;
	
	ptr = vet;
	printf("Conteúdo %d\n", *ptr);
	ptr++;
	printf("Conteúdo %d\n", *ptr);
	ptr++;
	printf("Conteúdo %d\n", *ptr);
	return 0;
}
