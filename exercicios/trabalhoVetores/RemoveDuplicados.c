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

void removerDuplicados(int numeros[], int qtdNumeros)
{
    for (int i = 0; i < qtdNumeros; i++)
    {
    }
}

#define QtdNumeros 6

int main(void)
{

    int numeros[QtdNumeros];

    coletarNumeros(numeros, QtdNumeros);

    return 0;
}
