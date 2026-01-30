#include <stdio.h>

int main(void) {
  int a = 5;
  int size_a = sizeof(a);
  int size_int = sizeof(int);
  printf("Size of a = %d \n", size_a);
  printf("Size of int = %d \n", size_int);
  return 0;
}
