#include <stdio.h>

int main(void){
    double tempFarenheit, tempCelsius;

    printf("Graus F: ");
    scanf("%lf", &tempFarenheit);

    while(tempFarenheit > -459.67){
        tempCelsius = (tempFarenheit - 32) * 5 / 9;
        printf("%g\n", tempCelsius);

        printf("Graus F: ");
        scanf("%lf", &tempFarenheit);

    }

    return 0;
}