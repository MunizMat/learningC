#include <stdio.h>

int main(void){
    int pessoa = 1, pessoaMaisPesada = 0;
    double altura = 0, alturaPessoaMaisPesada = 0, peso = 0, maiorPeso = 0;

    while(pessoa < 6){
        printf("Altura da pessoa %d: ", pessoa);
        scanf("%lf", &altura);

        printf("Peso da pessoa %d:", pessoa);
        scanf("%lf\n", &peso);

        if(peso > maiorPeso){
            maiorPeso = peso;
            pessoaMaisPesada = pessoa;
            alturaPessoaMaisPesada = altura;
        }
        pessoa++;
    }

    
    printf("A pessoa mais pesada e' a de numero %d, com altura %g\n", pessoaMaisPesada, alturaPessoaMaisPesada);

    return 0;
}