/*Write a C-program that prints the factorials of a num. 6! is the same as 
6 * 5 * 4 * 3 * 2 * 1 Must make use of a recursive function.*/

#include <stdio.h>	
#include <ctype.h>
//using namespace std;

int fact(int num) {
	if (num == 0)
		return 1;
	else
		return(num * fact(num - 1));
}
int main() {
	int numInput = 0.0;
	
	printf("Please enter a number between 1 and 10: ");
	int a = scanf_s("%i", &numInput);
	
	//should return numInput! in a print statement
	printf("%i! = %i", numInput, fact(numInput));

	return 0;

}