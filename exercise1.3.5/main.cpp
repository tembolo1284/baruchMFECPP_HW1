/*Create a C-program that clearly shows the difference between --i and i--.*/


#include <stdio.h>	
#include <iostream>
#include <string>


int main() {
	int i = 0;
	int j = 0;

	//before pre increment
	printf("value of j before pre increment is: %i", j);
	//after pre increment
	j = ++i; //pre increment it'll add 1 and THEN print it out
	printf("\nvalue of j after pre increment is: %i", j);


	//before post increment
	printf("\nvalue of j before post increment is: %i", j);
	//after post increment
	j = i++; //post increment it'll add 1 but print out value FIRST
	printf("\nvalue of j after post increment is: %i\n", j);

return 0;

}
