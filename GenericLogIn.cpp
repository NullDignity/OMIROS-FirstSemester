#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

const char STORED_EMAIL[30] = "johndoe@gmail.com";
const char STORED_PASSWORD[50] = "25121988";

int main(void) {
	
	bool logged_in = false;
	int failed_attempts = 0;
	char email[30], password[50];
	
	do {
	
		printf("======================================\n");
		printf("==Welcome to [Generic Social Media]!==\n");
		printf("======================================\n");
		printf("Please insert your e-mail and password.\n\n");
		
		printf("E-Mail: "); // first get
		gets(email);
		printf("Password: ");
		gets(password);
		
		if (strcmp(email, STORED_EMAIL) != 0 || strcmp(password, STORED_PASSWORD) != 0) {
			failed_attempts++;
			while (!logged_in && failed_attempts < 3) {
				printf("\n");
				failed_attempts++;
				printf("Invalid credentials provided. Please try again.\n\n");
				printf("E-Mail: ");
				gets(email);
				printf("Password: ");
				gets(password);
				if (strcmp(email, STORED_EMAIL) == 0 && strcmp(password, STORED_PASSWORD) == 0)
					logged_in = true;
			}	
		} else
			logged_in = true;
			
	} while (!logged_in && failed_attempts != 3);
	
	if (logged_in)
		printf("\nWelcome, user!");
	else
		printf("\nFailed to log-in and your account has been temporarily locked. Please access your e-mail to unlock it.");
	
	system("PAUSE > nul");
	system("cls"); //REMOVE WHEN DONE, ONLY FOR CLEANING TERMINAL
	return 0;
	
}
