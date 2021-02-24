#include <stdio.h>

int main(int argc, char* argv[]) {

    FILE *sorgente, *destinazione;
    int res;
    char riga[500];

    // Controllo numero di parametri
    if(argc-1 < 2 ) {
        printf("Mancano alcuni parametri\n");
        return -1;
    }

    // File da copiare
    sorgente = fopen(argv[1], "r");
    if(sorgente == NULL) {
        printf("Errore durante apertura file");
        return -1;
    }


    /* ATTENZIONE: se esiste già un file con quel nome, verrà sovrascritto */
    destinazione = fopen(argv[2], "r");
    if(destinazione != NULL) {
        // Esiste un file con il nome che voglio utilizzare per la copia
        printf("Nuovo nome gia' utilizzato!\n");

        fclose(sorgente);
        fclose(destinazione);
        return -1;
    }


    // File da copiare
    destinazione = fopen(argv[2], "w");
    if(destinazione == NULL) {
        printf("Errore durante apertura file");
        return -1;
    }

    
    // Effettuo la copia
    while(fgets(riga, 500, sorgente) != NULL) {
        fputs(riga, destinazione);
    }


    fclose(sorgente);
    fclose(destinazione);

    return 0;
}