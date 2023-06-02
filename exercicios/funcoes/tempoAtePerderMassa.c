/*
    Questao:
    Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, em gramas, fazer uma função em C que calcule o tempo necessário para que essa massa se torne menor que 0.5 grama. A função deverá receber a massa (double) e retornar o tempo em segundos (int)
*/

#include <stdio.h>

int tempo(double massa);

int main(void)
{
    printf("%d segundos", tempo(500.50));
    printf("%d segundos", tempo(1));
    return 0;
}

int tempo(double massa)
{
    int tempoAtePerderMassa = 0;

    while (massa > 0.5)
    {
        massa = massa / 2;
        tempoAtePerderMassa += 50;
    }

    return tempoAtePerderMassa;
}