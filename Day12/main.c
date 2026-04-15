#include <stdio.h>

int main(void) {
    int n;
    scanf("%d\n", &n);
    
    int result = n & (-n);
    printf("%d\n", result);

    int a;
    scanf("%d\n", &a);
    
    while (a > 0) {
        int bit = a & (-a);
        printf("%d\n", bit);
        a -= bit;
    }
    return 0;
}