/*Write a C-program that shifts any number two places to the right. Input should be an 
integer. Output should be the shifted result, as well as output an indication of 
whether a logical or arithmetic shift is performed (if a 1 or 0 is shifted in at the 
left side) for the inputted number.*/

#include <stdio.h>	
#include <iostream>
#include <string>
using namespace std;


int main() {
	int i{};

	printf("Please enter a number so we can shift it: ");
	int b = scanf_s("%i", &i);

	b = i >> 2; //equivalent to i/2^2. Also of note is we are doing int division.

	printf("After shifting your number %i two places to the right we now have %i.", i, b);

	return 0;

}