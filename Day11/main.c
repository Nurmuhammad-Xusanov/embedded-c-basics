#include <stdio.h>

// Brain Kernighan
int hammingWeight(int n) {
    int count = 0;
    while (n) {
        n = n & (n -1); // har safar 1 ta "1"-bit o'chadi
        count++; // o'chgan bitni hisoblaymiz
    }
    return count;
}

int main(void) {
    int a = 8;
    printf("%d sonida shuncha 1 bor: %d\n", a, hammingWeight(a));


    // Power of Two check
    // 2 ning darajasimi yoki yoq tekshirish
    if (a > 0 && (a & (a - 1)) == 0) {
        printf("%d bu son 2 ning darajasi\n", a);
    } else {
        printf("%d bu son 2 nig darajasi eams\n", a);
    }


    // 1. Massivni e'lon qilish
    int block[] = {100, 128, 256, 500, 512, 1000, 1024};
    
    // 2. Massiv elementlari sonini avtomatik hisoblash
    int size_block = sizeof(block) / sizeof(block[0]); 
    
    int count = 0; // 2 ning darajalarini sanash uchun o'zgaruvchi

    // 3. Massiv bo'ylab sikl (loop)
    for (int i = 0; i < size_block; i++) {
        
        // 4. Bitwise usulida 2 ning darajasini tekshirish
        // Agar (n & (n-1)) == 0 bo'lsa, demak bu 2 ning darajasi
        if (block[i] > 0 && (block[i] & (block[i] - 1)) == 0) {
            printf("%d - bu son 2 ning darajasi\n", block[i]);
            count++;
        }
    }

    // 5. Yakuniy natijani chiqarish
    printf("\nJami 2 ning darajasi bo'lgan sonlar: %d ta\n", count);
    return 0;
}

