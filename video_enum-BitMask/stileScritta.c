#include <stdio.h>

typedef enum{
    Corsivo = 1,
    Grassetto = 2,
    Sottolineato = 4
} stileScritta;


int main() {
    stileScritta scritta = Grassetto | Corsivo;
    printf("Numero: %d", scritta);

    if (scritta & Grassetto)
        printf("\nScritta in grassetto");
    
    if (scritta & Corsivo)
        printf("\nScritta in corsivo");
    
    if (scritta & Sottolineato)
        printf("\nScritta in sottolineato");
}
