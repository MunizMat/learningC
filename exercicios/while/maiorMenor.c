#include <stdio.h>

int main(void){
    int contador = 0, numero = 0, maiorNum = 0, menorNum = 1000;

    while(numero > - 1 && numero < 1001 && contador < 5){

        printf("Digite um numero:\n");
        scanf("%d", &numero);
        
        if(numero > maiorNum){
            maiorNum = numero;
        } 
        if (numero < menorNum) {
            menorNum = numero;
        }

        contador++;
    }

    printf("%d %d\n", maiorNum, menorNum);
    return 0;
}