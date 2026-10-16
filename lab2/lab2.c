#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h> 

int task1() {
    puts("Задание 1:");
    printf("123\n");
    printf("1\n2\n3\n");
    printf("\t1\n\t\t2\n\t\t\t3\n");
    printf("%1d\n%2d\n%3d\n%4d\n", 1, 2, 3, 4);
    printf("%10.3f\n", 12.234657);
    printf("%10.5f\n", 12.234657);
    printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
    printf("%d разделить %d = %d\n", 7, 5, 7 / 5);
    printf("%d умножить %d = %d\n", 2000, 4, 2000 * 4);
    printf("%g разделить %e равно %f\n", 5., 2000000., 5. / 2000000);
    printf("%d разделить %d равно %d\n", 5, 2000000, 5 / 2000000); // d
    printf("%f разделить %f равно %f\n", 5., 2000000., 5. / 2000000); // f
    printf("%g разделить %g равно %g\n", 5., 2000000., 5. / 2000000); // g
    printf("%e разделить %e равно %e\n", 5., 2000000., 5. / 2000000); // e
    return 0;
}

int task2() {
    puts("\nЗадание 2: Вывод времени");
    int N = 14, K = 52; // Текущее время: 14 часов 52 минуты
    printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
    printf("Идет %d минута суток\n", N * 60 + K);
    int minutes_left = 24 * 60 - (N * 60 + K);
    int hours_left = minutes_left / 60;
    int mins_left = minutes_left % 60;
    printf("До полуночи осталось %d часов и %d минут\n", hours_left, mins_left);
    printf("С 8.00 прошло %d секунд\n", ((N - 8) * 60 * 60) + (K * 60));
    printf("Текущий час = %.2f суток\nТекущая минута = %.2f часа\n", N / 24., K / 60.);
    return 0;
}

int task3() {
    puts("\nЗадание 3: Деление числа n на L");
    float n = 4., L = 323.;
    float m = n / L;
    printf("Дано:\n%8.2f\n%8.2f\n", n, L);
    printf("Результат:\n%-+8.3f\n", m);
    return 0;
}


int main() {
    setlocale(LC_ALL, "RUS"); 
    task1();
    task2();
    task3();
    return 0;
}
