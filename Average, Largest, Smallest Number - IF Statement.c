/* 
	__������__
�� ������� ��������� �� ����� �� ������ ��� ��� ������ ����� �������� �����
��� �� ��������� ���� ������ ��� ���� ��� ����, ��� ���������� ��� ��� �����
����� ��� ��� ���������.

�� ����� ��� ���� �� if statement ��� ��� ���� �� ternary operator.
�� ����� ����� ��� ��������� ���������� �������.

//////// �� ���� ��� ������ ������� ����� if statement.	////////
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
	if (first_value > second_value && first_value > third_value)
		highest = first_value;
	else if (second_value > third_value)
		highest = second_value;
	else
		highest = third_value;
	printf("� ����������� ������� �����: %d\n", highest);
	
	//��������� & �������� ���������� �������
	if (first_value < second_value && first_value < third_value)
		lowest = first_value;
	else if (second_value < third_value)
		lowest = second_value;
	else
		lowest = third_value;
	printf("� ���������� ������� �����: %d\n", lowest);
	
	system("PAUSE");
	return 0;
	
}
