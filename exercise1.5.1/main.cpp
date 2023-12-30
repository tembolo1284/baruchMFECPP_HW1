/*Write a C-program that calls a function minus(). This function receives two arguments
and returns the difference (regular subtraction, not absolute). This difference should be
printed on screen*/

#include <stdio.h>	
#include <iostream>
#include <ctype.h>

//minus function
double minus(double a, double b) {
	return a - b;
}

int main() {
	double first = 0.0;
	double second = 0.0;
	double diff = 0.0;

	printf("Please enter your first number: ");
	scanf("%lf", &first);

	printf("Please enter your second number: ");
	scanf("%lf", &second);

	diff = minus(first, second);

	printf("%lf - %lf = %lf\n", first, second, diff);

return 0;

}
