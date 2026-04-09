#include <stdio.h>

int main(void) {
    int a = 0; // 00000000
    // TASK
    // 0-bitni yoqish
    // 1-bitni yoqish
    // 0-bitni toggle qilsh
    // 1-bitni clear qilsh
    // hamma qadam binaryda comment va natija

    a = a | (1 << 0); // 00000001
    printf("0 - bit yoqish = %d\n", a);

    a = a | (1 << 1); // 00000011
    printf("1 - bit yoqish = %d\n", a);

    a = a ^ (1 << 0); // 00000010
    printf("0 - bit toggle qilish = %d\n", a);

    a = a & ~(1 << 1); // 00000000
    printf("1 - bitni clear qilish = %d\n", a);

    // short syntax
    // TASK
    // 1-bitni yoq
    // 3-bitni yoq
    // 1-bitni toggle qil
    // 2-bitni yoq
    // 3-bitni clear qil
    int b = 0;

    b |= (1 << 1); // 00000010
    printf("short syntax, 1 - bit yoqish: %d\n", b);

    b |= (1 << 3); // 00001010
    printf("short syntax, 3 - bit yoqish: %d\n", b);

    b ^= (1 << 1); // 00001000
    printf("short syntax, 1 - bit toggle: %d\n", b);

    b |= (1 << 2); // 00001100
    printf("short syntax, 2 - bit yoqish: %d\n", b);

    b &= ~(1 << 3); // 00000100
    printf("short syntax, 3 - bit clear: %d\n", b);


    // short syntax (task 2)
    // 0, 2, 4-bitlarni yoq
    // 2-bit toggle qil
    // 5-bitni yoq
    // 0 va 4-bitlarni clear qil
    // faqat 5-bit qolishi kerak

    int c = 0; // 00000000

    c |= (1 << 0) | (1 << 2) | (1 << 4); // 00010101
    printf("0, 2, 4-bitlar yoqildi: %d\n", c);

    c ^= (1 << 2); // 00010001
    printf("2-bit toggle qilindi: %d\n", c);
    
    c |= (1 << 5); // 00110001
    printf("5-bit yoqildi: %d\n", c);

    c &= ~((1 << 0) | (1 << 4)); // 00100000
    printf("0 va 4-bitlar clear qilindi: %d\n", c);

    return 0;
}