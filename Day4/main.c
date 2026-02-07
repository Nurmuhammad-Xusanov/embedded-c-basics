#include <stdio.h>

int main(void) {
    int myvar = sizeof(int); // to check int size on bytes, mostly 4byte 
    printf("size of int = %d \n", myvar); // printing, the variable is signed by default which is conrtains negative and positive values
    
    int myvar2 = 2147483647; // the signed int is from -2147483648 to 2147483647, its 4byte(32bit).
    // int maximum 8byte (64) bit gacha bo'lishi mumkin.
    // hozir bu yerda myvar2 qiymati maximum 2147483647 bolishi mumkin, agar undan oshiq qiyamt kiritilsa,
    // ortga qaytadi va eng pastki qiymatdan yana sanab keladi
    // misol 2147483648 kiritlsa, javobda -2147483648 chiqadi
    // agar 2147483649 kiritlsa, javobda -2147483647 chiqadi
    //shu tarzda ketadi
    printf("max value of signed int = %d", myvar2);
    

    return 0;
}