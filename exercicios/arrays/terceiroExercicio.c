#include <stdio.h>
/*
ATIVIDADE:
Declare um vetor de caracteres e inicialize com a string "algoritmos".
Então conte quantos caracteres tem esta string e imprima.
Não use a função strlen().

*/

int main(void)
{
    int contador = 0, i = 0;

    char minhaString[30] = "algoritimos";

    while (minhaString[i])
    {
        i++;
    };

    printf("A string tem %d caracteres\n", i);
}
