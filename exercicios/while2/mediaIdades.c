#include <stdio.h>

int main(void){
    int idade = 0, somaIdades = 0, qtdIdades = 0;
    double mediaIdades = 0;

    while(1){
        printf("Idade: ");
        scanf("%d", &idade);

        if(idade < 0) break;
        else {
            somaIdades += idade;
            qtdIdades++;
        }
    }

    mediaIdades = somaIdades / qtdIdades;
    
    printf("A média de idade é %g\n", mediaIdades);

    return 0;
}