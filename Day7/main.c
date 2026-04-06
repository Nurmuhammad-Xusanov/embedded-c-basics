#include <stdio.h>
#define READ 1 // 0001
#define WRITE 2 // 0010
#define EXEC 4 // 0100

int main(void) {
  int a = 5; // 0101
  int b = 3; // 0011

  int c = a | b;
  printf("%d\n", c);

  int x = 0; 
  x = x | 1; // 00000001 -> 1 (1 << 0)
  x = x | (1 << 1); // 00000010 -> 2
  // x = x | (1 << 2); // 00000100 -> 4
  // x = x | (1 << 3); // 00001000 -> 8
  // x = x | (1 << 4); // 00010000 -> 16
  // x = x | (1 << 5); // 00100000 -> 32
  // x = x | (1 << 6); // 01000000 -> 64
  // x = x | (1 << 7); // 10000000 -> 128
  printf("%d\n", x);

  if (x & (1 << 1)) { // ozi xozir tepadan amallar tufayli x -> 00000011
    // 00000011 shunaqa bolib kelayabdi. Men esa 1 - bit yoqilgan ekanini tekshiryabman
    printf("Yoqilgan\n");
  } else {
    printf("O'chiq\n");
  } // bu usul bilan faqat bitta bit tekshiriladi

  int n = 10; // 00001010

  if ((n & ((1 << 1) | (1 << 3))) == ((1 << 1) | (1 << 3))) {
    printf("Ikkala bit ham yoqilgan\n");
  }

  int g = 86; // 01010110

  int mask = (1 << 1) | (1 << 2) | (1 << 4) | (1 << 6);
  if ((g & mask) == mask) {
    printf("kerak hammasi bor\n");
  }

  if(g & mask) { // hech bomaganda bitta mos bit borligini tekshiradi
    printf("Hech bolmaganda bittasi bor\n");
  }

  int z = 6;
  z = x | mask;
  printf("%d\n", z); // 86 da ishqilib mask bilan bitlarni yoqayabdi

  g = g | ~mask;
  printf("%d\n", g);
  return 0;
}