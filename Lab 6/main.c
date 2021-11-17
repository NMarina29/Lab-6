#include <stdio.h>
#include <locale.h> //Установка локализации для корректного отображения на экране

int main() //Точка входа в программу
{
	char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения
	float A, B;

	printf("A: ");
	scanf_s("%f", &A);

	printf("B: ");
	scanf_s("%f", &B);

	A = A + B;
	B = A - B;
	A = A - B;

	printf("\nA:%f\nB:%f\n", A, B);

	return 0;
}