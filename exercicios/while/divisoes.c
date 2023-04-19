#include <stdio.h>

int main(void){
    double numero;
    int qtdDivisoes = 0;

    printf("Digite N: ");
    scanf("%lf", &numero);

    while(numero >= 1 ){
        numero /= 2;
        qtdDivisoes++;
    }

    printf("Ultimo resultado = %g\nForam feitas %d divisoes\n", numero, qtdDivisoes);

    return 0;
}