#include <stdio.h>
#include <string.h>

int main(void) {
    char mystr[] = "Hello";
    char dest[50];
    strcpy(dest, mystr); // dest degan variablega mystr ni copy qiladi
    printf("%s\n", mystr); // shunckai print qilish
    printf("%lu\n", strlen(mystr)); // string sizeni korsatadi output 5
    printf("%s\n", dest); 

    char world[] = " World";
    strcat(mystr, world);
    printf("%s", mystr);
    return 0;
}