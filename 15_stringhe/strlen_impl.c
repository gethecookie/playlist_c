#include <stdio.h>
#include <string.h>

int gtc_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0')
        len++;

    return len;
}

int main() {
    char str1[20] = "Get the Cookie!";

    printf("    strlen: [%d]\n", strlen(str1));
    printf("gts_strlen: [%d]\n", gtc_strlen(str1));
    return 0;
}
