/* 
	__������__
�� ������� ��������� �� ����� �� ������ ��� ��� ������ ����� �������� �����
��� �� ��������� ���� ������ ��� ���� ��� ����, ��� ���������� ��� ��� �����
����� ��� ��� ���������.

�� ����� ��� ���� �� if statement ��� ��� ���� �� ternary operator.
�� ����� ����� ��� ��������� ���������� �������.

//////// �� ���� ��� ������ ������� ����� ternary operator.	////////
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	system("CHCP 1253 > nul");
	
	int first_value, second_value, third_value, average, highest, lowest;
	
	//������� ����� ������ & ����� ����
	printf("���� ��� ����� ����: ");
	scanf("%d", &first_value);
	printf("���� ��� ������� ����: ");
	scanf("%d", &second_value);
	printf("���� ��� ����� ����: ");
	scanf("%d", &third_value);
	
	average = (first_value + second_value + third_value) / 3;
	
	//��������� & �������� ����������� �������
	highest = (first_value > second_value) && (first_value > third_value) ? first_value : second_value;
	highest = (highest < third_value) ? third_value : highest;
	printf("� ����������� ������� �����: %d\n", highest);
	
	//��������� & �������� ���������� �������
	lowest = (first_value < second_value) && (first_value < third_value) ? first_value : second_value;
	lowest = (lowest > third_value) ? third_value : lowest;
	printf("� ���������� ������� �����: %d\n", lowest);
	
	system("PAUSE");
	return 0;
	
}

