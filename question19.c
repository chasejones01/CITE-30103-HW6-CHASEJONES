/* Q19: Compute and print sum of numbers using while loop */
#include <stdio.h>

int main(void) {
	int n, sum = 0, i = 1; // Declare and initialize variables

	printf("Enter n: "); // Ask user to input value for n
	if(scanf("%d", &n) != 1 || n < 1) return 1; //Validate user inputted a number greater than 1, exit program if not
	
	// While Loop
	while (i <= n) {
		sum += i; // sum = sum + i
		i++; // increment value of i by 1;
	}
	// Print the results
	printf("Sum of numbers 1 to %d is %d\n", n, sum);
	
	return 0;
}
