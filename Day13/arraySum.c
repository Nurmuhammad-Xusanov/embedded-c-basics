#include <stdio.h>

int sum(int *arr, int size) {
    if ( arr == NULL || size <= 0) {
        return 0;
    }

    int total = 0;

    for (int i =0; i < size; i++) {
        total += *(arr + 1);
    }

    return total;
}

int main (void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8,};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", sum(arr, size));
}