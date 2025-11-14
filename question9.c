/* Q9: Integer and Floating-Point Division with Implicit & Explicit Casting */
#include <stdio.h>

int main() {
	int a, b;

	// Input two integers
	printf("Enter first integer: ");
	if (scanf("%d", &a) != 1) return 1; // Validate if value inputted is an integer
	
	printf("Enter second integer: ");
	if (scanf("%d", &b) != 1 || b == 0) { // Validate if value inputted is an integer and is not zero
		printf("Invalid input or division by zero.\n");
		return 1;
	}
	
	// Integer division
	int int_div = a / b;
	
	// Floating-Point division
	float implicit = a / b; // Implicit Casting
	float explicit = (float)a / b; 

	// Display results
	printf("Integer division %d / %d = %d\n", a, b, int_div);
	printf("Floating-point division (implicit casting): %d / %d = %f\n", a, b, implicit);
	printf("Floating-point division (explicit casting): %d / %d = %f\n", a, b, explicit);

	return 0;
}
