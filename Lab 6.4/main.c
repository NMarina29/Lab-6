#include <stdio.h>
#include <math.h>
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main() //����� ����� � ���������
{
	char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������
    int x, y;

    printf("������� x:");
    scanf_s("%d", &x);

    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

    printf("y:%d", y);
	return 0;
}