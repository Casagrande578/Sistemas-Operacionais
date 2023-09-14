#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

struct Pessoa
{
    char nome[50];
    int idade;
    float peso;
    float altura;
};

void readPessoas(struct Pessoa *pessoas)
{
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome da pessoa %d: \n", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);

        printf("Peso: ");
        scanf("%f", &pessoas[i].peso);

        printf("Altura: ");
        scanf("%f", &pessoas[i].altura);
    }
}

void showPessoas(struct Pessoa *pessoas)
{
    for (int i = 0; i < 3; i++)
    {
        printf("Nome: %s - Idade: %d Anos - Peso: %.2fKg - Altura: %.2fm \n", pessoas[i].nome, pessoas[i].idade, pessoas[i].peso, pessoas[i].altura);
    }
}

int main()
{
    struct Pessoa pessoas[3];

    readPessoas(pessoas);

    showPessoas(pessoas);
}
