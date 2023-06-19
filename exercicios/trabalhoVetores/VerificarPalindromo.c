#include <stdio.h>
#include <string.h>

int verificarPalindromo(char palavra[])
{
    int resultado = 0;

    char copiaPalavra[30];
    strcpy(copiaPalavra, palavra);
    size_t tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++)
    {
        copiaPalavra[i] = palavra[tamanho - i - 1];
    }

    resultado = strcmp(palavra, copiaPalavra);

    if (resultado == 0)
        return 1;
    return 0;
}

int main(void)
{
    char palavra[30];
    strcpy(palavra, "osso");
    printf("%d", verificarPalindromo(palavra));
}