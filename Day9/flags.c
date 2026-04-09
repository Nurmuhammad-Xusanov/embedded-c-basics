#include <stdio.h>

#define READ (1 << 0) // 00000001
#define WRITE (1 << 1) // 00000010
#define EXEC (1 << 2) // 00000100

int main (void) {
    int perm = 0; // 00000000

    // TASK
    // permissionlar:
    // READ yoqish
    // WRITE yoqish
    // WRITE ochirish
    // EXEC yoqish
    // CHECK

    perm |= READ | WRITE; // 00000011
    printf("Read va Write yoqildi: %d\n", perm);

    perm &= ~WRITE; // 00000001
    printf("Write o'chirildi: %d\n", perm);

    //perm &= ~READ; // 00000000
    //printf("Read o'cirildi: %d\n", perm);

    perm |= EXEC; // 00000101
    printf("Exec yoqildi: %d\n", perm);

    if(perm & READ) {
        printf("Read bor \n");
    }
    if(!(perm & READ)) {
        printf("Read yo'q\n");
    }
    if (perm & WRITE) {
        printf("Write bor \n");
    } 
    if(!(perm & WRITE)) {
        printf("Write yo'q\n");
    }

    int mask = READ | WRITE;
    if ((perm & mask) == mask) {
        printf("Read + Write bor\n");
    }

    if (perm == EXEC) {
        printf("Faqat Exec bor\n");
    }

    return 0;
}