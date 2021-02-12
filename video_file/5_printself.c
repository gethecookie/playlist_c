#include <stdio.h>
#include <stdlib.h>

char file_name[] = __FILE__;
char file_mode[] = "r";

int main() {
    FILE *handle = fopen(file_name, file_mode);

    if (handle == NULL) {
        printf("Errore di apertura file.");
        exit(1);
    } else {
        printf("File aperto con successo.\n\n");
    }

    // Carattere usato per scandire il file
    char current_char;

    // Numero caratteri nel file
    int char_count = 0;

    // Numero linee nel file
    int line_count = 0;

    while ((current_char = getc(handle)) != EOF) {
        // Conteggio caratteri e righe
        char_count++;
        if (current_char == '\n') {
            line_count++;
        }

        // Stampo il carattere
        printf("%c", current_char);
    }

    printf("\n\nCaratteri: [%d]. Righe: [%d]\n", char_count, line_count);

    fclose(handle);
    printf("File chiuso.");
    return 0;
}
