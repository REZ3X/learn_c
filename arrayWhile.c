#include <stdio.h>

int main(void) {
	int array[] = { 1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4 };;
	int i = 0;

	while ( i < 10) {
		i++;
		if (array[i] < 5) { // if the element is less than 5 continue to the next iteration
			continue;
		}
		else if (array[i] > 10) { // if the element is greater than 10 break the loop
			break;
		}
		printf("%d\n", array[i]);
	}
	return 0;
}