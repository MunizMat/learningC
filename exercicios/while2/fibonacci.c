#include <stdio.h>

int main(void){
    int qtdRepeticoes = 0, contador = 0, termo = 0, termoAnterior = 0, termoAnteAnterior = 0;

    printf("Digite N: ");
    scanf("%d", &qtdRepeticoes);

    while(contador < qtdRepeticoes){

        printf("%d ", termo);

        termoAnteAnterior = termoAnterior;
        termoAnterior = termo;

        if(!termo) termo = 1;
        else termo = termoAnterior + termoAnteAnterior;

        contador++;
    }


    return 0;
}