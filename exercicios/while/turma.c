#include <stdio.h>

int main(void){
    int qtdAlunos = 0;
    double altura, mediaIdades, mediaAlturas, idade, somaAlturasMaioresDe20Anos = 0, qtdAlturasMaioresDe20Anos = 0, qtdIdadesMaioresDe170 = 0, somaIdadesMaioresDe170 = 0;

    printf("Idade: ");
    scanf("%lf", &idade);

    while(idade != 0){
        printf("Altura: ");
        scanf("%lf", &altura);

        if(idade > 20){
            somaAlturasMaioresDe20Anos += altura;
            qtdAlturasMaioresDe20Anos++;
        } 

        if(altura < 1.70){
            somaIdadesMaioresDe170 += idade;
            qtdIdadesMaioresDe170++;
        }

        qtdAlunos++;

        printf("Idade: ");
        scanf("%lf", &idade);

    }

    printf("A classe tem %d alunos\n", qtdAlunos);

    mediaIdades = somaIdadesMaioresDe170 / qtdIdadesMaioresDe170;
    mediaAlturas = somaAlturasMaioresDe20Anos / qtdAlturasMaioresDe20Anos;

    if(qtdIdadesMaioresDe170 > 0){
        printf("A idade media dos alunos com menos de 1,70m de altura e' %.2f\n", mediaIdades);
    } else {
        printf("Nao ha' alunos com menos de 1,70m de altura\n");
    }

    if(qtdAlturasMaioresDe20Anos > 0){
        printf("A altura media dos alunos com mais de 20 anos e' %.2f\n", mediaAlturas);
    } else {
        printf("Nao ha' alunos com mais de 20 anos\n");
    }


    return 0;
}