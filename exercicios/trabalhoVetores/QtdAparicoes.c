#include <stdio.h>

void coletarNumeros(int numeros[], int qtdNumeros)
{
    int num = 0;

    for (int i = 0; i < qtdNumeros; i++)
    {
        printf("Digite o elemento %d:\n", i);
        scanf("%d", &num);
        numeros[i] = num;
    }
}

int contarAparicoes(int numeroAlvo, int numeros[], int qtdNumeros)
{
    int contador = 0;

    for (int i = 0; i < qtdNumeros; i++)
    {
        if (numeros[i] == numeroAlvo)
            contador++;
    }

    return contador;
}

void gerarQtdAparicoes(int numeros[], int qtdAparicoes[], int qtdNumeros)
{

    for (int i = 0; i < qtdNumeros; i++)
    {
        qtdAparicoes[i] = contarAparicoes(numeros[i], numeros, qtdNumeros);
    }
}

void exibirNumeros(int numeros[], int qtdNumeros)
{
    for (int i = 0; i < qtdNumeros; i++)
    {
        if (numeros[i] == 0)
            return;
        printf("%d ", numeros[i]);
    }
}

#define QtdNumeros 6

int main(void)
{

    int numeros[QtdNumeros];
    int qtdAparicoes[QtdNumeros] = {0};

    coletarNumeros(numeros, QtdNumeros);

    gerarQtdAparicoes(numeros, qtdAparicoes, QtdNumeros);

    exibirNumeros(qtdAparicoes, QtdNumeros);

    return 0;
}
