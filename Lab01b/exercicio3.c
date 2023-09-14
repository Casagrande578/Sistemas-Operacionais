#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int isOod(int *numero)
{
    if (*numero % 2 == 0)
    {
        return 1;
    }
    return 0;
}

void printSpaces(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    return;
}

void printPiramideAux(int tamanho, int inicio, int fim, int spaces)
{
    int param = inicio;
    printSpaces(spaces);
    if (inicio == fim)
    {
        printf("%d", inicio);
        return;
    }
    do
    {
        printf("%d", param);
        param++;
    } while (param != fim + 1);

    printf("\n");
    printPiramideAux(tamanho - 1, inicio + 1, fim - 1, spaces + 1);
}

void printPiramide(int tamanho)
{
    printPiramideAux(tamanho, 1, tamanho, 0);
}

int main()
{
    int tamanhoMaximo;

    do
    {
        printf("Insira um numero(impar): \n");
        scanf("%d", &tamanhoMaximo);
    } while (isOod(&tamanhoMaximo));

    printPiramide(tamanhoMaximo);
    return 0;
}