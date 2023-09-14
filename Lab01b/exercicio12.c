#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void findIndexOfAux(char *str, char value, int *solucao, int *solucoes, int *index)
{
    if(*index == strlen(str))
    {
        return;
    }
    if (str[*index] == value )
    {
            solucao[*solucoes] = *index;
            *solucoes = *solucoes + 1;
    }
    int nextIndex = *index + 1;
    findIndexOfAux(str, value, solucao, solucoes, &nextIndex);
}

void findIndexOf(char *str, char value, int *solucao, int *solucoes)
{
    int index = 0;
    findIndexOfAux(str, value, solucao, solucoes, &index);
    return;
}

void showSolution(int *solucao, int solucoes){
    for(int i=0; i<solucoes; i++){
        printf("index: %d\n",solucao[i]);
    }
    return;
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
    scanf(" %c", &value);

    findIndexOf(str, value, solucao, &solucoes);

    showSolution(solucao,solucoes);
}