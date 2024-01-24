#include <stdio.h>
#include <stdlib.h>

double factorial(int num) {
	
	if (num <= 0)
		return -1;
	else if (num == 1)
		return 1;
	else  {
		return num*factorial(num-1);
	}
	
}
	
double playerCombinations(int players, int maximum) {
	
	// Formula: n!/k!(n-k)!
	
	double fact_n = factorial(players); // n!
	double fact_k = factorial(maximum); // k!
	double fact_nk = factorial(players - maximum); // (n-k)!
	
	if (fact_n == -1 || fact_k == -1)
		return -1;
	else if (fact_n == 1 || fact_k == 1)
		return 0;
	else
		return fact_n/((fact_nk)*fact_k);
	
}


int main(void) {
	
	int amount_of_players, amount_in_court, combinations;
	
	printf("Please enter the amount of basketball players the team has: ");
	scanf("%d", &amount_of_players); // n!
	printf("Please enter the amount of players that must be in the court at all times: ");
	scanf("%d", &amount_in_court); // k!
	
	combinations = playerCombinations(amount_of_players, amount_in_court);
	
	if (combinations == -1)
		printf("The user gave a negative number or a zero in one of the answers. The combinations could not be calculated.");
	else if (combinations == 0)
		printf("The team has 1 possible combination.");
	else
		printf("The team has %d possible combinations.", combinations);
	
	system("PAUSE > nul");
	system("cls");
	return 0;
	
}
