Embedded C — Day 1 / Core Summary

C program main() funksiyasidan boshlanadi. To‘g‘ri va toza yozilishi int main(void). Program ishga tushganda OS → C Runtime → main() ketma-ketligi bo‘yicha ishlaydi. return 0; OS ga program muvaffaqiyatli yakunlanganini bildiradi. OS exit statusni 1 byte (0–255) qilib saqlaydi, shuning uchun 256 kabi qiymatlar 0 ga o‘ralib ketadi va xavfli bug hosil qiladi.

int — RAM’da joy egallaydigan butun son turi. Integer arithmetic’da kasr qismi har doim kesib tashlanadi. 5 / 2 = 2. Kasrli qiymat ishlatilsa ham (5.0 / 2), agar natija intga tushsa, u baribir 2 bo‘ladi. Bu CPU integer math qilgani uchun sodir bo‘ladi.

double kasr sonlarni saqlaydi, lekin o‘zi yetarli emas. Floating-point hisoblash bo‘lishi uchun ifodadagi kamida bitta operand double bo‘lishi shart. Shuning uchun double x = a / b; noto‘g‘ri, double x = (double)a / b; to‘g‘ri. Casting bo‘lishdan oldin qilinishi kerak. (double)(a / b) foydasiz, chunki integer division allaqachon bajarilgan bo‘ladi.

Qavslar hisoblash tartibini belgilaydi. CPU avval qavs ichini bajaradi, keyin casting va boshqa operatorlar ishlaydi. Shu sababli qavslar embedded C’da kritik ahamiyatga ega.

5.0, 2.0 kabi qiymatlar double literal hisoblanadi. Ifodada bitta operand double bo‘lsa, butun ifoda floating-point bo‘ladi: 5.0 / 2 = 2.5.

printf format specifierlar faqat chiqarishni belgilaydi, RAM’dagi qiymatni o‘zgartirmaydi. %d — int uchun, %f va %g — double uchun. %g shunchaki keraksiz nolni ko‘rsatmaydi, lekin xotiradagi qiymat o‘zgarmaydi.

0 / 0 — undefined behavior. Embedded systemlarda bu hard fault, watchdog reset yoki system freeze’ga olib kelishi mumkin. Bunday kodlar ishlatilmaydi, comment bilan bloklanadi.

ADC (Analog-to-Digital Converter) analog kuchlanishni CPU tushunadigan integer qiymatga aylantiradi. CPU har doim ADC natijasini butun son sifatida ko‘radi. Voltage hisoblash formulasi:

voltage = (double)adc_value * vref / adc_max


Bu yerda casting muhim, aks holda integer arithmetic natijani buzadi. ADC resolution (10-bit, 12-bit va hokazo) natijaga to‘g‘ridan-to‘g‘ri ta’sir qiladi va har doim datasheet asosida olinadi.

Asosiy xulosa:
Embedded C’da natijadan ko‘ra hisoblash jarayoni muhim. Qavslar, casting va data type’lar — bu faqat syntax emas, balki bug yoki stabil system o‘rtasidagi farq. Float/double avtomatik ishlatilmaydi, faqat ongli qaror bilan qo‘llanadi.