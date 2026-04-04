#include <stdio.h>
#include <string.h>

int main(void) {
    char matn[] = "salom dunyo negrlar";
    char *natija = strstr(matn, "dunyo");
    char *strnatija = strchr(matn, 'n');

    if (natija != NULL) {
        printf("%s\n", natija);
    }

    if (natija != NULL) {
        printf("%s\n", strnatija);
    }

    int a = 10, b = 4, c = 10;
    printf("%d\n", a > b && a == c);
    printf("%d\n", a < b || a == c);
    printf("%d\n", !(a == c));



    return 0;
}