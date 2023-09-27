#include <stdio.h>

void troca_vetor(int a[5], int b[5]){

}

void imprime_vetor(int a[5]){
    int i;
    for (i = 0; i < 5; i++) {
        printf("vet[%d] => %d\n", i, a[i]);
    }
    printf("\n");
}

int main()
{
    int x[5] = {3, 9, 7, 0, 2},
        y[5] = {10,11,0,3,7};

    troca_vetor (x , y);
    imprime_vetor (x);

    return 0;
}
