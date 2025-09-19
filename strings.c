#include <stdio.h>
#include <string.h> // string functions

int main(void) {
	char name[] = "Xin"; // 4 counted data value in the character array

	printf("%c\n", name[2]); // accessing array element by index
	printf("The length of the string is: %d\n", strlen(name)); // 3, not counting the null terminator
	return 0;
}