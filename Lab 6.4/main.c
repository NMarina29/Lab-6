#include <stdio.h>
#include <math.h>
#include <locale.h> //Установка локализации для корректного отображения на экране

int main() //Точка входа в программу
{
	char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения
    int x, y;

    printf("Введите x:");
    scanf_s("%d", &x);

    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

    printf("y:%d", y);
	return 0;
}