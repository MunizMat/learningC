#include <stdio.h>

int main(void){
    int i = 1, num = 0, qtdPositivos = 0, qtdNegativos = 0, somaPositivos = 0, somaNegativos = 0;

    for(; i <= 10; i++){
        printf("Digite N: ");
        scanf("%d", &num);

        if(num < 0){
            qtdNegativos++;
            somaNegativos += num;
        } else {
            qtdPositivos++;
            somaPositivos += num;
        }
    } 

    printf("Quantidade de números maiores ou igual a 0: %d\n", qtdPositivos);
    printf("Quantidade de números digitados menores que 0: %d\n", qtdNegativos);
    printf("Soma de todos os números digitados maiores que zero: %d\n", somaPositivos);
    printf("Soma dos números digitados menores que zero: %d\n", somaNegativos);


    return 0;
}