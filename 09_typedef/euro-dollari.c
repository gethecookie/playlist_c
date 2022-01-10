#include <stdio.h>

typedef float euro;
typedef float dollaro;

dollaro converti(euro qt);

int main() {
    euro totale = 600.85;
    euro deposito;
    dollaro totaleConvertito;

    printf("Quanto vuoi depositare?");
    scanf("%f", &deposito);
    totale += deposito;
    
    printf("Saldo totale: %.2f €", totale);

    totaleConvertito = converti(totale);
    printf("\nSaldo totale: %.2f $", totaleConvertito);
}

dollaro converti(euro qt){
    return qt / 0.85;
}

