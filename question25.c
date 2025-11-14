/* Q25: Multiplication tables for range L to R */
#include <stdio.h>

int main(void) {
	int L, R;

	// Ask for user input
	printf("Enter the starting number (L): ");
	if(scanf("%d", &L) != 1) return 1; // Validate user input is a number
	
	printf("Enter the ending number (R): ");
	if(scanf("%d", &R) != 1) return 1; // Validate user input is a number
	
	printf("\n"); // Blank space before tables
	
	// Check input
	if (L > R) {
		printf("Invalid input. L should be less than or equal to R.\n");
		return 1;
	}

	// Outer loop iterates from L to R
	for (int i = L; i <= R; i++) {
		printf("Table of %d\n", i); // Header of table
		
		// Inner loop prints the multiplication table (1 to 10)
		for (int j = 1; j <= 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		
		printf("\n"); // Blank line between tables
	}

	return 0;
}
