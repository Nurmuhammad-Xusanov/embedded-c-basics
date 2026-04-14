#include <stdio.h>

int main(void) {
    // berilgan qiymatga eng yaqin bo'lgan, o'zidan katta 2 ning darajasini topib beradi
    int n = 13;

    while ((n & (n - 1)) != 0) {
        n++;
    }
    printf("%d\n", n);

    return 0;
}