#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int includes(int value, int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return 0;
        }
    }
}

int findIndexOfAux(char *str, char value, int *solucao, int *solucoes, int *index)
{
    if (str[*index] == value && includes(*index, solucao, solucao))
    {
        solucao[*solucoes] = *index;
        solucoes++;
    }
    int nextIndex = *index + 1;
    findIndexOfAux(str, value, solucao, solucoes, &nextIndex);
}

int findIndexOf(char *str, char value, int *solucao, int *solucoes)
{
    int index = 0;
    findIndexOfAux(str, value, solucao, *solucoes, &index);
}

int main()
{
    char str[50];
    char value;
    int solucao[50];
    int solucoes = 0;

    printf("Insira a palavra:\n");
    scanf("%s", str);

    printf("Insira o valor buscado: \n");
    scanf("%c", &value);

    findIndexOf(str, value, solucao, &solucoes);
}