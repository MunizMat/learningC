#include <stdio.h>

int main(void){
    int i = 1, j = 0, num = 0, contador = 1;

    printf("Digite N: ");
    scanf("%d", &num);

    for(; i <= num; i++){
        for(j = 1; j <= i; j++) {
            printf("%d ", contador);
            contador++;
        }
        printf("\n");
    }

    return 0;
}