#include <stdio.h>

int main(void) {
    // ------------POINTER ASOSLARI---------
    int a = 10; // pointer bu xotira manzili
    int *p = &a;
    *p = 20; // a = 20
    // p manzil
    // *p qiymat
    if (p != NULL) { // agar p addresini olgan variable NULL ga teng bolmasa,
        *p = 5; // p addresini olgan variable qiymatini 5 ga tenglaydi
    };  // nega nulldan qorqish kerak? agar null qiymati bolgan variablega qiymat tenglansa, crash boladi



    // -----------POINTER ARITHMETIC------------
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // birinchidagi elementga pointer
    //ptr hozie aee [0] ga ishora qiladi (10)
    // ptr + 1; keyingi elementga otadi
    // ptr + 2; 2 ta oldinga 
    // *(ptr + 1); arr[1] ni olish = 20
    // *(ptr + 3); arr[3] no olish = 40
    // ptr + 1; deganda 1 BAYT emas, balki 1 ELEMENTS oldinga o'tadi
    // ptr + 3; arr[3] ga
    // (ptr + 3) - 2; arr[1] ga qaytai
    // ptr++; keyingi elementga
    // ptr--; oldingi elementga

    for(int *p = arr; p < arr +5; p++) {
        printf("%d ", *p); // 10 20 30 40 50
    }
    return 0;
}