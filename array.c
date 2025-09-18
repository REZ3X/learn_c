#include <stdio.h>

int main(void) {
	int grades[3];
	float price[3] = { 4.99, 3.99, 2.99 };
	int average;
	float salePrice = (price[0] + price[1] + price[2]) * 0.85; 

	grades[0] = 95;
	grades[1] = 85;
	grades[2] = 75;
	average = (grades[0] + grades[1] + grades[2]) / 3;
	printf("Average: %d", average); // %d means integer
	printf("\nSale Price: %.2f", salePrice); // .2f means 2 decimal places
}