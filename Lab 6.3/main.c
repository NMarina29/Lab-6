#include <stdio.h>
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main() //����� ����� � ���������
{
	char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������
	int A, B, C, x, y;

	printf("������� �������� ���������� A: ");
	scanf_s("%d", &A);

	printf("������� �������� ���������� B: ");
	scanf_s("%d", &B);

	printf("������� �������� ���������� C: ");
	scanf_s("%d", &C);

	x = C;
	C = A;
	y = B;
	B = x;
	A = y;

	printf("\nA:%d\nB:%d\nC:%d\n", A, B, C);
	return 0;
}