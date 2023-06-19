#include <stdio.h>

int cont(int vetor[], int tamanhoVetor);
int main(void)

{
    int numeros[] = {1, 2, 3, 4, 5, 6, 8, 10};
    printf("%d numeros pares no vetor\n", cont(numeros, 8));

    return 0;
}

int cont(int vetor[], int tamanhoVetor)
{
    int qtdPares = 0;
    for (int i = 0; i < tamanhoVetor; i++)
    {
        if (vetor[i] % 2 == 0)
            qtdPares++;
    }

    return qtdPares;
}