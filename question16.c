/* Q16: Usage of if else-if else */
#include <stdio.h>

int main(void) {
	int num;
	
	// Ask user to input integer
	printf("Enter an integer: ");
	if (scanf("%d", &num) != 1) return 1; // Validate input value is an integer
	
	// Determine whether pos, neg, or zero value
	if (num > 0) {
		printf("%d is positive\n", num);
	} else if (num < 0) {
		printf("%d is negative\n", num);
	} else {
		printf("The number is zero\n");
	}
	return 0;
}
