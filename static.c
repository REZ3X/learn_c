#include <stdio.h>

int guest_count() {
	static int person = 0;
	person++;
	return person;
}
int main(void) {
	printf("%d guests have arrived.\n", guest_count());
	printf("%d guests have arrived.\n", guest_count());
	return 0;
}