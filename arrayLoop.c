#include <stdio.h>

int main(void) {
	int total_grades[5] = { 85, 87, 98, 84, 90 }; // array initialization
	int sum = 0;
	int i;

	for (i = 0; i < 5; i++) { // loop through the array
		sum += total_grades[i]; // sum = sum + total_grades[i], indicates the current element in the array
	}

	printf("Total grades: %d\n", sum);
	return 0;
}