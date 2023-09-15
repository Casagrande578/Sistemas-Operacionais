#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
    int value = 5;
    int pipefd[2]; // Array para os descritores de arquivo do pipe

    if (pipe(pipefd) == -1) {
        perror("pipe");
        return 1;
    }

    pid = fork();

    if (pid == 0) { /* processo filho */
        printf("Entrei no filho!\n");
        value += 15;

        // Fecha a extremidade de leitura do pipe
        close(pipefd[0]);

        // Escreve o valor no pipe
        write(pipefd[1], &value, sizeof(value));
        close(pipefd[1]);

        printf("CHILD: value = %d\n", value); /* LINHA A */
        return 0;
    }
    else if (pid > 0) { /* processo pai */
        wait(NULL);

        // Fecha a extremidade de escrita do pipe
        close(pipefd[1]);

        // Lê o valor do pipe
        read(pipefd[0], &value, sizeof(value));
        close(pipefd[0]);

        printf("PARENT: value = %d\n", value); /* LINHA B - Valor alterado pelo filho */
        return 0;
    }
}