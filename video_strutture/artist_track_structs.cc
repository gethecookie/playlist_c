#include <stdio.h>
#include <string.h>

struct struct_artist {
    char stage_name[20];
    char full_name[50];
    int year;
} artista;

struct struct_track {
    struct struct_artist artista;

    char title[100];
    float duration;
} album[20];


int main() {
    strcpy(artista.stage_name, "Eminem");
    strcpy(artista.full_name, "Bruce Marshall Mathers III");
    artista.year = 1972;

    for (int i = 0; i < 20; i++) {
        strcpy(album[i].title, "Black Magic");
        album[i].duration = 60 * 2 + 54;

        album[i].artista = artista;

        printf("%s, %f, (%s, %s, %d)\n", album[i].title, album[i].duration, album[i].artista.stage_name,
               album[i].artista.full_name, album[i].artista.year);
    }

    return 0;
}