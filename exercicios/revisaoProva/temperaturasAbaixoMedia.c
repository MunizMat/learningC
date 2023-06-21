/*
Faça uma função que receba um vetor que representa as
temperaturas dos dias de uma semana. O retorno da função deverá ser
a quantidade de dias que a temperatura ficou abaixo da média.
*/

#include <stdio.h>

int temperaturasAbaixoMedia(int temperaturas[]);
double calcularSoma(int numeros[], int tamanho);
int obterNumerosAbaixoDaMedia(int numeros[], int tamanho, double media);

int main(void)
{
    int v[] = {23, 43, 19, 17, 3, 29, 30};

    printf("%d", temperaturasAbaixoMedia(v));
    return 0;
}

int obterNumerosAbaixoDaMedia(int numeros[], int tamanho, double media)
{
    int qtdNumeros = 0;

    for (int i = 0; i < tamanho; i++)
    {
        printf("numero: %d, media: %g\n", numeros[i], media);

        if (numeros[i] < media)
            qtdNumeros++;
    }

    return qtdNumeros;
}

double calcularSoma(int numeros[], int tamanho)
{
    double soma = 0;

    for (int i = 0; i < tamanho; i++)
        soma += numeros[i];

    return soma;
}

int temperaturasAbaixoMedia(int temperaturas[])
{
    int diasDaSemana = 7;
    double soma = calcularSoma(temperaturas, diasDaSemana);
    double media = soma / diasDaSemana;

    return obterNumerosAbaixoDaMedia(temperaturas, diasDaSemana, media);
}