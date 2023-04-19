#include <stdio.h>

int main(void){
    int numero, fatorialNumero, contador;

    printf("Digite N: ");
    scanf("%d", &numero);

    contador = numero - 1;
    fatorialNumero = numero;

    while (contador > 1){
        fatorialNumero *= contador;
        contador--;
    }

    if (numero == 0){
        fatorialNumero = 1;
    }

    printf("O fatorial de %d e' %d\n", numero, fatorialNumero);

    return 0;
}