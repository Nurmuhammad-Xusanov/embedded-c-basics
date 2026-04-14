#include <stdio.h>

int main(void) {
    int n;
    scanf("%d\n", &n);
    int result = n & (-n);
    printf("%d\n", result);
    return 0;
}