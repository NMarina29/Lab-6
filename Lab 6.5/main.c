#include <stdio.h>
#include <math.h>
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main() //����� ����� � ���������
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������
    float x, y;

    printf("������� x:");
    scanf_s("%f", &x);

    y = 4 * pow((x-3), 6) - 7 * pow((x-3), 3) + 2;

    printf("y:%f", y);
    return 0;
}