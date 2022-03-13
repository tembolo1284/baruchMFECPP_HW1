/*Extend the program of exercise 6 in such a way that the frequency of number 3 is shown
in words. E.g.: Number three appears two times. Only print the frequency when it is smaller than three.If the frequency is three or larger,
then print : "The number three appears more than two times.*/

#include <stdio.h>	
#include <iostream>
#include <string>
using namespace std;

int main() {
	int c{}, ch{}, zeroCount{}, oneCount{}, twoCount{}, threeCount{}, fourCount{}; //chars, zeroes through fours counters

	printf("Enter text. To exit at any time you can enter CTRL + Z or CTRL + D and then enter depending on your system. Have fun!\n");

	while (c != EOF) { //keep looping until the user kills loop with ctrl + D or ctrl + Z
		c = getchar();

		switch (c) {
		case 48:
			zeroCount += 1;
		case 49:
			oneCount += 1;
		case 50:
			twoCount += 1;
		case 51:
			threeCount += 1;
		case 52:
			fourCount += 1;
		default:
			ch += 1;
		}
	}

	switch (threeCount) {
	case 0:
		printf("You typed %i chars and zero threes.", ch);
	case 1:
		printf("You typed %i chars and one three.", ch);
	case 2:
		printf("You typed %i chars and two threes.", ch);
	default:
		printf("You typed %i chars and more than two threes.", ch);
	}
	return 0;
}