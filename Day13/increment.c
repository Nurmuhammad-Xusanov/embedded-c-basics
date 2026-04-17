#include <stdio.h>

void increment(int *a) {
    if (a != NULL) {
        (*a)++;
    }
}

int main(void) {
    int b = 0;
    scanf("%d", &b);
    increment(&b);
    printf("%d", b);
}