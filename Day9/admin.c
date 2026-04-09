#include <stdio.h>

#define READ (1 << 0) // 00000001
#define WRITE (1 << 1) // 00000010
#define EXEC (1 << 2) // 00000100
#define ADMIN (READ | WRITE | EXEC) // 00000111

int main(void) {
    // TASK
    // permga admin ber
    // agar perm adminga teng -> admin user
    // write o'chir
    // tekshir perm = admin | perm != admin
    // Tekshir exec bormi

    int perm = 0;
    perm |= ADMIN; // 00000111
    printf("Permga admin tenglandi: %d\n", perm);

    if (perm == ADMIN) {
        printf("Perm edmin qilingan: %d\n", perm);
    } else {
        printf("Perm admin qilinmagan: %d\n", perm);
    }

    perm &= ~WRITE; // 00000101
    printf("Permdan write o'chirildi: %d\n", perm);

    if ((perm & ADMIN) == ADMIN) {
        printf("Perm hali ham admin: %d\n", perm);
    } else {
        printf("Perm ortiq admin emas: %d\n", perm);
    }

    if (perm & EXEC) {
        printf("Permda exec bor: %d\n", perm);
    } else {
        printf("Permda exec yo'q: %d\n", perm);
    }
    
    return 0;
}