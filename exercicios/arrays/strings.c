#include <stdio.h>

void readStringWithScanf(void){
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("\n%s\n", nome);
};

int main(void){
    char nome[50];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);

    printf("\n%s\n", nome);
}