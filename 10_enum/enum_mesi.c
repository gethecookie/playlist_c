#include <stdio.h>

typedef enum mese{
    Gennaio = 1,
    Febbraio,
    Marzo,
    Aprile,
    Maggio,
    Giugno,
    Luglio,
    Agosto,
    Settembre,
    Ottobre,
    Novembre,
    Dicembre
} mesi;

void stampaMese(mesi numMese);

int main() {

    mesi meseAttuale = Aprile;                 //sfrutto alias definito da typedef
    enum mese meseSuccessivo = Aprile +1;      //sfrutto l'identificativo dato al enum

    stampaMese(meseAttuale);
    printf("\n");
    stampaMese(meseSuccessivo);
}

void stampaMese(mesi numMese){
    
    switch (numMese) {
        case Gennaio:
            printf("Gennaio");
            break;
        case Febbraio:
            printf("Febbraio");
            break;
        case Marzo:
            printf("Marzo");
            break;
        case Aprile:
            printf("Aprile");
            break;
        case Maggio:
            printf("Maggio");
            break;
        case Giugno:
            printf("Giugno");
            break;
        case Luglio:
            printf("Luglio");
            break;
        case Agosto:
            printf("Agosto");
            break;
        case Settembre:
            printf("Settembre");
            break;
        case Ottobre:
            printf("Ottobre");
            break;
        case Novembre:
            printf("Novembre");
            break;
        case Dicembre:
            printf("Dicembre");
            break;
    }
}
