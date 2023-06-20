#include <stdio.h>
/*

ATIVIDADE:
Declare um vetor de 10 posições e o preencha
com os 10 primeiros números ímpares e mostre o vetor na tela.
*/

void exibirVetor(int vetor[10], int tamanhoVetor);

int main(void)
{
    int tamanhoVetor = 10, num = 1;

    int vetor[tamanhoVetor];

    for (int i = 0; i < tamanhoVetor; i++)
    {
        vetor[i] = num;
        num += 2;
    };

    exibirVetor(vetor, 10);
}

void exibirVetor(int vetor[10], int tamanhoVetor)
{
    for (int i = 0; i < tamanhoVetor; i++)
    {
        printf("%d\n", vetor[i]);
    };
}
