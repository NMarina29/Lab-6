#include <stdio.h>
#include <math.h>
#include <locale.h> //Установка локализации для корректного отображения на экране

int main() //Точка входа в программу
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения
    float x, y;

    printf("Введите x:");
    scanf_s("%f", &x);

    y = 4 * pow((x-3), 6) - 7 * pow((x-3), 3) + 2;

    printf("y:%f", y);
    return 0;
}