/* Q20: Repeatedly accept integers until user enters 0 */
#include <stdio.h>

int main(void) {
	int count = 0, n;

	// do-while loop	
	do {
		printf("Enter integers (0 to stop): "); // Ask user to enter an integer
		if(scanf("%d", &n) != 1) return 1; // Validate input is an integer
		if (n != 0) count++;
	} while (n != 0);

	// Print how many numbers entered (excluding 0)
	printf("Numbers entered (excluding 0): %d\n", count);
	
	return 0;
}
