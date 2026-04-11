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
    return 0;
}