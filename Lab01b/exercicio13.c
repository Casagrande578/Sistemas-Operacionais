#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void removeChar(char *str, int index){
    for(int i = index; i<strlen(str); i++){
        str[i] = str[i+1];
    }
}

int main(){
    char str[100];
    int index;

    printf("Insira a palavra: \n");
    scanf("%s",str);

    printf("Insira a posição do caractere a ser removido: \n");
    scanf("%d",&index);

    removeChar(str, index);
    printf("%s",str);
    return 0;
}