#include <stdio.h>

int main(void){
    int numero = 0, soma = 0, quantidade = 0;
    double media;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(numero != 0){
        soma = soma + numero;

        printf("Digite um numero: ");
        scanf("%d", &numero);

        quantidade = quantidade + 1;
    }

    media = soma / quantidade;

    printf("Soma: %d \nMedia: %g\n", soma, media);

    return 0;
}