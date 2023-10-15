/*
	TAD - Implementação de Tipo Abstrato de Dados. 
	Exemplo de Registro de Pessoa
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
	
	struct Pessoa pessoa1;	
	//typedef struct Pessoa Pessoa;
	//Pessoa pessoa1;
	
	
	strcpy(pessoa1.nome,"Maria");
	strcpy(pessoa1.endereco, "Novo Hamburgo");
	pessoa1.telefone = 20;
	
	printf("Nome: %s\n", pessoa1.nome);
	printf("Endereco: %s\n", pessoa1.endereco);
	printf("Telefone: %d\n", pessoa1.telefone);
	
	
	
	return 0;
}
