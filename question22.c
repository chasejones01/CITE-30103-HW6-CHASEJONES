/* Q22: Reverse digits of positive integer using while loop */
#include <stdio.h>

int main(void) {
	int n, original, reversed = 0; // Decalre and initialize variables

	// Ask for user input
	printf("Enter a positive integer: ");
	if (scanf("%d", &n) != 1 || n < 0) { // Validate user entered a positive integer
		printf("Error: Please enter a positive integer.\n");
		return 1;
	}

	original = n; // Store the original value
	
	// Reverse digits
	while (n != 0) {
		int digit = n % 10;  // Extract the last digit
		reversed = reversed * 10 + digit; // Append digit to the reversed number
		n /= 10; // remove the last digit
	}

	// Display output
	printf("Original Number: %u\n", original);
	printf("Reversed Number: %u\n", reversed);
	
	return 0;
}

