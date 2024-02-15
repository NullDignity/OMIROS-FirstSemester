#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define ROOM_AMOUNT 2 // CHANGE DEPENDING ON THE AMOUNT OF ROOMS

bool duplicateCheck(char list[][15], int new_suite) {
	int x;
	for (x = 0; x < ROOM_AMOUNT; x++)
		if (x != new_suite && strcmp(list[new_suite], list[x]) == 0)
			return true;
	return false;
}

int main(void) {
	
	char room_names[ROOM_AMOUNT][15], check[15];
	int x, y;
	float avg_rev[ROOM_AMOUNT], min_avg, revenue, room_revenue[ROOM_AMOUNT][12];
	
	for (x; x < ROOM_AMOUNT; x++) {
		
		system("cls");
		
		printf("Please enter Room %d's name: ", x+1);
		fgets(room_names[x], 15, stdin);
		while (duplicateCheck(room_names, x)) {
			printf("There is already a conference room with the same name. Please try again: ");
			fgets(room_names[x], 15, stdin);
		}
		
		system("cls");
		
		for (y = 0; y < 12; y++) {
			printf("Please enter the revenue of Room %d for Month %d: ", x+1, y+1);
			scanf("%f", &revenue);
			while (revenue < 0) {
				printf("You entered a negative value for revenue. Please try again: ");
				scanf("%f", &revenue);
			}
			room_revenue[x][y] = revenue;
			getchar();
		}
	}
	
	system("cls");
	
	for (x = 0; x < ROOM_AMOUNT; x++) {
		
		for (y = 0; y < 12; y++) {
			avg_rev[x] = avg_rev[x] + room_revenue[x][y];
		}
		
		avg_rev[x] = avg_rev[x] / 12;
		
		if (x == 0)
			min_avg = avg_rev[0];
		else
			if (min_avg > avg_rev[x])
				min_avg = avg_rev[x];
				
		printf("Average of Suite %d: %.2f\n", x+1, avg_rev[x]);
		
	}
	
	printf("\nLowest Average: %.2f and the Rooms with said average are: \n", min_avg);
	
	for (x = 0; x < ROOM_AMOUNT; x++) {
		if (min_avg == avg_rev[x])
			printf("%s", room_names[x]);
	}
	
	system("PAUSE > nul");
	return 0;
}
