#include <stdio.h>
#include <stdlib.h>

int main() {
	
	system("CHCP 1253 > nul");
	
	int sum = 0, sum_in_line = 0, a, b, c, d;
	
	printf("�� ��� ����������� ��� ��������, �� ��������� ����� �� ������� ������� ��� ������:\n\n");
	
	for (a = 0; a <= 9; a += 3) {
		for (b = 0; b <= 9; b += 2) {
			for (c = 0; c <= 9; c += 5) {
				for (d = 0; d <= 9; d  += 2) {
					printf("%d%d%d%d ", a, b, c, d);
					sum++;
					sum_in_line++;
					if (sum_in_line == 10) {
						printf("\n");
						sum_in_line = 0;
					}
				}
			}
		}
	}
	
	printf("\n������ ������� �������: %d\n\n", sum);
	
	system("PAUSE");
	return 0;
	
}

