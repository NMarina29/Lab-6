#include <stdio.h>
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main() //����� ����� � ���������
{
	char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������
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