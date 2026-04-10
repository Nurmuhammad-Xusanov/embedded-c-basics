#include <stdio.h>

int main(void) {
    // EVEN / ODD
    int a = 1; // 00000001
    if (a & 1) {
        printf("Toq: %d\n", a);
    } else {
        printf("Juft: %d\n", a);
    }

    
    return 0;
}