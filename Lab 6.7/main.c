#include <stdio.h>
#include <math.h>
#include <locale.h> //Установка локализации для корректного отображения на экране

int main() //Точка входа в программу
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения
    float A, x, y;

    printf("Введите значение переменной А: ");
    scanf_s("%f", &A);

    x = A * A;

    printf("А в степени 2 равно: %.2f\n", x);

    y = x * A;

    printf("А в степени 3 равно: %.2f\n", x);

    x = x * y;

    printf("А в степени 5 равно: %.2f\n", x);

    y = x;
    x = y * y;

    printf("А в степени 10 равно: %.2f\n", x);

    x = x * y;

    printf("А в степени 15 равно: %.2f\n", x);
    return 0;
}