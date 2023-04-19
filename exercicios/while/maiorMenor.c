#include <stdio.h>

int main(void){
    int contador = 0, numero = 0, maiorNum, menorNum;

    printf("Digite um numero:");
    scanf("%d", &numero);

    while(numero > - 1 && numero < 1001 && contador < 4){
        
        if(numero > maiorNum){
            maiorNum = numero;
        } else if (numero < menorNum) {
            menorNum = numero;
        }
        printf("Digite um numero:");
        scanf("%d", &numero);

        contador++;
    }
    return 0;
}