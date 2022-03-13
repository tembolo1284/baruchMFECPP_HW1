/*Write a C-program that calls a function minus(). This function receives two arguments
and returns the difference (regular subtraction, not absolute). This difference should be
printed on screen*/

#include <stdio.h>	
#include <iostream>
#include <ctype.h>
//using namespace std;

//minus function
double minus(double a, double b) {
	return a - b;
}

int main() {
	double first = 0.0;
	double second = 0.0;
	double diffa_b = 0.0;

	printf("Please enter your first number: ");
	double a = scanf_s("%lf", &first);

	printf("Please enter your second number: ");
	double b = scanf_s("%lf", &second);

	diffa_b = minus(first, second); //should return a - b

	printf("%lf - %lf = %lf", first, second, diffa_b);

return 0;

}