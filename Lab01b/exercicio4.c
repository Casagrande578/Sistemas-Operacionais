#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void toLowerCase(char *palavra)
{
    for (int i = 0; palavra[i]; i++)
    {
        palavra[i] = tolower(palavra[i]);
    }
    return;
}

void ordem(char *pessoa1, char *pessoa2)
{
    char compara1[50];
    char compara2[50];
    strcpy(compara1, pessoa1);
    strcpy(compara2, pessoa2);
    toLowerCase(compara1);
    toLowerCase(compara2);

    if (strcmp(compara1, compara2) < 0)
    {
        printf("%s\n", pessoa1);
        printf("%s", pessoa2);
        return;
    }
    printf("%s\n", pessoa2);
    printf("%s", pessoa1);
    return;
}

int main()
{
    char pessoa1[50];
    char pessoa2[50];

    printf("Insira 2 nomes: \n");

    scanf("%s", pessoa1);
    scanf("%s", pessoa2);
    printf("### Resultado ###\n");
    ordem(pessoa1, pessoa2);
}