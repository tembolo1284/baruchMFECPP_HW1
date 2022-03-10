/*Create a C-program that uses the fact that 0 (zero) is interpreted as FALSE and non-zero 
is interpreted as TRUE. The C-program can be made easier to read when this 0 (or nonzero) is assigned to a variable e.g.
an int called married. Use the ?: operator to print if someone is married or not. (See if you can use a single printf)*/

#include <stdio.h>	
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//here we set married to 1 and show the result is married.
	int married = 1; // 1 here will mean someone is NOT married
	
	printf("It look likes someone is %s", married ? "married." : "not married.");

	
	//here we set married to 0 and show the result is not married.
	married = 0; // 0 here will mean someone is married
	
	printf("\nIt look likes someone is %s", married ? "married." : "not married.");
	return 0;
}