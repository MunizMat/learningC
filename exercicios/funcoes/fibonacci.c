/*
   Questao:

Suponha que você queira comprar uma motocicleta que custa X reais. Você já tem Y reais (Y < X), numa poupança que rende R% ao mês. No seu trabalho, você consegue economizar Z reais por mês, e pretende aplicá-los na mesma poupança. Faça uma função int poup() que receba os valores acima como argumentos do tipo double , nessa ordem, e, usando um laço while, calcule e retorne quantos meses serão necessários para você conseguir comprar a moto. Suponha que o preço da moto é estável e que não há correção monetária.
*/

#include <stdio.h>

int fibonacci(int n);

int main(void)
{
    printf("%d\n", fibonacci(3));
    printf("%d\n", fibonacci(1));
    return 0;
}

int fibonacci(int n)
{
    if (n < 3)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}