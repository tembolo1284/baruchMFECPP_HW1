/*The following program uses assignment - operators.Predict what will be printed on
screen(provide a code file with comments stating the output for each line).The
operators + and = = have a higher priority than the assignment - operators.
*/


#include <stdio.h>	
#include <iostream>
#include <string>

/* Assignment operators */
int main()
{
	int x = 2;
	int y;
	int z;
	x *= 3 + 2;  // x = 2 * (3 + 2) = 10
	printf("x=%d\n", x);
	x *= y = z = 4;  // x = 10 * 4 = 40
	printf("x=%d\n", x);
	x = y == z;   // x = true or 1
	printf("x=%d\n", x);
	return 0;
}
