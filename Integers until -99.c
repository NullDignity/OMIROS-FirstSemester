#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	
	system("CHCP 1253 > nul");
	
	float input, sum;
	int check, min, max;
	int count = 0;
	bool early_exit = false;
	printf("Καλωσήρθατε! Παρακαλώ δώστε μόνο ακέραιους αριθμούς. Για τερματισμό, δώστε την τιμή -99.\n");
	
	do {
		
	printf("Εισαγωγή αριθμού: ");
	scanf("%f", &input);
	
	if (input == -99) {
		if (count == 0) {
			printf("Ως πρώτος αριθμός δώθηκε -99.\n");
			early_exit = true;
		}
		printf("Τερματισμός προγράμματος και εκτύπωση αποτελεσμάτων...\n");
		break;
	} else {
		check = input;
		if (input/1 > check) {
			while (input/1 > check) {
				printf("Δώθηκε πραγματική τιμή. Παρακαλώ κάντε εισαγωγή ακέραιας τιμής: ");
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
		printf("Εφόσον δώθηκε ως πρώτος αριθμός το -99, δεν γίνεται να δωθούν έγκυρα αποτελέσματα.\n");
	else {
		float mo = sum/count;
		printf("Μικρότερος Αριθμός: %d\n", min);
		printf("Μεγαλύτερος Αριθμός: %d\n", max);
		printf("Πλήθος: %d\n", count);
		printf("Μέσος Όρος: %g\n", mo);
	}
	
	return 0;
	
}
