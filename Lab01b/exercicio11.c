#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_SIZE 50

void readMatriz(int matriz[MAX_SIZE][MAX_SIZE], int linhas, int colunas)
{
    int valor;
    for (int linha = 0; linha < linhas; linha++)
    {
        for (int coluna = 0; coluna < colunas; coluna++)
        {
            printf("Linha: %d - Coluna: %d - Valor: ", linha, coluna);
            scanf("%d", &valor);
            matriz[linha][coluna] = valor;
        }
    }
    return;
}

void showMatriz(int matriz[MAX_SIZE][MAX_SIZE], int linhas, int colunas)
{
    for (int linha = 0; linha < linhas; linha++)
    {
        for (int coluna = 0; coluna < colunas; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}

void somaLinhas(int matriz[MAX_SIZE][MAX_SIZE], int colunas)
{
    for (int coluna = 0; coluna < colunas; coluna++)
    {
        matriz[1][coluna] = matriz[0][coluna] + matriz[1][coluna];
    }
    return;
}

void multiplicaLinhas(int matriz[MAX_SIZE][MAX_SIZE], int colunas)
{
    for (int coluna = 0; coluna < colunas; coluna++)
    {
        matriz[1][coluna] = matriz[0][coluna] * matriz[1][coluna];
    }
    return;
}
int main()
{
    int matriz[MAX_SIZE][MAX_SIZE];
    int linhas, colunas;
    linhas = 2;

    printf("A MATRIZ TERÁ 2 LINHAS\n");

    printf("Insira a quantidade de colunas: \n");
    scanf("%d", &colunas);

    printf("Preencha a matriz:\n");
    readMatriz(matriz, linhas, colunas);

    printf("Matriz original: \n");
    showMatriz(matriz, linhas, colunas);

    somaLinhas(matriz, colunas);
    printf("Matriz com as linhas somadas: \n");
    showMatriz(matriz, linhas, colunas);

    multiplicaLinhas(matriz, colunas);
    printf("Matriz com as linhas multiplicadas: \n");
    showMatriz(matriz, linhas, colunas);

    return 0;
}