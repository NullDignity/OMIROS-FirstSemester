/*
	__������__
�� ������� ��������� �� ����� �� �������� ��� ������������� ���
��� �������� ������� ������� (+,-,*,/). � �������� ���� ���� ��
���� ��� ��� ������ ��� ����� ������, ���� �������� �� �������
��� ������ ��� ����� ��� ������� ������.

�� ��������� �� ������ ���� �������� �� ����� ��� ��� �� ���.
- �� ��������� ���� ������ �� ����� ����������.
- �� ��������� ������ ����� (�������� �� ����������� �� 0, � ����� ������� ������.)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	system("CHCP 1253 > nul");
	
	double first_number, second_number, result;
	char operator;
	
	printf("�������� ������ �������: ");
	scanf("%lf", &first_number);
	printf("�������� ������: ");
	scanf(" %c", &operator);
	printf("�������� �������� �������: ");
	scanf(" %lf", &second_number);
	
	if (operator != '+' && operator != '-' && operator != '*' && operator != '/')
		printf("����� �������� ����� ������ ������.\n");
	else if (operator == '/' && second_number == 0)
		printf("��� ����� ������ � �������� �� �������� �� �����.\n");
	else
	{
		if (operator == '+')
			result = first_number + second_number;
		else if (operator == '-')
			result = first_number - second_number;
		else if (operator == '*')
			result = first_number * second_number;
		else
			result = first_number / second_number;
		printf("����������: %g\n", result);
	}
	
	system("PAUSE");
	return 0;
	
}
