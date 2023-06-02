#include <stdio.h>

int poup(double precoMoto, double quantiaAtual, double rendimentoPoup, double investimentoMensal);

int main(void)
{
    printf("Foram necessarios %d meses\n", poup(20000, 5000, 0.5, 500));
    printf("Foram necessarios %d meses\n", poup(20000, 19000, 0.5, 910));
    return 0;
}

int poup(double precoMoto, double quantiaAtual, double rendimentoPoup, double investimentoMensal)
{
    double quantiaFaltante = precoMoto - quantiaAtual;
    int meses = 0;
    while (quantiaFaltante > 0)
    {
        quantiaAtual = quantiaAtual * (1 + rendimentoPoup / 100) + investimentoMensal;
        quantiaFaltante = precoMoto - quantiaAtual;
        meses++;
    }
    return meses;
}