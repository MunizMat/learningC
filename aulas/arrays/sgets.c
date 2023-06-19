#include <stdio.h>
#include <string.h>

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

int main(void)
{
    return 0;
}
