#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LINHA 4
#define MAX_COLUNA 4

int minimo(int matriz[MAX_LINHA][MAX_COLUNA])
{
    int menor;
    for (int linha = 0; linha < MAX_LINHA; linha++)
    {
        for (int coluna = 0; coluna < MAX_COLUNA; coluna++)
        {
            if (linha == 0 && coluna == 0)
            {
                menor = matriz[0][0];
            }
            else if (matriz[linha][coluna] < menor)
            {
                menor = matriz[linha][coluna];
            }
        }
    }
    return menor;
}

int main()
{
    int matriz[MAX_LINHA][MAX_COLUNA];
    int menor;
    srand(time(NULL));
    for (int linha = 0; linha < MAX_LINHA; linha++)
    {
        for (int coluna = 0; coluna < MAX_COLUNA; coluna++)
        {
            matriz[linha][coluna] = rand();
        }
    }

    menor = minimo(matriz);
    printf("O menor numero da matriz: %d\n", menor);
    return 0;
}