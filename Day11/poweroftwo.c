#include <stdio.h>

// 2ning darajasini topishda funksiya qilib ishlaganim
int powerOfTwo(int block[], int block_size) {
    int count = 0;
    for (int i = 0; i < block_size; i++) {
        if (block[i] > 0 && (block[i]& (block[i] - 1)) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int myarr[] = {128, 256, 500, 512};
    int block_size = sizeof(myarr) / sizeof(myarr[0]);
    printf("Shuncha 2 ning darajasi bor: %d", powerOfTwo(myarr, block_size));
    return 0;
}