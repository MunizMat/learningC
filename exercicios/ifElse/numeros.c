#include <stdio.h>

int main(void){
    int numA, numB;

    printf("Digite o numero A: ");
    scanf("%d", &numA);

    printf("Digite o numero B: ");
    scanf("%d", &numB);

    if(numA > numB){
        printf("Primeiro maior\n");
    } else if (numA < numB) {
        printf("Segundo maior\n");
    } else {
        printf("Numeros iguais\n");
    }

    return 0;
}