#include <stdio.h>

int main(void){
    int num1, num2, num3, maiorNum;

    printf("Digite o 1 valor: ");
    scanf("%d", &num1);

    printf("Digite o 2 valor: ");
    scanf("%d", &num2);

    printf("Digite o 3 valor: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3) {
        maiorNum = num1;
    } else if (num2 > num1 && num2 > num3) {
        maiorNum = num2;
    } else {
        maiorNum = num3;
    }

    printf("O maior valor e: %d\n", maiorNum);

    return 0;
}