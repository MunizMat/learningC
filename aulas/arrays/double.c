#include <stdio.h>

void doubleValues(int numbers[], int length);
void printArray(int array[], int length);

int main(void)
{
    int array[] = {32, 15, 25, 14};

    doubleValues(array, 4);

    printArray(array, 4);

    return 0;
}

void doubleValues(int numbers[], int length)
{
    for (int i = 0; i < length; i++)
    {
        numbers[i] *= 2;
    }
}

void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }
}