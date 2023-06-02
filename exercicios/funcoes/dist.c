#include <stdio.h>
#include <math.h>

double dist(double x, double y);

int main(void)
{
    printf("%g\n", dist(2, 0));
    printf("%g\n", dist(1, 1));
}

double dist(double x, double y)
{
    return sqrt((pow(x, 2.0) + pow(y, 2.0)));
}