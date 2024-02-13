#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define STUDENTS 2 // CHANGE THIS DEPENDING ON THE AMOUNT OF STUDENTS

bool numberCheck(char name[]) {
	int x;
	for (x = 0; x < strlen(name); x++)
		if (isdigit(name[x]))
			return 1;
	return 0;
}

int main(void) {
	
	// Assuming that Grades: 0.0 ~ 10.0
	
	int x, y;
	float theory_grades[STUDENTS], applied_grades[STUDENTS], total_grade[STUDENTS], class_avg = 0, max = -1, min = 11;
	char student_given_names[STUDENTS][20], student_family_names[STUDENTS][20];
	
	for (x = 0; x < STUDENTS; x++) {
		
		printf("Entry for Student %d\n", x+1);
		printf("=====================\n");
		
		printf("Given Name: ");
		fgets(student_given_names[x], 20, stdin);
		while (numberCheck(student_given_names[x])) {
			printf("\nYou have entered a digit in the given name. Please input the name again: ");
			fgets(student_given_names[x], 20, stdin);
		}
		student_given_names[x][strcspn(student_given_names[x], "\n")] = '\0';
		
		printf("Family Name: ");
		fgets(student_family_names[x], 20, stdin);
		while (numberCheck(student_family_names[x])) {
			printf("You have entered a digit in the family name. Please input the name again: ");
			fgets(student_family_names[x], 20, stdin);
		}
		student_family_names[x][strcspn(student_family_names[x], "\n")] = '\0';
		
		printf("Theory Grade: ");
		scanf("%f", &theory_grades[x]);
		while (theory_grades[x] > 10.0 || theory_grades[x] < 0.0) {
			printf("You have entered a character in the grade or the grade is beyond the set limits. Please input the grade again: ");
			scanf("%f", &theory_grades[x]);
		}
		
		printf("Applied Grade: ");
		scanf("%f", &applied_grades[x]);
		while (applied_grades[x] > 10.0 || applied_grades[x] < 0.0) {
			printf("You have entered a character in the grade or the grade is beyond the set limits. Please input the grade again: ");
			scanf("%f", &applied_grades[x]);
		}
		
		total_grade[x] = (theory_grades[x] + applied_grades[x]) / 2;
		class_avg = class_avg + total_grade[x];
		if (total_grade[x] > max)
			max = total_grade[x];
		if (total_grade[x] < min)
			min = total_grade[x];
			
		getchar();
		
		system("CLEAR");
				
	}
	
	class_avg = class_avg / STUDENTS;
	
	for (x = 0; x < STUDENTS; x++) {
		
		printf("STUDENT: %s %s\n", student_given_names[x], student_family_names[x]);
		printf("Grade in Theoretical Exam: %.1f\n", theory_grades[x]);
		printf("Grade in Applied Knowledge Exam: %.1f\n", applied_grades[x]);
		printf("GPA: %.1f\n\n", total_grade[x]);
		
	}
	
	system("PAUSE > nul");
	return 0;
	
}
