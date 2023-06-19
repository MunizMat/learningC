#include <stdio.h>

void coletarNumerosUsuario(double vetor[], int tamanhoVetor);
double calcularMedia(double numeros[], int tamanhoVetor);
double calcularSoma(double numeros[], int tamanhoVetor);
void exibirMaioresQueMedia(double numeros[], int tamanhoVetor, double media);

int main(void)
{
    int qtdNumeros = 5;
    double media = 0;
    double numeros[qtdNumeros];

    coletarNumerosUsuario(numeros, qtdNumeros);

    media = calcularMedia(numeros, qtdNumeros);

    exibirMaioresQueMedia(numeros, qtdNumeros, media);

    return 0;
}

void coletarNumerosUsuario(double vetor[], int tamanhoVetor)
{
    double num = 0;

    for (int i = 0; i < tamanhoVetor; i++)
    {
        printf("Digite o elemento:\n");
        scanf("%lf", &num);
        vetor[i] = num;
    }
}

double calcularSoma(double numeros[], int tamanhoVetor)
{
    double soma = 0;

    for (int i = 0; i < tamanhoVetor; i++)
    {
        soma += numeros[i];
    };

    return soma;
}

double calcularMedia(double numeros[], int tamanhoVetor)
{
    double soma = calcularSoma(numeros, tamanhoVetor);

    double media = soma / tamanhoVetor;

    return media;
}

void exibirMaioresQueMedia(double numeros[], int tamanhoVetor, double media)
{
    for (int i = 0; i < tamanhoVetor; i++)
    {
        if (numeros[i] > media)
            printf("%g ", numeros[i]);
    }
}
