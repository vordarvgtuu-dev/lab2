#include <stdio.h>
#include <windows.h> 

int task0() {
    printf("Деление и остаток\n");
    printf("%d разделить %d (целочисленно) = %d\n", 5, 2, 5 / 2);
    printf("%d разделить %d (с дробной частью) = %.2f\n", 5, 2, (float)5 / 2);
    printf("Остаток от %d %% %d = %d\n", 5, 2, 5 % 2);
    
    printf("\nВторой вид дюймов\n");
    float inches_eng = 10.0;
    float inches_fr = 10.0;
    printf("Английские дюймы: %.2f\n", inches_eng * 2.54); 
    printf("Французские дюймы: %.2f\n", inches_fr * 2.7);  
    return 0;
}

int task1() {
    int N, K;
    N = 14;
    K = 52;
    printf("сейчас %d часов %d минут 00 секунд\n", N, K);
    printf("идет %d минут суток\n", N * 60 + K);
    printf("до полночи %d часов и %d минут\n", 24 - N, 60 - K);
    printf("с 8:00 прошло %d секунд\n", ((N - 8) * 60 * 60) + (K * 60));
    printf("Текущий час = %10.2f и текущая минута = %10.2f часа\n", N / 24., K / 60.);
    return 0;
}

int task2() {
    float k, n, L, m;
    n = 4.;
    L = 323.;
    k = n / L;
    m = n / L;
    printf("Дано:\n%.f\n%.f\n\nРешение:\n%+0*.*f\n", n, L, 8, 3, m);
    return 0;
}

int main()
{
    SetConsoleOutputCP(65001); 
    task0();
    task1();
    task2();
    return 0;
}
