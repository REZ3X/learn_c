#include <stdio.h>
#include <string.h>

int main(void) {
	char * name = "Ranxtyc";

	if (strncmp(name, "Ranxtyc", 7) == 0) {
		printf("name is Ranxtyc\n");
	}
	else {
		printf("name is not Ranxtyc\n");	
	}
	return 0;
}