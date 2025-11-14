/* Q7: Compute the area and circumference of a circle (#define and const) */
#include <stdio.h>
#define PI_DEFINE 3.141592653589793

int main(void) {
	const double PI_CONST = 3.141592653589793;
	double radius;

	printf("Enter the radius of the circle: ");
	if(scanf("%lf", &radius) != 1) return 1; // Validates that user inputted a number

	// Compute area and circumference
	printf("Using #define: Area = %.2f, Circumference = %.2f\n", PI_DEFINE * radius * radius, 2 * PI_DEFINE * radius);
	printf("Using const: Area = %.2f, Circumference = %.2f\n", PI_CONST * radius * radius, 2 * PI_DEFINE * radius);
	return 0;
}
