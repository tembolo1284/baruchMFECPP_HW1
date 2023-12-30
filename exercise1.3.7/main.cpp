/*Write a C-program that efficiently multiplies a number by a factor 2 to the power n. The 
number to multiply and n are variables, which get a value at the start of the program. 
Clue:
1 shift to the left is the same as multiplying by 2.
2 shifts to the left are the same as multiplying by 4.
3 shifts to the left are the same as multiplying by 8*/


#include <stdio.h>	
#include <iostream>
#include <string>

int main() {
	int i, j;

	printf("Please enter a number so we can multiply it by a power of 2: ");
	scanf("%i", &i);

	printf("Please enter a second number so we know what power to use for the multiplication: ");
	int b = scanf("%i", &j);

	b = i << j; //equivalent to i*2^n

	printf("After multiplying your number by 2^%i we get: %i.\n", j, b);

	return 0;

}
