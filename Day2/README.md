# Day 2 — Memory Reality Check

Bu darsda C til “syntax” bo‘lishdan chiqdi va real hardware bilan ishlash boshlandi. Asosiy fokus — xotira, bitlar va jim ishlaydigan bug’lar.

---

## 1. `sizeof` — real xotira o‘lchamlari

- `sizeof(type)` va `sizeof(variable)` farqi yo‘q, ikkalasi ham obyekt egallagan baytlarni qaytaradi
- `sizeof(int)` platformaga bog‘liq:
  - PC (32/64-bit): odatda 4 byte
  - Embedded MCU: ko‘pincha 2 byte (16-bit)
- Shu sababli oddiy `int` har doim ishonchli emas

➡️ Birinchi marta RAM bilan real tanishuv.

---

## 2. Stack — avtomatik xotira

- `main()` ichidagi barcha local o‘zgaruvchilar **stack**da saqlanadi
- Stack:
  - tez
  - avtomatik
  - function tugaganda yo‘q bo‘ladi
- Embedded tizimlarda stack juda kichik (1–8 KB)
- Stack overflow:
  - compile-time error bermaydi
  - dastur shunchaki jim ishlamay qoladi (silent bug)

➡️ Keyin RTOS task stack’ni tushunish uchun asos.

---

## 3. Integer overflow — silent killer

- Misol:
  ```c
  uint8_t x = 255;
  x++; // 0 bo‘ladi

voltage_mv = (uint32_t)adc * 3300 / 1023;
voltage_mv = ((uint32_t)adc * VREF_MV + ADC_MAX / 2) / ADC_MAX;
```
---


