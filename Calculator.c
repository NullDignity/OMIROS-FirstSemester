/*
	__ΑΣΚΗΣΗ__
Να γραφτεί πρόγραμμα το οποίο να υλοποιεί ένα κομπιουτεράκι για
τις τέσσερις βασικές πράξεις (+,-,*,/). Η εφαρμογή στην αρχή θα
ζητά από τον πελάτη τον πρώτο αριθμό, στην συνέχεια το σύμβολο
της πράξης και τέλος τον δεύτερο αριθμό.

Το πρόγραμμα θα πρέπει στην συνέχεια να κάνει ένα από τα δύο.
- Να εκτυπώνει στον πελάτη το σωστό αποτέλεσμα.
- Να εκτυπώνει μήνυμα λάθος (Διαίρεση με παρονομαστή το 0, ή λάθος σύμβολο πράξης.)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	system("CHCP 1253 > nul");
	
	double first_number, second_number, result;
	char operator;
	
	printf("Εισαγωγή πρώτου αριθμού: ");
	scanf("%lf", &first_number);
	printf("Εισαγωγή πράξης: ");
	scanf(" %c", &operator);
	printf("Εισαγωγή δεύτερου αριθμού: ");
	scanf(" %lf", &second_number);
	
	if (operator != '+' && operator != '-' && operator != '*' && operator != '/')
		printf("Έγινε εισαγωγή λάθος είδους πράξης.\n");
	else if (operator == '/' && second_number == 0)
		printf("Δεν είναι δυνατή η διαίρεση με διαιρέτη το μηδέν.\n");
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
		printf("Αποτέλεσμα: %g\n", result);
	}
	
	system("PAUSE");
	return 0;
	
}
