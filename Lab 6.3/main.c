#include <stdio.h>
#include <locale.h> //Установка локализации для корректного отображения на экране

int main() //Точка входа в программу
{
	char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения
	int A, B, C, x, y;

	printf("Введите значение переменной A: ");
	scanf_s("%d", &A);

	printf("Введите значение переменной B: ");
	scanf_s("%d", &B);

	printf("Введите значение переменной C: ");
	scanf_s("%d", &C);

	x = C;
	C = A;
	y = B;
	B = x;
	A = y;

	printf("\nA:%d\nB:%d\nC:%d\n", A, B, C);
	return 0;
}