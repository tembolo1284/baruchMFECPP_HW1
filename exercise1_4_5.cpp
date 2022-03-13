/*Create a C-program that prints two columns on the screen with the temperature in 
degrees Celsius in the left column and degrees Fahrenheit in the right column.
Start with 0 degrees Celsius and proceed until 19 degrees Celsius. Take steps of 1 degree. 
Print degrees Fahrenheit with 1 position after the comma. Also print a header text.
The result must be obtained using a for construction*/
#include <stdio.h>	
#include <iostream>
#include <string>
using namespace std;

int main()
{
	float tempF = 0;
	float tempC = 0.0;
	int stepSize = 1;
	printf("Please find Celsius and equivalent Farenheit temperatures below.\n");

	for (tempC = 0; tempC <= 19; tempC++) {

		tempF = ((9.0 / 5.0) * tempC) + 32.0;
		//cout << tempC << endl;
		printf("\nCelsius Temp: %.1f     Farenheit Temp: %.1f", tempC, tempF);
	}
	return 0;
}
