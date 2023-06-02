#include <stdio.h>
#include <math.h>

double meuFatorial(double limite, double n);

int main(void)
{
    double limite = 0.0, soma = 0.0, termo = 1;
    int iteracoes = 1;

    printf("Digite um limite pequeno, menor do que 1: ");
    scanf("%lf", &limite);

    while (termo >= limite)
    {
        termo = 1 / pow(iteracoes, 2);
        soma += termo;
        iteracoes++;
    }

    printf("Foram somados %d termos\n", iteracoes - 1);

    printf("Soma = %g\n", soma);

    return 0;
}

double meuFatorial(double limite, double n)
{

    if (n >= limite)
        return (1 / n + meuFatorial(limite, n + 1));
    else
        return n;
}