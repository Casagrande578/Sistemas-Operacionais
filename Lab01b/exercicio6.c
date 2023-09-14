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

void transposta(int matriz[MAX_SIZE][MAX_SIZE], int colunas, int linhas, int transposta[MAX_SIZE][MAX_SIZE])
{
    for (int linha = 0; linha < linhas; linha++)
    {
        for (int coluna = 0; coluna < colunas; coluna++)
        {
            transposta[linha][coluna] = matriz[coluna][linha];
            printf("%d ", transposta[linha][coluna]);
        }
        printf("\n");
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

int main()
{
    int matrizOriginal[MAX_SIZE][MAX_SIZE];
    int matrizTransposta[MAX_SIZE][MAX_SIZE];
    int linhas, colunas;

    printf("Insira a quantidade de linhas da matriz(original): \n");
    scanf("%d", &linhas);

    printf("Insira a quantidade de colunas da matriz(original): \n");
    scanf("%d", &colunas);

    printf("Preencha a matriz(original)\n");
    readMatriz(matrizOriginal, linhas, colunas);

    printf("MATRIZ ORIGINAL: \n");
    showMatriz(matrizOriginal, linhas, colunas);

    printf("MATRIZ TRANSPOSTA: \n");
    transposta(matrizOriginal, linhas, colunas, matrizTransposta);

    return 0;
}