#include <stdio.h>

int main(void) {
	int x = 0;
	while (1) { // infinite loop, 1 is always true
		x++;
		if (x == 10) { // when x is 10
			break; // exit the loop
		}
		printf("%d\n", x);
	}
	return 0;
}