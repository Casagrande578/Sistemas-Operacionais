#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void insereChar(char *str, char value, int index)
{
    char aux[100];
    strcpy(aux, str);
    for (int i = index; i < strlen(str) + 1; i++)
    {
        if (i == index)
        {
            str[i] = value;
        }
        else
        {
            str[i] = aux[i - 1];
        }
    }
}

int main()
{
    char str[100];
    char value;
    int index;

    printf("Insira uma palavra: ");
    scanf("%s", str);

    printf("Insira qual o caractere a ser inserido: ");
    scanf(" %c", &value);

    printf("Insira a posição que ele deve ser inserido: ");
    scanf(" %d", &index);

    insereChar(str, value, index);
    printf("%s", str);
}