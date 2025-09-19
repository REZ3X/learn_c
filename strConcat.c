#include <stdio.h>
#include <string.h>

int main(void) {
	char word1[20] = "Hey, ";
	char word2[] = "pretty.";

	strncat(word1, word2, 7);
	printf("%s\n", word1);
	return 0;
}