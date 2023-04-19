#include <stdio.h>

int main(void){
    int numero = 0, qtdIntervalo1 = 0, qtdIntervalo2 = 0, qtdIntervalo3 = 0, qtdIntervalo4 = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(numero >= 0){

        if (numero < 26){
            qtdIntervalo1++;
        } else if (numero < 51){
            qtdIntervalo2++;
        } else if(numero < 76) {
            qtdIntervalo3++;
        } else if(numero < 101) {
            qtdIntervalo4++;
        }

        printf("Digite um numero: ");
        scanf("%d", &numero);

    }

    printf("Intervalo 1: %d numeros \nIntervalo 2: %d numeros \nIntervalo 3: %d numeros \nIntervalo 4: %d numeros\n", qtdIntervalo1, qtdIntervalo2, qtdIntervalo3, qtdIntervalo4);


    return 0;
}