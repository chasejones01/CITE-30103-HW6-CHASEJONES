/* Q18: Arithmetic Calculator using switch. Using operators: + - * / */
#include <stdio.h>

int main(void) {
	// Declare variables
	double num1, num2, result;
	char op;
	
	// Ask for user input
	printf("Enter the first number: ");
	if(scanf("%lf", &num1) != 1) return 1; // Validate user inputted a number
	
	printf("Enter the second number: ");
	if(scanf("%lf", &num2) != 1) return 1; // Validate user inputted a number
	
	printf("Enter an operator: ( + - * / ): "); // Ask user to select an operator
	if(scanf(" %c", &op) != 1) return 1; // Validate user entered a character
	
	// Perform operation using switch
	switch (op) {
		case '+':
			result = num1 + num2;
			printf("%lf + %lf = %lf\n", num1, num2, result);
			break;
		case '-':
			result = num1 - num2;
			printf("%lf - %lf = %lf\n", num1, num2, result);
			break;
		case '*':
			result = num1 * num2;
			printf("%lf * %lf = %lf\n", num1, num2, result);
			break;
		case '/':
			if (num2 == 0) {
				printf("Error: Division by zero is invalid.\n");
			} else {
				result = num1 / num2;
				printf("%lf / %lf = %lf\n", num1, num2, result);
			}
			break;
		default:
			printf("Invalid choice of operator\n");
	}
	return 0;
}
