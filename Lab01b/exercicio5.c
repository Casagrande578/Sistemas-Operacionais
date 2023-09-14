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

void multiplicaLinha(int *linha, int size, int valor)
{
    for (int i = 0; i < size; i++)
    {
        linha[i] = linha[i] * valor;
        printf("%d ", linha[i]);
    }
    printf("\n");
    return;
}

void multiplicaColuna(int matriz[MAX_SIZE][MAX_SIZE], int coluna, int size, int valor)
{
    for (int i = 0; i < size; i++)
    {
        matriz[i][coluna] = matriz[i][coluna] * valor;
        printf("%d \n", matriz[i][coluna]);
    }
    return;
}

int main()
{
    int matriz[MAX_SIZE][MAX_SIZE];
    int linhas, colunas;

    printf("Informe a quantidade de linhas: \n");
    scanf("%d", &linhas);

    printf("Informe a quantidade de colunas: \n");
    scanf("%d", &colunas);

    printf("Preencha a matriz: \n");
    readMatriz(matriz, linhas, colunas);

    printf("EXEMPLO - MULTIPLICAÇÃO DA PRIMEIRA LINHA POR 2: \n");
    multiplicaLinha(matriz[0], linhas, 2);

    printf("EXEMPLO - MULTIPLICAÇÃO DA PRIMEIRA COLUNA POR 3: \n");
    multiplicaColuna(matriz, 0, colunas, 3);
    return 0;
}