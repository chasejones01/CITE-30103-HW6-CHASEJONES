/* Q10: Sizes of Variables in bytes */
#include <stdio.h>

int main() {
	// Declare variables
	char c;
	int i;
	long int li;
	float f;
	double d;

	// Display size in bytes for variables
	printf("The size of char: %zu\n", sizeof(c));
	printf("The size of int: %zu\n", sizeof(i));
	printf("The size of long: %zu\n", sizeof(li));
	printf("The size of float: %zu\n", sizeof(f));
	printf("The size of double: %zu\n", sizeof(d));

	return 0;
}
