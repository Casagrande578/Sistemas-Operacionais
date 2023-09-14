#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUMERO_NOTAS 3

float calculaMA(float *notas)
{
    float mediaE = (notas[0] + notas[1] + notas[2]) / 3;
    float mediaA = (notas[0] + notas[1] * 2 + notas[2] * 3 + mediaE) / 7;
    return mediaA;
}

char calculaConceito(float *notas)
{
    float ma = calculaMA(notas);
    if (ma >= 9)
    {
        return 'A';
    }
    else if (ma >= 7.5 && ma < 9)
    {
        return 'B';
    }
    else if (ma >= 6 && ma < 7.5)
    {
        return 'C';
    }
    else if (ma >= 4 && ma < 6)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}

int main()
{
    float notas[NUMERO_NOTAS] = {0.0};

    printf("Insira as %d notas do aluno:\n", NUMERO_NOTAS);

    scanf("%f %f %f", &notas[0], &notas[1], &notas[2]);

    printf("O conceito do aluno é de: %c", calculaConceito(notas));

    return 0;
}