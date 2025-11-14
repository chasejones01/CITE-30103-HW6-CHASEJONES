/* Q15: PASS only if all marks >= 40 */
#include <stdio.h>

int main(void) {
	int mark1, mark2, mark3, mark4, mark5;

	// Ask user to enter marks
	printf("Enter five subject marks: ");
	if(scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5) != 5) return 1; // Validate if user inputted 5 valid values
	
	if (mark1 >= 40 && mark2 >= 40 && mark3 >= 40 && mark4 >= 40 && mark5 >= 40) {
		printf("PASS\n");
	} else {
		printf("FAIL\n");
	}
	return 0;
}
