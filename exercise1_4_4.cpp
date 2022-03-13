/*Create a C-program that prints two columns on the screen with the temperature in 
degrees Fahrenheit and the equivalent temperature in degrees Celsius.
The left column shows the temperature in Fahrenheit. The right column shows the 
temperature in Celsius.
Start with 0 degrees Fahrenheit and proceed until 300 degrees Fahrenheit. Take steps of 
20 degrees. Print degrees Celsius with 1 position behind the comma (use “%10.1f” as 
format specifier). Also print a header text.
Make the program maintenance insensitive, which means that the start- and endtemperature and the step size must be easy to adjust.
The result must be obtained using a while construction!
Tip: To calculate the degrees Celsius from degrees Fahrenheit use the following formula:
 Celsius = (5/9) * (Fahrenheit – 32)
*/
#include <stdio.h>	
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tempF = 0;
	float tempC = 0.0;
	int stepSize = 20;
	printf("Please find Farenheit and equivalent Celsius temperatures below.\n");

	while (tempF <= 300) {
	
		tempC =  (5.0/9.0) * (tempF - 32.0);
		//cout << tempC << endl;
		printf("\nFarenheit Temp: %i     Celsius Temp: %.1f", tempF, tempC);
			tempF += stepSize;

	}

	
	return 0;
}
