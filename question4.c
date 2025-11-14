/* Question 4: fix the integer division bug */
#include <stdio.h>

int main(void) {
	int a = 5, b = 10;
	float avg = (float)(a + b) / 2; // ensure floating point divison
	printf("Average = %.2f\n", avg);
	return 0;
}	
