#include <stdio.h>
#include <stdlib.h>

int main() {
    int codice;
    printf("Inserire codice: ");
    scanf("%d", &codice);

    FILE *file_handle = fopen("codice.txt", "w");

    if (file_handle == NULL) {
        printf("Errore di apertura file.");
        exit(1);
    }

    fprintf(file_handle, "%d", codice);
    printf("Codice [%d] scritto in codice.txt\n", codice);

    fclose(file_handle);
    printf("File chiuso.");
    return 0;
}
