#include <stdio.h>

int print_big(int number); // function declaration (prototype)

int main(void) {
	int array[] = { 1, 11, 2, 22, 3, 33 }; // array initialization
	int i;
	for (i = 0; i < 6; i++) { // loop through the array
		print_big(array[i]);
	}
	return 0;
}

int print_big(int number) {
	if (number > 10) { // function definition, condition check if number is greater than 10
		printf("%d is big\n", number); // function body
	}
	return number;
}