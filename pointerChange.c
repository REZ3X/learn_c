#include <stdio.h>

int main(void) {
	int x = 7; // Declare an integer variable x and initialize it to 7
	int* pointer_to_x = &x; // Declare a pointer to an integer and assign it the address of x
	x += 3; // Increment the value of x by 3
	(*pointer_to_x) *= 4; // Dereference the pointer and multiply the value it points to by 4
	printf("Value of x: %d\n", x);
	return 0;
}