/*
    ATIVIDADE:
    Imprima a string "algoritmos" caractere por caractere, porém na ordem inversa.

*/

#include <stdio.h>

int main(void)
{
    char palavra[] = "algoritimos";

    for (int i = 11; i >= 0; i--)
    {
        printf("%c\n", palavra[i]);
    };

    return 0;
}