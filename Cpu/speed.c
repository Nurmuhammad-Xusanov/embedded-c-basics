#include <stdio.h>
#include <time.h>

int main() {
    long long sum = 0;
    clock_t start = clock();

    for (long long i = 0; i < 1000000000; i++) {
        sum += i;
    }

    clock_t end = clock();

    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time: %f seconds\n", time_spent);

    return 0;
}