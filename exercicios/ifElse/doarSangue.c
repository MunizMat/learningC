#include <stdio.h>

int main(void){
    int idade;

    printf("Idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade <= 67){
        printf("Pode doar sangue\n");
    } else {
        printf("Nao pode doar sangue\n");
    }

    return 0;
}