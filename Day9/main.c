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
    return 0;
}