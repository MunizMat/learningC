#include <stdio.h>

int main (void){
    int num = 0, i = 0, isPrimo = 1;
    printf("Digite N: ");
    scanf("%d", &num);

    for(i = num - 1; i >=2; i--){
        if(num % i == 0) {
            isPrimo = 0;
            break;
        }
    }

    if(isPrimo) printf("O número %d e primo\n", num);
    else printf("O número %d nao e primo\n", num);


    return 0;
}