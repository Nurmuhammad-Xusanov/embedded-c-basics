#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(void) {
    char mystr[] = "Hello";
    char dest[50];
    strcpy(dest, mystr); // dest degan variablega mystr ni copy qiladi
    printf("%s\n", mystr); // shunckai print qilish
    printf("%lu\n", strlen(mystr)); // string sizeni korsatadi output 5
    printf("%s\n", dest); 

    char world[] = " World";
    strcat(mystr, world);
    printf("%s\n", mystr);

    char s1[] = "apple";
    char s2[] = "apple";
    char s3[] = "banana";
    char s4[] = "Apple";
    // if (strcmp(s1, s2) == 0) {
    //     printf("s1 va s2 teng\n");
    // }

    // if (strcmp(s1, s3) < 0) {
    //     printf("s3 s1 dan kichik");
    // }
    printf("%d\n", strcmp(s1, s2)); // 0 chiqadi chunki teng
    printf("%d\n", strcmp(s1, s3)); // -1 chiqadi cuz s1 kichik s3 dan
    printf("%d\n", strcmp(s3,s1)); // 1 chiqadi cuz s3 katta s1 dan
    printf("%d\n", strcmp(s3, s4)); // 32 chiqadi cuz orasida 32 ta harf bor
    printf("%d\n", strcasecmp(s1, s4)); // 0 chiqadi cuz lowercase
    return 0;
}
