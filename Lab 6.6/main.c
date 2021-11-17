#include <stdio.h>
#include <math.h>
#include <locale.h> //Установка локализации для корректного отображения на экране

int main() //Точка входа в программу
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения
    float A, x;

    printf("Введите значение переменной А: ");
    scanf_s("%f", &A);

    x = A * A;

    printf("А в степени 2 равно: %.2f\n", x);

    x = x * x;

    printf("А в степени 4 равно: %.2f\n", x);
  
    x = x * x;

    printf("А в степени 8 равно: %.2f\n", x);
    return 0;
}