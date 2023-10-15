#include <stdio.h>
#include <stdlib.h> //necessário para usar as funções malloc() e free()

int main(){
	float *vet1;
	float vet[10];

	int i, num_elementos;

	printf("Informe o numero de elementos do vetor\n");
	scanf("%d", &num_elementos);

	vet1 = (float *) malloc(num_elementos * sizeof(float));

	//Armazenando os dados em um vetor
	for (i = 0; i < num_elementos; i++){
		printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
		scanf("%f",&vet1[i]);
	}

	// ------ Percorrendo o vetor e imprimindo os valores ----------
	printf("\n*********** Valores do vetor dinamico ************\n\n");

	for (i = 0;i < num_elementos; i++){
		printf("%.2f\n",vet1[i]);
	}

	//liberando o espaço de memória alocado
	free(vet1);

	return 0;
}
