#include <stdio.h>

int main(){
	char frase[500+1];
	printf("Informe uma palavra ");
	scanf("%s", frase);
	int i=0;
	
	while(frase[i] != '\0'){
		i++;
	}
	printf("A frase %s tem %d\n", frase, i);
	return 0;
}
