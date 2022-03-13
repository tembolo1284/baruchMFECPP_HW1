/*Write a program that consists of two source - files.The first(Main.c) contains
the main() function and gives the variable i a value.The second source - file(Print.c)
multiplies i by 2 and prints it. Print.c contains the function print() which can be called from main()*/


// need to have Print.c in source files directory so we can link them up.

#include "Print.c"
#include <stdio.h>

int main() {
	double numInput = 0;

	printf("Please enter a number so we can multiply it by 2: ");
	int a = scanf_s("%lf", &numInput);

	printf("%lf multiplied by 2 = %lf", numInput, print(numInput));


}