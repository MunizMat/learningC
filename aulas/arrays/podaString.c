#include <stdio.h>
#include <string.h>

int getInteger(void);
void repeatString(int maxSize);
int sget(char *array, int length);

int main(void)
{
    int maxSize = getInteger();

    repeatString(maxSize);
    return 0;
}

int getInteger(void)
{
    int num = 0;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    return num;
}

void repeatString(int maxSize)
{
    char palavraInserida[200];
    char saidaPrintf[maxSize];
    printf("Insira uma palavra: \n");
    sget(palavraInserida, 200);
    snprintf(palavraInserida, maxSize, saidaPrintf);
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