#include <stdio.h>

int main(void){
    int numero = 0, somaQuadrados = 0;
    
    printf("Digite N: ");
    scanf("%d", &numero);

    while (numero){
        somaQuadrados += numero * numero;
        numero--;
    }

    printf("A soma dos quadrados e ' %d\n", somaQuadrados);

    return 0;
}