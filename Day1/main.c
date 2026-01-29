#include <stdio.h>

int main(void) {
    // INT division (inteager divisionda, inteager oddiy holatda hech qanday kasr sonni olmaydi. U oz nomi bilan aytilgani kabi faqatgina butun sonni qabul qiladi.)
    int a = 5;
    int b = 2;
    int int_result = a / b;
    printf("int_result = %d \n", int_result); // javob 2 boladi. 2.5 emas. Chunki aytilgani kabi int bolgandan song faqat butun qism olinadi


    double wrong_double = a / b;
    printf("wrong_double = %f \n", wrong_double); // 2.00000 bolib chiqadi javob
    //printf da format specifierlar bor, misol uchun bu yerda %f ishlatdik, bu unlcean oladi, yani mavjud barcha sonlarni ola veradi lekin hotirada clean double qoladi
    //shu yerda, doubleni clean olish uchun %g dan ham foydalanilsa boladi, ayni shu turishida %g ishlatilsa javob 2 chiqadi. lekin ram da 2.0 sifatida saqlana veradi.
    // \n esa bu shunchaki joy tashlash yani bitta paragrf pasga tushish


    double correct_double1 = (double)a / b; // bunda, a = 5.0 qilib olinadi b esa oz holida 2 bolib qoladi, agar doubleda bitta qiymat kasr sonli bolsa, javob ham kasr sonda chiqadi. Agar ikala qiymat ham inteager bolsa, inteager chiqaveradi
    double correct_double2 = a / (double)b; // bu yerda ham huddi yuqoridagi ish bolayabdi faqat endi a uchun emas b uchun qilingan

    printf("correct_double1 = %f \n", correct_double1);
    printf("correct_double2 = %g \n", correct_double2);
    // tepada printf specifierlarini yaqqil ishlashiga misol, aynan doublening %f va %g lariga


    double useless_cast = (double)(a / b);
    printf("useless_cast = %f \n", useless_cast); // qavslar xato qoyilgani sababli ishlamaydi
    // birnchi bolib qavs ichini ishlaydi, a / b qilib javobni double qilib olamay deydi lekin javob allaqachin inteager bolib chiqgan boladi va shuni deb (double) oddiy inteager ni double qilib 2.0 qilib oladi, tashqarida 2.000000 koringani bilan, ramda 2.0 bolib saqlanadi yoki %g qilib korilsa ham ramda 2.0 bolib qolaveradi

    double literal_div = 5.0 / 2;  // double ishlashi uchun boya aytganim kabi bitta value kasr qismi bolsa boldi, yoki uni (doubl) qilib yani bitta inteager valueni kasr qilshmi farqi yoq
    printf("literal_div = %g \n", literal_div);


    // ADC — Analog-to-Digital Converter
    // ADC ozi nima qiladi?
    // ADC sensorlardan kelayotgan analog malumotni digital qilib beradi yani cpu tushunadigan qilib beradi
    // misol uchun, sensor 1.65v bolsa, hisob 1.65v = 2048 
    // uint16_t value = 2048; cpu shu korinishda koradi
    // ADC 3 bosqich qiladi, signalni ushlaydi -> darajaga bo'ladi -> inteager chiqaradi
    // ADC — sensor ko‘rgan analog kuchlanishni CPU tushunadigan raqamga aylantiradi.
    
    int adc_value = 512; // 10-bit ADC
    int adc_max = 1023;
    double vref = 3.3;

    double voltage = (double)adc_value * vref / adc_max;
    // Men 0–1023 ni 0–3.3V oralig‘ida taqsimlayman
    printf("ADC voltage = %g \n", voltage);

    
    return 0; // returnda 0 qilsak funksiyadan success bilan yakunlanadi
    // agar funksiya 0 dan boshqa har qanday qiymat bilan yakunlansa, bu failure degani
    // reutrn 0-255 orasida bolshi mumkin, agar 256 boladigan bolsa, uni qisman 0 deb oladi va success beradi
    // lekin bu success ishonchsiz va warning bilan boladi. Bu bug.
    // Nega exit code 0-255 orasida, chunki OS exit statusni 1 byte = 8 bit qilib saqlaydi
    // 8 bitda esa 0-255 qiymatlar mavjud
    // agar return manfiy son bolsa ham failure boladi
    // agar misol uchun -1 deb olinsa, exit status 255 qilib olinadi
}