#include <stdio.h>

char conceito(double nota);
int potencia(int base, int expoente);
int idadeEmDias(int idadeEmAnos, int idadeEmMeses, int idadeEmDias);
int factorial(int n);

int main(void){
    printf("%d\n", factorial(3));
    printf("%d\n", factorial(5));
    printf("%d\n", factorial(0));
    return 0;
}

int factorial(int n){
    if(n > 1) return n * factorial(n - 1);
    else return 1;
}

// int factorial(int n){
//     int resultado = n;
//     for(int i = n; i > 1; i--){
//         n--;
//         resultado *= n;
//     }
//     return resultado;
// }

int idadeEmDias(int idadeEmAnos, int idadeEmMeses, int idadeEmDias){
    if(idadeEmMeses > 12 || idadeEmDias > 30) return -1;

    return idadeEmAnos * 365 + idadeEmMeses * 30 + idadeEmDias;
}

char conceito(double nota){
    char conceito = 'A';
    if (nota < 9) conceito = 'B';
    if(nota < 7) conceito = 'C';
    if(nota < 5) conceito = 'D';
    return conceito;
}

int potencia(int base, int expoente){
    int resultado = base;
    for (int i = 1; i < expoente; i++){
        resultado = resultado * base;
    }
    return resultado;
}