/* Q23: Count positives, negatives, evens, and odds (excluding 0) using do-while loop */
#include <stdio.h>

int main(void) {
	// Declare and initialize variables
	int number;
	int positives = 0, negatives = 0, evens = 0, odds = 0;

	// do-while loop
	do {
		printf("Enter an integer: "); // Ask user to input integer
		if(scanf("%d", &number) != 1) {
			printf("Invalid Input\n");
			return 1;
		}
		if (number == 0) break;
		if (number > 0) {
			positives++;
		} else { 
			negatives++;
		}
		if (number % 2 == 0) {
			evens++;
		} else {
			odds++;
		}
	} while (number != 0);
	
	printf("\n--- Results ---\n");
	printf("Positives: %d\n", positives);
	printf("Negatives: %d\n", negatives);
	printf("Evens: %d\n", evens);
	printf("Odds: %d\n", odds);

	return 0;
}
