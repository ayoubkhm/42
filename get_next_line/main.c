#include <stdio.h>
#include "get_next_line.h"

int main(void) {
    int fd;
    char *line;

    fd = open("test.txt", O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return 1;
    }

    printf("Début de la lecture du fichier test.txt\n");
    while ((line = get_next_line(fd)) != NULL) {
        printf("\033[0;34mLigne lue : %s\033[0m", line);
        free(line);
    }

    close(fd);
    printf("Fin de la lecture du fichier\n");
    return 0;
}