RANDOM NOTES:

18/09/2024

Data Type

Integer (Signed) --> basically number that can be positive or negative

char --> 8 bit--> 2^8 = 256--> range: -128 to +127

int --> 32 bit number --> range: -2,147,483,648 to +2,147,483,647

short

long --> depend on os system architecture:
32 bit--> 2^32 --> -2,147,483,648 to +2,147,483,647
64 bit--> 2^64 --> –9,223,372,036,854,775,808 to +9,223,372,036,854,775,807

long long

Unsigned Integer --> basically number that can only be positive

unsigned char --> 8 bit-->2^8--> range: 0 - 255

unsigned int

unsigned short

unsigned long --> 2^n-1
32 bit--> 2^32-1
64 bit--> 2^64-1

Float & Double (Floating number) --> number with fractions:
float-->32 bit decimal digit precision--> 6-7 digit
double-->64 bit decimal digit precision-->15-16 digit

BOOLEAN Type define manually

#define BOOL char
#define FALSE 0
#define TRUE 1

formatting:

%d = int
%f = float & double

console:

printf → prints (writes) data to the console.
scanf → scans (reads) data from the console (standard input).

Array:

define the variable first by showing how many items inside it

int myArray[3]; --> array consisting index from 0 to 2 --> 0,1,2

value manually:

myArray[0] = 34;
myArray[1] = 46;
myArray[2] = 87;

value inline:

int myArray[3] = {34, 46, 87};

Logic:
ex

#include <stdio.h>;

int main (void) {
	int a = 5;
	if (a < 4) {
		printf("a is less than 4 as in the value: %d", a);
	} else {
		printf("a is greater than 4 as in the value: %d", a);
	}
	return 0;
}

matcher:
<
>
<=
>=
==