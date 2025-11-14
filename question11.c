/* Q11: Addition, Subtraction, Mulitplication, Division, and Remainder of Integers */
#include <stdio.h>

int main() {
	int num1, num2; // Declare integer variables

	// Ask for user input
	printf("Enter two integers: ");
	if(scanf("%d %d", &num1, &num2) != 2) return 1; // Validate user inputted two integers
	
	// Print results for add, sub, mult, div, and remainder
	printf("%d + %d = %d\n", num1, num2, num1+num2);
	printf("%d - %d = %d\n", num1, num2, num1-num2);
	printf("%d * %d = %d\n", num1, num2, num1*num2);
	if (num2 != 0) { // Check if second integer is nonzero	
		printf("%d / %d = %d\n", num1, num2, num1/num2);
		printf("%d %% %d = %d\n", num1, num2, num1%num2);
	} else {
		printf("Division and remainder by zero is undefined\n");
	}
	return 0;
}
