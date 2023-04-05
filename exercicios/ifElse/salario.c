#include <stdio.h>

int main(void){
    int salarioFixo, valorVendas, salarioTotal;
    double comissao = 0.03;

    printf("Salario fixo: ");
    scanf("%d", &salarioFixo);

    printf("Valor das vendas: ");
    scanf("%d", &valorVendas);

    if(valorVendas <= 1500) {
        salarioTotal = salarioFixo + valorVendas * comissao;
        printf("Salario total = %d\n", salarioTotal);
    } else {
        double novaComissao = 0.05;
        salarioTotal = salarioFixo + (1500 * comissao) + ((valorVendas - 1500) * novaComissao);
        printf("Salario total = %d\n", salarioTotal);
    }

    return 0;
}