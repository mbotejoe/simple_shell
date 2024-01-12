#include "shell.h"

int main(void)
{
    char *line;
    size_t len = 0;
    ssize_t read;

    while (1)
    {
        printf("($) ");
        read = getline(&line, &len, stdin);

        if (read == -1)
        {
            perror("getline");
            exit(EXIT_FAILURE);
        }

        /* Process the command (not implemented in this example) */
        process_command(line);

        free(line);
    }

    return 0;
}

