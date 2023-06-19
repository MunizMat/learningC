#include <stdio.h>

int sget(char *array, int length);

void repetirFala(char *array, int length);

int main(void)
{

    return 0;
}

int sget(char *array, int length)
{
    fflush(stdin);
    if (fgets(array, length, stdin))
    {
        int i;
        for (i = 0; array[i] != '\n' && array[i]; ++i)
            ;
        array[i] = '\0';
    }
}

void repetirFala(char *array, int length)
{

    printf("Insira uma frase: \n");
    sget()
}