#include <stdio.h>

int main(void) {
	int x = 5; // Declare an integer variable x and initialize it to 5
	int* pointer_to_x = &x; // Declare a pointer to an integer and assign it the address of x

	printf("Value of x: %d\n", x);
	printf("The value of x is also: %d\n", *pointer_to_x);
	return 0;
}