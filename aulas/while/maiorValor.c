#include <stdio.h>

int main(void){
    int numero = 0, maiorNum = 0, numerosColetados = 0;

    while(numerosColetados < 15){

        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > maiorNum){
            maiorNum = numero;
        }

        numerosColetados = numerosColetados + 1;

    }

    printf("Maior numero inserido: %d\n", maiorNum);


    return 0;
}