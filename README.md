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

19/09/2024

String:
Array of characters

Defining string

Using pointer:

char * name = "Xin";

Local character array (can be manipulated):

char name[] = "Xin";
the same as
char name[4] = {'X', 'i', 'n', '\0'};] // Adding null terminator, \0 marked the ending of a string array

formatting:

%s --> strings (whole array)
%c --> single data in the array

string function:
#include <string.h> // library for string function
strlen() --> count the length of the string (not including null terminator)
strncmp() --> compare two strings (case sensitive) --> even new line (\n) is different
strncat() --> concatenate two strings

Array size (memory):

Multi-dimensional arrays

Example:

int grades[2][5] = {
    {80, 70, 65, 89, 90},
    {85, 80, 80, 82, 87}
};

grades is a 2D array: 2 rows, 5 columns.

Memory layout is like a rectangle of integers:

Row\Col	0	1	2	3	4
0	80	70	65	89	90
1	85	80	80	82	87

grades[0] → first row → array of 5 ints

grades[0][0] → first element of first row → single int

sizeof(grades) tells you total memory (2×5×size_of_int).
sizeof(grades[0]) tells you size of one row (5×size_of_int).
sizeof(grades[0][0]) tells you size of one element (size_of_int).

Strings:

char dest[20] = "Hello, ";

20 → size of the array in memory. It can hold up to 19 characters + 1 null terminator.

"Hello, " → 7 visible characters + \0 → total 8 characters used.

Remaining 12 bytes are unused but available in memory.

char name[20] = "xin";
Index	0	1	2	3	4 … 19
Value	x	i	n	\0	(empty/unused)

sprintf() --> print formatted data to a string (instead of console), stores result in a char array

For loops:
Operator	Effect	Typical Use Case
i++	Increase by 1	Standard loop from 0…n
++i	Pre-increment (increase before use)	Rarely matters in for loop
i += n	Increase by n	Step through array every n items
i = i+n	Same as i += n	Explicit, same effect