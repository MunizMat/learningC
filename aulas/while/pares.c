#include <stdio.h>

int main(void){
    int numero = 0, qtdPares = 0, qtdImpares = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while(numero != 0){

        if(numero % 2 == 0){
            qtdPares = qtdPares + 1;
        } else {
            qtdImpares = qtdImpares + 1;
        }

        printf("Digite um numero: ");
        scanf("%d", &numero);

    }

    printf("Quantidade de pares: %d \nQuantidade de impares: %d\n", qtdPares, qtdImpares);


    return 0;
}