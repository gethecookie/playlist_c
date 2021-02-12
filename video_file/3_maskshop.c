#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_handle = fopen("mascherine.txt", "a"); // a

    if (file_handle == NULL) {
        printf("Errore di apertura file.");
        exit(1);
    }

    while (1) {
        char name[30];
        int mask_count = 0;

        printf("- Nome: ");
        scanf("%s", name);

        printf("- Mascherine: ");
        scanf("%d", &mask_count);

        if (mask_count <= 0) {
            break;
        }

        fprintf(file_handle, "Nome=[%s], Numero=[%d]\n", name, mask_count);
        printf("%s prende %d mascherine.\n\n", name, mask_count);
    }

    fclose(file_handle);
    printf("File chiuso.");
    return 0;
}
