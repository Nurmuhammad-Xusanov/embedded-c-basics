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
    printf("%d\n", a > b && a == c); // 1 ikalasi true
    printf("%d\n", a < b || a == c); // 1 bittasi true
    printf("%d\n", !(a == c)); // 0 trueni teskarisi


    // BITWISE

    int x = 5; // 00000101 binary
    int result = x & 1; // agar toq son bolsa 1 qaytaradi bolmasa 0
    printf("%d\n", result);

    if (x & 1) {
        printf("Toq son: %d\n", x);
    } else {
        printf("Juft son: %d\n", x);
       
    }
    return 0;
}