#include <stdio.h>

int findMax(int *a, int *b, int *result) {
    if (a == NULL || b == NULL || result == NULL) {
        return -1;// error
    }
    *result = (*a > *b) ? *a : *b;
    return 0;
}

int main(void) {
  int a = 6, b = 5, result;
  findMax(&a, &b, &result);
  printf("%d", result);
  return 0;
}