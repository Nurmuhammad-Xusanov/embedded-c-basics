#include <stdio.h>

int main(void) {
    int a = 0; // 00000000
    
    // n & 1 juft yoki toq ekanini aniqlash
    // juft sonning birinchi biti doim 0
    // toq sonning birinchi biti doim 1
    if (a & 1) {
        printf("Toq son = %d\n", a);
    } else {
        printf("Juft son = %d\n", a);
    }

    // n & (n - 1) eng o'ngdagi 1 bitni o'chiradi
    int b = 7; // 00000111
    
    printf("b = %d\n", b); // 7 00000111
    b = b & (b - 1);
    printf("b = %d\n", b); // 6 00000110
    b = b & (b - 1);
    printf("b = %d\n", b); // 4 00000100
    b = b & (b - 1);
    printf("b = %d\n", b); // 0 00000000

    return 0;
}