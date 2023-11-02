/*
__Exercise Prompt__
Write a program in the C programming language that requests from the user to input a three-digit positive number. The program must:
1) Print the sum of the individual digits of the number.
2) It must store in a new variable and print a new three-digit number which is the original number but reversed.

EX: 789
1) 24
2) 987

Assume that the user *will* provide a three-digit number.
*/

#include <stdio.h>
#include <stdlib.h>

main() {
	
	int original_number;
	
	printf("Please enter the number: ");
	scanf("%d", &original_number);
	
	int hundreds = original_number / 100;
	int tens = ((original_number - hundreds * 100) / 10);
	int ones = (original_number - (hundreds * 100) - (tens * 10));
	
	int sum = hundreds + tens + ones;
	printf("The sum of the individual numbers is: %d\n", sum);
	
	int temp;
	
	temp = ones;
	ones = hundreds;
	hundreds = temp;
	
	int reversed_number = ones * 1 + tens * 10 + hundreds * 100;
	printf("The number in reverse is: %d\n", reversed_number);
	
	system("PAUSE");
	return 0;
	
}
