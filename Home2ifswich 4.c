#include <stdio.h>
#include <stdlib.h>

int main() {
	
	system("CHCP 1253 > nul");
	
	int category;
	float import_value, bond_value;
	
	printf("Δώσε αξία εισαγωγής: ");
	scanf("%f", &import_value);
	printf("Δώσε κατηγορία δασμών: ");
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
		printf("Σφάλμα");
		return 1;
	}	
	
	printf("Ποσό Δασμών: %.2f\n", bond_value);
	
	system("PAUSE");
	return 0;
	
}
