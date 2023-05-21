#include <stdio.h>

double somar(double x, double y);
double subtrair(double x, double y);
double dividir(double x, double y);
double multiplicar(double x, double y);
void exibirMenu(void);
double input(char mensagem[]);
int getEscolhaUsuario(void);

int main(void){

    while(1){
        exibirMenu();

        int escolhaUsuario = getEscolhaUsuario();

        if(!(escolhaUsuario >= 1 && escolhaUsuario <= 4)) break;

        double a = input("Digite o primeiro numero da operacao: ");
        double b = input("Digite o segundo numero da operacao: ");

        if(escolhaUsuario == 1) printf("\n%g + %g = %g\n\n" , a, b, somar(a, b));
        else if(escolhaUsuario == 2) printf("\n%g - %g = %g\n\n" , a, b, subtrair(a, b));
        else if(escolhaUsuario == 3) printf("\n%g dividido por %g = %g\n\n" , a, b, dividir(a, b));
        else printf("\n%g x %g = %g\n\n" , a, b, multiplicar(a, b));
    }

    printf("Sessao encerrada\n");

    return 0;
}

// Procedimento para exibir o menu na tela do usuario
void exibirMenu(void){
    printf("Digite 1 para realizar soma\n");
    printf("Digite 2 para realizar subtracao\n");
    printf("Digite 3 para realizar divisao\n");
    printf("Digite 4 para realizar multiplicacao\n");
    printf("Digite qualquer outro valor para sair\n");
}

// Recolher dados do usuario
double input(char mensagem[]){
    double num = 0.0;
    
    printf("%s", mensagem);
    scanf("%lf", &num);

    return num;
}

int getEscolhaUsuario(void){
    int num = 0;

    scanf("%d", &num);

    return num;
}

// Operações aritméricas
double somar(double x, double y){
    return (x + y);
}

double subtrair(double x, double y){
    return (x - y);
}
double dividir(double x, double y){
    return (x / y);
}
double multiplicar(double x, double y){
    return (x * y);
}