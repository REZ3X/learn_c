#include <stdio.h>

int main(void) {
	int grades[][5] = {
		{80, 70, 65, 89, 90},
		{85, 80, 80, 82, 87}
	};
	float average;
	int i, j;

	for (i = 0; i < 2; i++) { // loop through each student
		average = 0; // reset average for each student
		for (j = 0; j < 5; j++) {  // loop through each grade
			average += grades[i][j]; // sum up the grades
		}
		average /= 5; // calculate the average
		printf("Average of student %d: %.2f\n", i + 1, average); // print the average
	}

	return 0;
}