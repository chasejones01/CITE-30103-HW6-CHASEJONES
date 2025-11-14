/* Q24: Print numbers 1-50, skip multiples of 5, stop at 40 */
#include <stdio.h>

int main(void) {
	int count = 0;

	for (int i = 1; i <= 50; i++) {
		if (i == 40) {
			break; // Completely stop
		}
		if (i % 5 == 0) {
			continue;
		}
		printf("%d ", i);
		count++;
	}
	printf("\nTotal Numbers Displayed: %d\n", count);
	return 0;
}
