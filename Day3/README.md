Day3C Fundamentals — Day Summary
Variable Naming Rules

Variable nomlari harflar, raqamlar va underscore (_) dan iborat bo‘lishi mumkin

Variable raqam bilan boshlanmaydi

❌ 2var

✅ var2

C case-sensitive

var, Var, vAr — barchasi boshqa-boshqa

C keyword larini variable nomi qilib bo‘lmaydi

if, else, for, while, return, va hokazo

_ bilan boshlanadigan nomlar system / compiler uchun reserved

_count texnik jihatdan mumkin, lekin yomon amaliyot

Naming’da lowercase ishlatish afzal

Variable nomlari qisqa va ma’noli bo‘lishi kerak

char Type va Range

char platformaga bog‘liq

signed yoki unsigned bo‘lishi mumkin

char x = 200; → portable emas

Aniq ishlash uchun:

unsigned char

yoki uint8_t (embedded’da tavsiya etiladi)

sizeof

sizeof — function emas, unary operator

U o‘ziga berilgan type yoki expression size ni qaytaradi

int a[5];
int *p = a;

sizeof(a); // array size
sizeof(p); // pointer size

Pointer Basics

& — variable manzilini (address) olish

* — dereference operator

declaration’da pointer e’lon qiladi

expression’da qiymatni olish uchun ishlatiladi

Pointer arithmetic:

p + 1 = address + sizeof(*p)


char* → +1 byte

int* → +4 byte

double* → +8 byte

Function Call Behavior

Function argumentlari copy bo‘ladi (pass-by-value)

Shuning uchun function ichida o‘zgarish tashqariga chiqmaydi

O‘zgartirish uchun pointer ishlatiladi

printf va Format Specifiers

%d — int uchun placeholder

Har bir %d uchun bitta argument bo‘lishi shart

Kam argument → undefined behavior

expected expression before ')' token

syntax error

odatda ortiqcha vergul sabab chiqadi

ADC Conversion (Without Float)

Float embedded’da yomon amaliyot

ADC qiymatini integer math bilan hisoblash:

voltage_mv = (uint32_t)adc_raw * 3300 / 1023;


Oldin multiply, keyin divide — precision uchun

(uint32_t) — overflow’dan saqlanish uchun