#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) 
{
    setlocale(LC_ALL, ".UTF8");
    double a, b, c;

    printf("Введите катеты a и b: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Ошибка: некорректный ввод.\n");
        return 1;
    }

    if (a <= 0 || b <= 0) {
        printf("Ошибка: катеты должны быть положительными.\n"); // ПРОВЕРКА
        return 1;
    }

    c = sqrt(a * a + b * b);

    printf("Гипотенуза c = %.4f\n", c);

    return 0;
}