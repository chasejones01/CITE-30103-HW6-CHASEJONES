/* Q13: Usage of logical operators */
#include <stdio.h>

int main() {
	int num; // Declare variable
	printf("Enter a number: ");
	if (scanf("%d", &num) != 1) return 1; // Validate input is an integer

	// Logical Operators
	if ((num % 2 == 0) && (num % 3 == 0) && (num % 7 != 0)) {
		printf("%d is divisible by both 2 and 3 but not 7.\n", num);
		printf("%d meets the condition.\n", num);
	} else {
		printf("%d does not meet the condition.\n", num);
	}
	return 0;
}
