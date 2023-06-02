#include <stdio.h>

double ideal(double altura, char sexo);

int main(void)
{
    printf("%g\n", ideal(1.60, 'F'));
    printf("%g\n", ideal(1.70, 'M'));

    return 0;
}

double ideal(double altura, char sexo)
{
    if (sexo == 'M')
        return 72.7 * altura - 58;
    return 62.1 * altura - 44.7;
}