#include <stdio.h>
#include <stdlib.h>

int main() {
	
	system("CHCP 1253 > nul");
	
	int category;
	float import_value, bond_value;
	
	printf("���� ���� ���������: ");
	scanf("%f", &import_value);
	printf("���� ��������� ������: ");
	scanf("%d", &category);
	
	if (category == 1)
		bond_value = 0.1 * import_value;
	else if (category == 2)
		bond_value = 0.15 * import_value;
	else if (category == 3)
		bond_value = 0.2 * import_value;
	else if (category == 4)
		bond_value = 0.4 * import_value;
	else {
		printf("������");
		return 1;
	}	
	
	printf("���� ������: %.2f\n", bond_value);
	
	system("PAUSE");
	return 0;
	
}
