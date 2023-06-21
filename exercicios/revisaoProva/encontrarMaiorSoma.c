/*
 */

#include <stdio.h>

int obterInteiros(int numeros[])
{
    int i = 0;

    while (1)
    {
        if (i == 15)
            break;
        printf("Digite um numero:");
        scanf("%d", &numeros[i]);
        if (numeros[i] == 999)
            break;
        i++;
    }

    return i;
}

void encontrarMaiorSoma(int numeros[], int tamanho, int dadosDaSequencia[])
{
    int i = 0, somaAtual = 0, proximaSoma = 0, maiorSoma = 0;

    while (i + 3 < tamanho)
    {
        for (int j = i; j < i + 4; j++)
            somaAtual += numeros[j];

        if (somaAtual > maiorSoma)
        {
            maiorSoma = somaAtual;
            dadosDaSequencia[1] = i;
        }

        i++;
    }

    dadosDaSequencia[0] = maiorSoma;
}

int main(void)
{
    int numeros[15];
    int dadosDaSequencia[2]; // [soma, índice de início]

    int qtdNumeros = obterInteiros(numeros);

    encontrarMaiorSoma(numeros, qtdNumeros, dadosDaSequencia);

    printf("Soma=%d inicio=%d\n", dadosDaSequencia[0], dadosDaSequencia[1]);

    return 0;
}
