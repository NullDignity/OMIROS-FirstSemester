#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	
	system("CHCP 1253 > nul");
	
	float input, sum;
	int check, min, max;
	int count = 0;
	bool early_exit = false;
	printf("�����������! �������� ����� ���� ��������� ��������. ��� ����������, ����� ��� ���� -99.\n");
	
	do {
		
	printf("�������� �������: ");
	scanf("%f", &input);
	
	if (input == -99) {
		if (count == 0) {
			printf("�� ������ ������� ������ -99.\n");
			early_exit = true;
		}
		printf("����������� ������������ ��� �������� �������������...\n");
		break;
	} else {
		check = input;
		if (input/1 > check) {
			while (input/1 > check) {
				printf("������ ���������� ����. �������� ����� �������� �������� �����: ");
				scanf("%f", &input);
				check = input;
			}
		}
	}
	
	if (count == 0) {
		min = input;
		max = input;
	} else {
		if (input > max)
			max = input;
			
		if (input < min)
			min = input;
	}
	
	sum = sum + input;
	count++;
	
	} while(input != -99);
	
	if (early_exit)
		printf("������ ������ �� ������ ������� �� -99, ��� ������� �� ������ ������ ������������.\n");
	else {
		float mo = sum/count;
		printf("���������� �������: %d\n", min);
		printf("����������� �������: %d\n", max);
		printf("������: %d\n", count);
		printf("����� ����: %g\n", mo);
	}
	
	return 0;
	
}
