#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	
	srand(time(0));
	int input, card, colour, suit;
	char suit_type, displayed_character, zero_char;
	
	do {
		
		card = 1 + rand() % 13;
		colour = rand() % 2;
		suit = rand() % 2;
		zero_char = ' ';
		
		switch(card) {
			case 2:
				displayed_character = '2';
				break;
			case 3:
				displayed_character = '3';
				break;
			case 4:
				displayed_character = '4';
				break;
			case 5:
				displayed_character = '5';
				break;
			case 6:
				displayed_character = '6';
				break;
			case 7:
				displayed_character = '7';
				break;
			case 8:
				displayed_character = '8';
				break;
			case 9:
				displayed_character = '9';
				break;
			case 10:
				displayed_character = '1';
				zero_char = '0';
				break;
			case 11:
				displayed_character = 'J';
				break;
			case 12:
				displayed_character = 'Q';
				break;
			case 13:
				displayed_character = 'K';
				break;
			default:
				displayed_character = 'A';
				break;
		}
		
		if (colour == 0) {
			system("color f0");
			if (suit == 0)
				suit_type = '\6';
			else
				suit_type = '\5';
		} else {
			system("color fc");
			if (suit == 0)
				suit_type = '\3';
			else
				suit_type = '\4';
		}
		
		
		printf(" ______________________\n");
		printf("|                      |\n");
		printf("|  %c%c                  |\n", displayed_character, zero_char);
		printf("|  %c                   |\n", suit_type);
		printf("|                      |\n");
		printf("|                      |\n");
		printf("|                      |\n");
		printf("|                      |\n");
		printf("|                      |\n");
		printf("|          %c%c          |\n", displayed_character, zero_char);
		printf("|                      |\n");
		printf("|                      |\n");
		printf("|                      |\n");
		printf("|                      |\n");
		printf("|                      |\n");
		printf("|                      |\n");
		printf("|                  %c   |\n", suit_type); 
		printf("|                  %c%c  |\n", displayed_character, zero_char);
		printf("|______________________|\n");
	
		printf("\n");
		printf("Next Card: Yes (0) - Exit (1)\n");
		scanf("%d", &input);
		
		if (input != 0 && input != 1) {
			do {
				printf("Invalid input. Please re-enter: ");
				scanf("%d", &input);
			} while (input != 0 && input != 1);
		}
		
		system("cls");
		
	} while (input != 1);
	
	return 0;
	
}
