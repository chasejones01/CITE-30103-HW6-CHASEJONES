/* Q17: Grading System */
#include <stdio.h>

int main(void) {
	int marks;
	
	printf("Enter marks: "); // Ask user to input marks
	if(scanf("%d", &marks) != 1) return 1; // Validate input is an integer number
	
	// Grading system
	if (marks >= 90) {
		printf("A\n");
	} else if (marks >= 80 && marks <= 89) {
		printf("B\n");
	} else if (marks >= 70 && marks <= 79) {
                printf("C\n");
        } else if (marks >= 60 && marks <= 69) {
                printf("D\n");
        } else {
		printf("F\n");
	}
	return 0;
}
