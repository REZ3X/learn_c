#include <stdio.h>

void guessNumber(int guess) {
	int number = 555;
	if (guess == number) {
		printf("You guessed it right, the number is %d \n", number);
	} else if (guess < number) {
		printf("Too low, try again \n");
	} else {
		printf("Too high, try again \n");
	}
}

int main(void) {
	guessNumber(555);
	guessNumber(300);
	guessNumber(700);
}