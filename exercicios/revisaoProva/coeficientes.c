/*
 */

#include <stdio.h>
#include <math.h>

void receberCoeficientes(double coeficientes[], int tamanho);
double obterValorDeX(void);
double calcularPolinomio(double valorDeX, double coeficientes[]);

int main(void)
{
    double valorDeX = 1;
    double coeficientes[6];

    receberCoeficientes(coeficientes, 6);

    while (valorDeX != 0)
    {
        valorDeX = obterValorDeX();
        printf("p(%g) = %g\n", valorDeX, calcularPolinomio(valorDeX, coeficientes));
    }

    return 0;
}

double calcularPolinomio(double valorDeX, double coeficientes[])
{
    double resultado = 0;

    for (int i = 0; i < 6; i++)
    {
        resultado += coeficientes[i] * pow(valorDeX, i);
    }

    return resultado;
}

double obterValorDeX(void)
{
    double x = 0;

    printf("Digite X:");
    scanf("%lf", &x);

    return x;
}

void receberCoeficientes(double coeficientes[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o coeficiente %d:\n", i);
        scanf("%lf", &coeficientes[i]);
    }
}
