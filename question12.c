/* Q12: show corrections in shift vs arithmetic */
#include <stdio.h>

int main() {
	int a = 5, b = 3;
	int res1 = a + (b << 1); // using parentheses
	int res2 = a + b * 2; // using arithmetic, more specifically multiplication
	printf("res1 = %d\n", res1);
	printf("res2 = %d\n", res2);
	return 0;
}	
