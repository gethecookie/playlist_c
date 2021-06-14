#include <stdio.h>
#include <stdlib.h>

#define B2BP "%c%c%c%c%c%c%c%c"
#define B2B(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')

#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BYEL "\e[1;33m"
#define BBLU "\e[1;34m"
#define BCYN "\e[1;36m"
#define UCYN "\e[4;35m"
#define RSET "\e[0m"

char* calias(char c) {
    switch (c) {
        case 0: return "NUL";
        case 1: return "SOH";
        case 2: return "STX";
        case 6: return "ACK";
        case 7: return "BEL";
        case 8: return "BACKSPACE";
        case 9: return "HT";
        case 10: return "LF";
        case 11: return "VT";
        case 12: return "FF";
        case 24: return "CAN";
        case 29: return "GS";
        case 32: return "SPACE";
        case 48: return "ZERO";
        default: return "";
    }
}

void line(char c, char *chartype, char *color_code) {
    if (c == 65 || c == 97 || c == 48)
        printf("[" UCYN B2BP RSET "] ", B2B(c));
    else
        printf("[" B2BP "] ", B2B(c));

    printf("[%03d] -> [%s%c%s]\t", c, color_code, c, RSET);

    char *mp = calias(c);
    if (mp[0] != '\0')
        printf("~%s%s%s", color_code, mp, RSET);
    else
        printf("\t");

    printf("\t\t\t\t");
    printf("%s%s%s", color_code, chartype, RSET);

    printf("\n");
}

int main() {
    char w = 0;
    int i = 0;

    printf("%c", '\33');

    while (i <= 31) {
        line(w, "caratteri di controllo", BCYN);
        i++;
        w++;
    }

    while (i <= 47) {
        line(w, "speciali", BYEL);
        i++;
        w++;
    }

    while (i <= 57) {
        line(w, "cifre", BBLU);
        i++;
        w++;
    }

    while (i <= 64) {
        line(w, "speciali", BYEL);
        i++;
        w++;
    }

    while (i <= 90) {
        line(w, "alfabeto maiuscolo", BGRN);
        i++;
        w++;
    }

    while (i <= 96) {
        line(w, "speciali", BYEL);
        i++;
        w++;
    }

    while (i <= 122) {
        line(w, "alfabeto minuscolo", BGRN);
        i++;
        w++;
    }

    while (i <= 126) {
        line(w, "speciali", BYEL);
        i++;
        w++;
    }

    while (i == 127) {
        line(w, "caratteri di controllo", BCYN);
        i++;
        w++;
    }

    fflush(stdout);
    fflush(stdin);
    getchar();
    printf("\n\n\n");

    while (i <= 255) {
        line(w, "errore", BRED);
        i++;
        w++;
    }

    while (i == 256) {
        line(w, "caratteri di controllo", BCYN);
        i++;
        w++;
    }

    return EXIT_SUCCESS;
}

