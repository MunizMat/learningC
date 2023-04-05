#include <stdio.h>

int main(void){
    int numA, numB, maiorNum;

    printf("Digite o numero A: ");
    scanf("%d", &numA);

    printf("Digite o numero B: ");
    scanf("%d", &numB);

    if(numA > numB){
        maiorNum = numA;
    } else {
        maiorNum = numB;
    }

    printf("%d\n", maiorNum);

    return 0;
}