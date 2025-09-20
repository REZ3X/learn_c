#include <stdio.h>

int value(int number) { // function definition
	return number * 2; // function body
}

int main(void) {
	printf("%d\n", value(5)); // function call
}