#include <stdio.h>

#define tamanhoVetor 20

int main(void){
    int vetor[tamanhoVetor], i;

    for(i = 0; i < tamanhoVetor; i++){
        printf("Insira o %do numero: ", i + 1);
        scanf("%d", &vetor[i]);
    };

    for(i = 0; i < tamanhoVetor; i++){
        if(vetor[i] < 0) vetor[i] = 0;
    };

    for(i = 0; i < tamanhoVetor; i++){
        printf("Posicao %d, Valor = %d\n", i, vetor[i]);
    };

    return 0;
}