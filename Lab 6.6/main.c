#include <stdio.h>
#include <math.h>
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main() //����� ����� � ���������
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������
    float A, x;

    printf("������� �������� ���������� �: ");
    scanf_s("%f", &A);

    x = A * A;

    printf("� � ������� 2 �����: %.2f\n", x);

    x = x * x;

    printf("� � ������� 4 �����: %.2f\n", x);
  
    x = x * x;

    printf("� � ������� 8 �����: %.2f\n", x);
    return 0;
}