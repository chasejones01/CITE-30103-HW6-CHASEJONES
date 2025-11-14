/* Q21: Star pattern */
#include <stdio.h>

int main(void) {
	int rows;

	printf("Enter number of rows: ");
	if(scanf("%d", &rows) != 1 || rows < 1) return 1; // Validate user inputted a number greater than 1
	
	for (int i = 1; i <= rows; i++) { // Loop through rows
		for (int j = 1; j <= rows - i; j++) { // Print spaces for centering
			printf(" ");
		}
		// Print stars with spaces for current line
		for (int k = 1; k <= i; k++) {
			printf("* "); // Move to next line after printing stars
		}
		printf("\n");
	}
	return 0;
}
