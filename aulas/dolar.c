#include <stdio.h>

int main(void){
    // Declaração de variáveis
    double primeira_nota, segunda_nota, media;

    // Recebendo input 
    printf("Digite a primeira nota: ");
    scanf("%lf", &primeira_nota);

    printf("Digite a segunda nota: ");
    scanf("%lf", &segunda_nota);

    // Calculando e imprimindo media
    media = (primeira_nota + segunda_nota) / 2;
    printf("Media=%g\n", media);

    return 0;
}