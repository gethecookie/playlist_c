#include <stdio.h>
#include <string.h>

struct struct_artist {
    char stage_name[20];
    char full_name[50];
    int year;
} artista;


int main() {
    strcpy(artista.stage_name, "Eminem");
    strcpy(artista.full_name, "Bruce Marshall Mathers III");
    artista.year = 1972;

    printf("%s, %s, %d\n", artista.full_name, artista.stage_name, artista.year);


    strcpy(artista.stage_name, "Caparezza");
    strcpy(artista.full_name, "Michele Salvemini");
    artista.year = 1973;

    printf("%s, %s, %d\n", artista.full_name, artista.stage_name, artista.year);
    
    return 0;
}
