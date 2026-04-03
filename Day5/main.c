#include <stdio.h>
#include <string.h>

int main(void) {
    char mystr[6] = "Hello";
    char dest[50];
    strcpy(dest, mystr);
    printf("%s\n", mystr); // shunckai print qilish
    printf("%lu\n", strlen(mystr)); // string sizeni korsatadi output 5
    printf("%s\n", dest);
    return 0;
}