#include <stdio.h>

int main(void) {
    int n = 13;

    while ((n & (n - 1)) != 0) {
        n++;
    }
    printf("%d\n", n);

    return 0;
}