#include <stdio.h>

void coletarNumeros(int numeros[], int qtdNumeros)
{

    for (int i = 0; i < qtdNumeros; i++)
    {
        printf("Digite o elemento %d:\n", i);
        scanf("%d", &numeros[i]);
    }
}

int checarExistencia(int numeroAlvo, int numeros[], int qtdNumeros)
{

    for (int i = 0; i < qtdNumeros; i++)
    {
        if (numeros[i] == numeroAlvo)
            return 1;
    }

    return 0;
}

void removerDuplicados(int numeros[], int numerosSemDuplicaodos[], int qtdNumeros)
{
    int j = 0;

    for (int i = 0; i < qtdNumeros; i++)
    {
        if (!checarExistencia(numeros[i], numerosSemDuplicaodos, qtdNumeros))
        {
            numerosSemDuplicaodos[j] = numeros[i];
            j++;
        }
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
    int numerosSemDuplicados[QtdNumeros] = {0};

    coletarNumeros(numeros, QtdNumeros);

    removerDuplicados(numeros, numerosSemDuplicados, QtdNumeros);

    exibirNumeros(numerosSemDuplicados, QtdNumeros);

    return 0;
}
