/* 
	__ΑΣΚΗΣΗ__
Να γραφτεί πρόγραμμα το οποίο θα ζητάει από τον χρήστη τρεις ακέραιες τιμές
και να εκτυπώνει στον πελάτη τον μέσο όρο τους, την μεγαλύτερη από τις τρεις
τιμές και την μικρότερη.

Να γίνει μία φορά με if statement και μία φορά με ternary operator.
Να γίνει χρήση όσο λιγότερων συγκρήσεων γίνεται.

//////// Σε αυτή την άσκηση γίνεται χρήση ternary operator.	////////
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	system("CHCP 1253 > nul");
	
	int first_value, second_value, third_value, average, highest, lowest;
	
	//Είσοδος Τιμών Χρήστη & Μέσος Όρος
	printf("Δώσε την πρώτη τιμή: ");
	scanf("%d", &first_value);
	printf("Δώσε την δεύτερη τιμή: ");
	scanf("%d", &second_value);
	printf("Δώσε την τρίτη τιμή: ");
	scanf("%d", &third_value);
	
	average = (first_value + second_value + third_value) / 3;
	
	//Αναζήτηση & Εκτύπωση Μεγαλύτερου Αριθμού
	highest = (first_value > second_value) && (first_value > third_value) ? first_value : second_value;
	highest = (highest < third_value) ? third_value : highest;
	printf("Ο μεγαλύτερος αριθμός είναι: %d\n", highest);
	
	//Αναζήτηση & Εκτύπωση Μικρότερου Αριθμού
	lowest = (first_value < second_value) && (first_value < third_value) ? first_value : second_value;
	lowest = (lowest > third_value) ? third_value : lowest;
	printf("Ο μικρότερος αριθμός είναι: %d\n", lowest);
	
	system("PAUSE");
	return 0;
	
}

