/*
Escreva uma função que receba dois parâmetros inteiros:
 um que representa a quantidade de horas e outro a quantidade de minutos.
 A função deverá retornar a quantidade de segundos correspondentes a
 quantidade de horas e minutos da entrada.

 O nome da função deverá ser obterSegundos
*/

#include <stdio.h>

int obterSegundos(int horas, int minutos);

int main(void)
{

    printf("%d", obterSegundos(38, 55));
    return 0;
}

int obterSegundos(int horas, int minutos)
{
    return (horas * 60 + minutos) * 60;
}