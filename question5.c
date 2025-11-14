/* Q5: Read an integer and print it (fix scanf) */
#include <stdio.h>
int main() {
	int n;
	printf("Enter number: ");
	scanf("%d", &n); // Missing address of variable leads to undefined behavior -> use &n instead of n
	printf("You entered %d\n", n);
	return 0;
}
