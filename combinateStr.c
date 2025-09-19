#include <stdio.h>
#include <string.h>

int main(void) {
	char * first_name = "Ran";
	char last_name[] = "xtyx";
	char * word1 = "bukankah";
	char word2[] = "ini my";
	char full_name[50];

	last_name[3] = 'c';
	sprintf(full_name, "%s%s", first_name, last_name);
	if (strncmp(full_name, "Ranxtyc", 50) == 0) {
		printf("Bukankah ini my %s\n", full_name);
	} else {
		printf("Bukan my %s\n", full_name);
	}

	strncat(full_name, ",", 2);
	strncat(full_name, " ", 2);
	strncat(full_name, word1, 9);
	strncat(full_name, " ", 2);
	strncat(full_name, word2, 7);
	printf("%s\n", full_name);
	return 0;
}