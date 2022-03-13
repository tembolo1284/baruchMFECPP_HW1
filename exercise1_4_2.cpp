/*Rewrite the C-program that was written for exercise 1, but use do while instead of while.*/

#include <stdio.h>	
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main() {
    int str[150] = { 0 };
    int i = 0, ch = 0, w = 0, nl = 0, countspace = 0;;
    printf("Enter any text and exit at any time with ctrl + Z or ctrl + D.\n");

    do {
        str[i] = getchar();
        if (str[i] == EOF) {
            break;
        }
        if (str[i] == ' ') {
            countspace++;
            i++;
            continue;
        }
        if (countspace > 1) {
        }   //do nothing we don't add a new word for consec spaces
        else {
            w += 1; //increment word count
        }
        if (str[i] == '\t' || str[i] == '\n') {
            nl += 1; //increment new line
        }
        i++;
        ch++; //increment char count
    } 
    while (str[i] != 26);

    printf("You typed %i chars, %i words, and %i new lines.", ch, w, nl);
    return 0;
}

