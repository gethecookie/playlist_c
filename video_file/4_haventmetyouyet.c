#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BRED "\e[1;31m"
#define RSET "\e[0m"

int main() {
    FILE *file_handle = fopen("../haventmetyouyet.txt", "r");

    if (file_handle == NULL) {
        printf("Errore di apertura file.");
        exit(1);
    } else {
        printf("Canzone trovata con successo.");
    }

    char *line = NULL;
    size_t len = 0;

    printf("Inizio lettura.");
    while (getline(&line, &len, file_handle) != -1) {
        // Controllo se la stringa "love" è nella linea
        if (strstr(line, "love")) {
            // Stampo la riga in rosso
            printf(BRED "%s" RSET, line);
        } else {
            // Stampo la riga normalmente
            printf("%s", line);
        }
    }

    fclose(file_handle);
    printf("\nFile chiuso.");
    return 0;
}
