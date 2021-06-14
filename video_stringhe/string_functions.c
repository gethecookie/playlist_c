#include <string.h>
#include <stdio.h>

int main() {
    // strlen()
    /*
     * size_t strlen(const char* str);
     *
     * Ritorna la lunghezza della stringa
     * */
    int len = strlen("biscotto");


    // strcmp()
    /*
     * int strcmp (const char* str1, const char* str2);
     *
     * Strcmp serve per vedere se due stringhe sono uguali.
     * Se le stringhe passate solo identiche ritorna zero, altrimenti
     * un numero contenente il delta tra i primi due caratteri disuguali.
     * */

    char command[] = "delete";
    if (strcmp("delete", command) == 0) {
        printf("Deleted.");
    }


    // strcpy()
    /*
     * char* strcpy(char* dest, const char* src);
     *
     * Copia la stringa sorgente (src, incluso il terminatore \0) nella destinazione.
     * Ritorna la stringa copiata
     * */

    struct Cookie {
        char owner[30];
        int chocolatePercentage;
    } gtc;

    //gtc.owner = "Andrea";

    strcpy(gtc.owner, "Christian");
    strcpy(gtc.owner, "Andrea");


    // strcat()
    /*
     * char *strcat(char *base, const char *extra)
     *
     * Concatena extra alla fine di base
     * */

    // Deve avere dimensione giusta per ospitare la stringa concatenata

    char base[30] = "me@";
    char extra[] = "gmail.com";

    strcat(base, extra);


    // strstr()
    /*
     * char *strstr(char *grande, const char *piccolo)
     *
     * Controlla se piccolo è contenuto in grande.
     * Se si, ritorna un puntatore all'occorrenza di piccolo in grande.
     * Altrimenti, ritorna NULL.
     * */

    char *s1 = strstr("Vorrei un Bubble Sort Tea", "Bubble Sort");
    char *s2 = strstr("Vorrei un Bubble Sort Tea", "Heap Sort");




    // strchr()
    /*
     * char *strchr(char *str, char c)
     *
     * Cerca c all'interno di str.
     * Ritorna un puntatore al carattere trovato, oppure NULL se str non contiene c.
     * */

    char *ptr1 = strchr("Iscriviti", 'i');
    char *ptr2 = strchr("Iscriviti", ' ');



    // strtok()
    /*
     * char *strtok(char *str, const char *delim)
     *
     * Splitta str in sottostringhe usando come delimitatori di token delim
     * */

    printf("\n");
    char str[80] = "A1-A2-A3-A5-B2-B6-B12";
    const char s[2] = "-";
    char *token;

    token = strtok(str, s);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }


    return 0;
}
