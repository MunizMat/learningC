#include <stdio.h>

int getIndice(int num);

int main(void){
    int tamanhoVetor = 12, indice1 = 0, indice2 = 0, soma = 0;
    int num = 0;

    int vetor[tamanhoVetor];

    for(int i = 0; i < tamanhoVetor; i++){
        printf("Digite o %do numero do vetor: ", i + 1);
        scanf("%d", &num);
        vetor[i] = num;
    }

    indice1 = getIndice(1);
    indice2 = getIndice(2);

    soma = vetor[indice1] + vetor[indice2];

    printf("A soma entre %d e %d = %d\n", vetor[indice1], vetor[indice2], soma);

    
}

int getIndice(int num){
    int indice = 0;
    printf("Insira o indice do %do numero da soma: ", num);
    scanf("%d", &indice);
    return indice;
}

