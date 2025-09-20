#include <stdio.h>

int main(void) {
	int x = 0;
	while (x < 10) {
		x++;

		if (x % 2 == 1) { // if x is odd
			continue; // skip the rest of the loop and start the next iteration
		}

		printf("%d\n", x);
	}
	return 0;
}