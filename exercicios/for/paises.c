#include <stdio.h>

int main(void){
    int tempoNecessario = 0, habitantesA = 5000000, habitantesB = 7000000;
    double taxaNatA = 1.03, taxaNatB = 1.02;

    while(habitantesA < habitantesB){
        habitantesA *= taxaNatA;
        habitantesB *= taxaNatB;

        tempoNecessario++;
    }

    printf("Tempo necessário: %d anos\n", tempoNecessario);

    return 0;
}