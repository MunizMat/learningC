#include <stdio.h>
/*
ATIVIDADE:
Declare um vetor de caracteres e inicialize com a string "algoritmos".
Então conte quantos caracteres tem esta string e imprima.
Não use a função strlen().

*/

void exibirVetor(int vetor[10], int tamanhoVetor);

int main(void)
{
    int contador = 0, i = 0;

    char minhaString[30] = "algoritimos";

    while (minhaString[i])
    {
        printf('%c', minhaString[i]);
        i++;
    };

    printf("%d\n", i);
}

void exibirVetor(int vetor[10], int tamanhoVetor)
{
    for (int i = 0; i < tamanhoVetor; i++)
    {
        printf("%d\n", vetor[i]);
    };
}
