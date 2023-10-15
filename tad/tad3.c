/*
	TAD - Implementação de Tipo Abstrato de Dados. 
	Exemplo de Vetores com TAD
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	struct Pessoa{
		char nome[20];
		char endereco[20];
		int telefone;
	};	
	
	typedef struct Pessoa Pessoa;
	
	Pessoa vet_pessoas[5];
	
	
	strcpy(vet_pessoas[0].nome,"Maria");
	strcpy(vet_pessoas[0].endereco, "Novo Hamburgo");
	vet_pessoas[0].telefone = 20;
	
	strcpy(vet_pessoas[1].nome,"Carol");
	strcpy(vet_pessoas[1].endereco, "Campo Bom");
	vet_pessoas[1].telefone = 40;

	strcpy(vet_pessoas[2].nome,"Samuel");
	strcpy(vet_pessoas[2].endereco, "São Leopoldo");
	vet_pessoas[2].telefone = 15;

	strcpy(vet_pessoas[3].nome,"Gabriel");
	strcpy(vet_pessoas[3].endereco, "Porto Alegre");
	vet_pessoas[3].telefone = 23;
	
	strcpy(vet_pessoas[4].nome,"Sara");
	strcpy(vet_pessoas[4].endereco, "Canoas");
	vet_pessoas[4].telefone = 30;


	printf("Nome: %s\n", vet_pessoas[0].nome);
	printf("Endereco: %s\n", vet_pessoas[0].endereco);
	printf("Telefone: %d\n", vet_pessoas[0].telefone);
		

	printf("\n-----------------IMPRIMINDO TODOS OS ELEMENTOS------------\n");
	for(int i=0; i<5; i++){
		printf("Nome: %s\n", vet_pessoas[i].nome);
		printf("Endereco: %s\n", vet_pessoas[i].endereco);
		printf("Telefone: %d\n\n", vet_pessoas[i].telefone);
	}
	
	return 0;
}
