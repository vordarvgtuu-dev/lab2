#include <stdio.h>
#include <windows.h> // не работает #include <locale.h>

int main() {
    SetConsoleOutputCP(65001);
    float x = 100.;
    int N = 200;
    float secondClass_passengers = N * 0.75;
    float firstClass_passengers = N * 0.25;
    float firstClass_price = 2 * x;
    float secondClass_revenue = secondClass_passengers * x;
    float firstClass_revenue = firstClass_passengers * firstClass_price;
    float total_sum = secondClass_revenue + firstClass_revenue;
    printf(" Цена билета эконом. класса: %.2f фунтов\n Цена билета первого класса: %.2f фунтов\n Пассажиров эконом. класса: %.0f\n Пассажиров первого класса: %.0f\n\n Выручка билетов с эконом. класса: %.2f фунтов\n Выручка с билетов первого класса: %.2f фунтов\n\n Общая сумма: %.2f фунтов\n ", x, firstClass_price, secondClass_passengers, firstClass_passengers, secondClass_revenue, firstClass_revenue, total_sum);
    return 0;
}