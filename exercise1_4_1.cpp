/* Write a C-program that asks for text input from the keyboard. The output of this 
program should be the amount of characters, the amount of words and the amount of 
newlines that have been typed. Multiple consecutive spaces shouldnot be counted as 
multiple words.
Reading keys from the keyboard is possible by using the function getchar(). The reading 
of characters from the keyboard can be stopped when the shutdown-code ^D (CTRL + 
D) is entered. ^D has the ASCII-value 4 (see forum discusson on this exercise). Use a
while loop*/
#include <stdio.h>	
#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
	int c{}, w{}, nl{}; //chars, words, and newlines

	puts("Enter text. To exit at any time you can enter a period. Have fun!");
	
	//int test = int('^D');
		//cout << int(test) << test << endl;

	while (c != '.') {
		c = getchar();
		//putchar (c);

		if (c == ' ') { //increment w by 1 if there is a space
			w += 1;
		}
		if (int(c) == int('\n')) {  //increment nl by 1 if int of c is the same as int of new line.
			nl += 1;
		}
		c += 1;
	}

	printf("That was fun! You typed out %i total characters, %i words, and %i new lines", c, w, nl);
	return 0;
}

