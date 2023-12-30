/* Operators */
#include <stdio.h>
int main() {
	int x;
	x = -3 + 4 * 5 - 6; // mult first then the other operations, resulting in 11
	printf("x=%d\n", x);
	x = 3 + 4 % 5 - 6; //modulus first which gives us 4 then the rest, resulting in 1
	printf("x=%d\n", x);
	x = -3 * 4 % -6 / 5; //modulus first which gives us 0, then left to right which results in 0
	printf("x=%d\n", x);
	x = (7 + 6) % 5 / 2; //parenthesis first which is 13, then mod which gives 3, then result is finally 1 because of int division
	printf("x=%d\n", x);

	return 0;
}
