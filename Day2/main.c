#include <stdio.h>
#include <stdint.h>

int main(void) {
  int a = 5; // inteager 4 byte boladi 32 va 64 bitlarda bir hil
  // int a qayerda saqlanadi? int a Stack da saqlanadi, yani Stack RAM dan olingan malum bir kichik miqdordagi joy
  // Stack bu avtomatik, tezkor, kichik, function bilan yoq boladi
  // main ichidagi hamma ozharuvchilar stackda saqlanadi
  // Embedded da stack 1-8 KB bolishi mumkin
  // agar overflow bolsa shunchaki o'ladi, silent bug, korinmas xato
  // overflow xatolar asosan:
  // ADC hisoblarda, timer counterlarda, PWM dutylarda, sensor averaginda chiqadi
  // Nega overflowni compile aytmaydi? chunki overflow bu legal, cpu buni dasturchi yani sen bilasan deb oylaydi

  int size_a = sizeof(a); // obyekt olchami
  int size_int = sizeof(int); // type olchami 
  printf("Size of a = %d \n", size_a);
  printf("Size of int = %d \n", size_int);




  //------------ADC FLOATSIZ----------

  // ADC sacling floatsiz
  // float: sekinm RAM yutadi, MCUda bazan bolmaydi
  // voltage = adc * 3.3 / 1023 bu float bilan
  // Masala: ADC - 0-1023 (10-bit) VREF - 3.3v
  // agar vrefni ozini 3.3v qilib ishlatsak bu float boladi va sekin ishlaydi
  // floatsiz ishlash uchun mv yani milivoltda ishlash kerak boladi.
  // 3.3v = 3300mV  double -> int
  // togri floatsiz hisoblasj yoli:
  // voltage_mv = adc * 3300 / 1023
  uint16_t adc = 512; // ADC oqilgan qiymat (0-1023) 10-bit
  uint32_t voltage_mv; // milivolt
  // uint16_t yoki uint32_t nima?
  // ikalasi ham stdint.h kutubxonasidan keladi , uint u -> unsigned (manfiy yoq), int -> inteager, 16/32 bit boladi
  // uint16_t 2byte 16bit boladi va 0 - 65535 oraligida boladi
  // uint32_t 4byte 32bit boladi va 0 - 4,294,967,295 orasida boladi
  // nega oddiy int ishlatmadik?
  // oddiy int platformaga qarab ozgarishi mumkin, 16-bit MCU -> int = 16bit
  // PC -> int = 32bit
  // uint qilib berilsa har doim berilganiday boladi 16 yoki 32, ozgarmaydi

  voltage_mv = (uint32_t)adc* 3300 / 1023; // uint32_t qoyilgani sababi, default holida uint16_t bolsa, voltage_mv overflow bolibketishi mumkin edi
  printf("ADC = %u \n", adc); // %u bu yerda usigned int chiqaradi yani musbat butun sonlar, agar signed int bolsa musbat va manfiy saqlaydi
  // nega aynan bizda unsigned int? chunki adc voltage_mv manfiyda bolishi mumkin emas, faqat musbat bolishi kerak
  printf("Voltage = %u \n", voltage_mv);



  //-----------ADC ROUNDING FLOATSIZ------
  uint16_t max_adc = 1023; // 10-bit
  uint32_t voltage_milivolt;
  voltage_milivolt = (((uint32_t)512 * 3300 + max_adc/2) / max_adc);
  printf("ADC ROUNDING: %u \n", voltage_milivolt);

  
  return 0;
}
