#include <stdio.h>

# define BOOL char
# define TRUE 1
# define FALSE 0

int main (void) {
	BOOL x = TRUE;
	BOOL y = FALSE;
	printf("%d %d", x, y);
	return 0;
}