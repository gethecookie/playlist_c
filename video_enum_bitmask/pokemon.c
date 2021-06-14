#include <stdio.h>

typedef enum {
    Carbone = 1,
    Bosco = 2,
    Ciottolo = 4,
    Acquitrino = 8,
    Vestigia = 16,
    Cava = 32,
    Ghiacciolo = 64,
    Faro = 128
} medaglie;

void stampaMedaglie(medaglie cofanetto);



int main() {
    medaglie cofanettoPlayer1;

    cofanettoPlayer1 = Carbone | Bosco | Faro | Ghiacciolo;
    printf("Totale dei bit accesi: %d", cofanettoPlayer1);
    printf("Dimensione della mia variabile: %d", sizeof(cofanettoPlayer1));  // Molto bene!!! Poco spazio tante info!

    stampaMedaglie(cofanettoPlayer1);

    return 0;
}



void stampaMedaglie(medaglie cofanetto){
    int numMed = 0;

    if (cofanetto & Carbone){
        printf("\nHai vinto la medaglia Carbone presso la Palestra di Mineropoli");
        numMed++;
    }

    if (cofanetto & Bosco){
        printf("\nHai vinto la medaglia Bosco presso la Palestra di Evopoli");
        numMed++;
    }

    if (cofanetto & Ciottolo){
        printf("\nHai vinto la medaglia Ciottolo presso la Palestra di Rupepoli");
        numMed++;
    }

    if (cofanetto & Acquitrino){
        printf("\nHai vinto la medaglia Acquitrino presso la Palestra di Pratopoli");
        numMed++;
    }

    if (cofanetto & Vestigia){
        printf("\nHai vinto la medaglia Vestigia presso la Palestra di Cuoripoli");
        numMed++;
    }

    if (cofanetto & Cava){
        printf("\nHai vinto la medaglia Cava presso la Palestra di Canalipoli");
        numMed++;
    }

    if (cofanetto & Ghiacciolo){
        printf("\nHai vinto la medaglia Ghiacciolo presso la Palestra di Nevepoli");
        numMed++;
    }

    if (cofanetto & Faro) {
        printf("\nHai vinto la medaglia Faro presso la Palestra di Arenipoli");
        numMed++;
    }

    printf("\nIn totale hai conquistato %d medaglie\n\n", numMed);
}