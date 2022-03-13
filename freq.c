/*Create a C - program that counts how many times each of the numbers 0 - 4 have been
typed.Use a switch - case construction.Use default to count the number of other
characters.The input will be halted with^ Z(EOF).EOF means End - of - File and is
defined in <stdio.h>.Thus, the constant EOF can be used in a condition(test if EOF hasbeen typed).
Print the amount of times a certain number has been typed. Name the program freq.c*/

#include <stdio.h>	
#include <iostream>
#include <string>

void main() {
	int c = 0, ch=0, zeroCount=0, oneCount=0, twoCount=0, threeCount=0, fourCount=0; //chars, zeroes through fours counters

	printf("Enter text. To exit at any time you can enter CTRL + Z or CTRL + D and then enter depending on your system. Have fun!\n");

	while (c != EOF) { //keep looping until the user kills loop with ctrl + D or ctrl + Z
		c = getchar();

		switch (c) {
		case 48: // case for 0
			zeroCount += 1;
		case 49: // case for 1
			oneCount += 1;
		case 50: // case for 2
			twoCount += 1;
		case 51: // case for 3
			threeCount += 1;
		case 52:// case for 4
			fourCount += 1;
		default:
			ch += 1;
		}
	}

	printf("You typed %i chars and %i twos.", ch, twoCount);
}