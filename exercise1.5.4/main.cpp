/*Write a recursive function printnumber() which gets the number to be printed. This 
number is an integer. The function should print the number digit by digit by using 
the putchar() function. Don't use printf(). Tips: Use the modulo operator (%) to determine the digit to print. 
Use the division operator (/) to calculate the argument for the recursive call. Don't forget to handle 
negative numbers correctly.*/

#include <stdio.h>	
#include <iostream>
#include <ctype.h>

int printNumber(int n) {
   
    if (n < 0) {   // put a - sign if n is less than 0 and change number to positive
        putchar('-');
        n = -n;
    }
    if (n / 10) {  // Remove the last digit and begin recursion
        printNumber(n / 10);
    }
    putchar(n % 10 + '0');  // Prints last digit
    return 0;
}

int main() {
 
    int numInput = 0;
    printf("Please enter a number and I will output it back to you digit by digit: ");
    scanf("%i", &numInput);
    printNumber(numInput);
    printf("\n");
    return 0;
}
