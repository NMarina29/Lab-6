#include <stdio.h>
#include <math.h>
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main() //����� ����� � ���������
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������
    float A, x, y;

    printf("������� �������� ���������� �: ");
    scanf_s("%f", &A);

    x = A * A;

    printf("� � ������� 2 �����: %.2f\n", x);

    y = x * A;

    printf("� � ������� 3 �����: %.2f\n", x);

    x = x * y;

    printf("� � ������� 5 �����: %.2f\n", x);

    y = x;
    x = y * y;

    printf("� � ������� 10 �����: %.2f\n", x);

    x = x * y;

    printf("� � ������� 15 �����: %.2f\n", x);
    return 0;
}