#include <stdio.h>

double sumNumbers(double numbersArray[], int length);

int main(void)
{

    double numbers[] = {3.0, 3.0, 4.0};

    printf("The sum of the array is: %g\n", sumNumbers(numbers, 3));

    return 0;
};

double sumNumbers(double numbersArray[], int length)
{
    double sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += numbersArray[i];
    }

    return sum;
}