/* Q14: Determine whether the given integer is positive, negative, or zero*/
#include <stdio.h>

int main() {
	int num;
	
	// Ask user for input
	printf("Enter an integer: ");
	if(scanf("%d", &num) != 1) return 1; // Validate input is an integer
	
	// Using nested conditional (or ternary) operator
	(num > 0) ? printf("%d is positive\n", num) : ((num < 0) ? printf("%d is negative\n", num) : printf("The number is zero\n"));
	return 0;
}
