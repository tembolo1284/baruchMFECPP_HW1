/*Predict what the following program prints on screen(provide a code file with comments
	stating the output for each line).*/


#include <stdio.h>	
#include <iostream>
#include <string>


	/* Conditional expressions */

int main()
{
	int x = 1;
	int y = 1;
	int z = 1;
	x += y += x; //x = x + y = y + x = 3.....y = 2
	printf("%d\n\n", (x < y) ? y : x); // Number 1....condition is false so it will print out x = 3
	printf("%d\n", (x < y) ? x++ : y++); // Number 2....condition is false so it will print y = 2 then increment
	printf("%d\n", x); // Number 3....it will print x = 3
	printf("%d\n", y); // Number 4....it will print new value of y = 3
	return 0;
}
