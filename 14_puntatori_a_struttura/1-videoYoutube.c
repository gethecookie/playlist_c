#include <stdio.h>

typedef struct {
    char titolo[30];
    char nomeCanale[30];
    int views;
} videoYoutube;

int main() {
    videoYoutube video1 = {"Biscotto buonissimo", "GetTheCookie", 1562};

    // Structure member Operator
    printf("Il video: %s, realizzato da %s, ha totalizzato %d visualizzazioni!", video1.titolo, video1.nomeCanale, video1.views);

    video1.views = 1894;
    printf("\nIl video: %s, realizzato da %s, ha totalizzato %d visualizzazioni!", video1.titolo, video1.nomeCanale, video1.views);

    videoYoutube *ptrVideo = &video1;
    (*ptrVideo).views = 2135;
    printf("\nIl video: %s, realizzato da %s, ha totalizzato %d visualizzazioni!", video1.titolo, video1.nomeCanale, video1.views);

    // Structure pointer operator
    ptrVideo -> views = 87654;
    printf("\nIl video: %s, realizzato da %s, ha totalizzato %d visualizzazioni!", video1.titolo, video1.nomeCanale, video1.views);

    return 0;
}
