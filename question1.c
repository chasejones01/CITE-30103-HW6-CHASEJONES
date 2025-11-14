/* Documentation Section:
Program: Calculate the  Area and Perimeter of a Rectangle.
Author: Chase Jones
Date: 11-09-2025
*/

/* Link Section */
#include <stdio.h>

/* Defintion Section */
// None needed for this program

/* Main Function Section */
int main(void) {
	double length, width; // variables
	
	// Ask user for input
	printf("Enter length: ");
	if(scanf("%lf", &length) != 1) { // validate length input
		printf("Invalid length input.\n"); // Print error message if invalid & exits with return 1
		return 1;
	}
	printf("Enter width: ");
	if(scanf("%lf", &width) != 1) {	// validate width input
		printf("Invalid width input.\n");
		return 1;
	}

	// Define area & perimeter variables
	double area = length * width;
	double perimeter = 2 * (length + width);

	printf("Area of Rectangle: %lf\n", area);
	printf("Perimeter of Rectangle: %lf\n", perimeter);

	return 0;
}
