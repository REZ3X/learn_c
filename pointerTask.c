#include <stdio.h>

int main(void) {
	int r = 50;
	int * pointer_to_r = &r;

	*pointer_to_r += 45;

	if (pointer_to_r != &r) return 1;
	if (*pointer_to_r != 95) return 1;

	printf("Done!\n");
	return 0;
}