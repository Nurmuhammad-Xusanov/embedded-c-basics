#include <stdio.h>

int findMax(int *a, int *b) {

  if (a == NULL || b == NULL) {
    return -1;
  }

  if (*a > *b) {
    return *a;
  } else {
    return *b;
  }
}

int main(void) {
  int c = 6, d = 5;
  int natija = findMax(&c, &d);
  printf("%d", natija);
  return 0;
}