/* Q8: Global and Local Scope Demonstration */
#include <stdio.h>
int global_var = 25; // Global Variable declared; can be used in more than one function throughout file
int main(void) {
	int local_var = 5; // Local variable declared; only used within main() function
	printf("Global variable: %d\n", global_var);
	printf("Local variable: %d\n", local_var);
	return 0;
}
