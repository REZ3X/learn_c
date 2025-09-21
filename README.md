# RANDOM NOTES:

## 18/09/2024

### Data Type

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

### console:

printf → prints (writes) data to the console.
scanf → scans (reads) data from the console (standard input).

### Array:

define the variable first by showing how many items inside it

int myArray[3]; --> array consisting index from 0 to 2 --> 0,1,2

value manually:

myArray[0] = 34;
myArray[1] = 46;
myArray[2] = 87;

value inline:

int myArray[3] = {34, 46, 87};

### Logic:
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

## 19/09/2024

### String:
Array of characters

Defining string

Using pointer:

char * name = "Xin";

Local character array (can be manipulated):

char name[] = "Xin";
the same as
char name[4] = {'X', 'i', 'n', '\0'};] // Adding null terminator, \0 marked the ending of a string array

### formatting:

%s --> strings (whole array)
%c --> single data in the array

### string function:
#include <string.h> // library for string function
strlen() --> count the length of the string (not including null terminator)
strncmp() --> compare two strings (case sensitive) --> even new line (\n) is different
strncat() --> concatenate two strings

Array size (memory):

### Multi-dimensional arrays

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

### Strings:

char dest[20] = "Hello, ";

20 → size of the array in memory. It can hold up to 19 characters + 1 null terminator.

"Hello, " → 7 visible characters + \0 → total 8 characters used.

Remaining 12 bytes are unused but available in memory.

char name[20] = "xin";
Index	0	1	2	3	4 … 19
Value	x	i	n	\0	(empty/unused)

sprintf() --> print formatted data to a string (instead of console), stores result in a char array

### For loops:
Code block run multiple time, need iteration variable
initialize iteration variable using initial value,  check condition if iterator reached the final/limit value,  update iteration variable (increment/decrement)

Operator	Effect	Typical Use Case
i++	Increase by 1	Standard loop from 0…n
++i	Pre-increment (increase before use)	Rarely matters in for loop
i += n	Increase by n	Step through array every n items
i = i+n	Same as i += n	Explicit, same effect

## 20/09/2025:

### While Loop:
Code block run multiple time, need condition to check if it should continue looping
Less funcional than for loop, but more flexible

infinite loop --> while(1) or while(TRUE)

### Loop directives:

break--> exit the loop immediately, even if condition is still true
continue--> skip the rest of the current iteration and move to the next iteration

### Function:
A block of code that performs a specific task, can be reused multiple times in a program.
Function receive either fixed value or variable as input, process it and return the result
Can only return one value, or no value (void)

### Static:
keyword to define a variable or function with internal linkage
By default, variables are local to the scope in which they are defined. Variables can be declared as static to increase their scope up to file containing them. As a result, these variables can be accessed anywhere inside a file.

Local static variable (local scope-->inside function)-->lifetime of the variable is the entire program execution, but its scope is limited to the block in which it is defined. It retains its value between function calls.
Initialization once only
Static inside a function → keeps its value between calls.
Static outside a function → variable is only visible within the file it is defined in (internal linkage).

Static Function (By default function is global, but by adding static keyword, it becomes internal linkage) --> function is only visible within the file it is defined in (internal linkage).)

static void fun(void) {
   printf("I am a static function.");
}

Static vs Global?
While static variables have scope over the file containing them making them accessible only inside a given file, global variables can be accessed outside the file too.

## 21/09/2025:

### Pointer:
Pointers are also variables and play a very important role in C programming language. They are used for several reasons, such as:
Strings
Dynamic memory allocation
Sending function arguments by reference
Building complicated data structures
Pointing to functions
Building special data structures (i.e. Tree, Tries, etc...)

A pointer is essentially a simple integer variable which holds a memory address that points to a value, instead of holding the actual value itself.

Strings as pointers-->C-Strings
char * name = "John";
does three things:

It allocates a local (stack) variable called name, which is a pointer to a single character.
It causes the string "John" to appear somewhere in the program memory (after it is compiled and executed, of course).
It initializes the name argument to point to where the J character resides at (which is followed by the rest of the string in the memory).

Deferencing:
Act of referencing a pointer to access the value it points to.

 The brackets operator - [0] for example, accesses the first item of the array. And since arrays are actually pointers, accessing the first item in the array is the same as dereferencing a pointer. Dereferencing a pointer is done using the asterisk operator *.

 /* define a local variable a */
int a = 1;

/* define a pointer variable, and point it to a using the & operator */
int * pointer_to_a = &a;

printf("The value a is %d\n", a);
printf("The value of a is also %d\n", *pointer_to_a);