/*Do exercise 1 again, but change your solution so that the switch-case statement is used instead of the if blocks.*/

#include <iostream>

int main() {
    int str[150];
    int i = 0, ch = 0, w = 0, nl = 0, countspace = 0;
    int prevChar = -1; // Track the previous character

    printf("Enter any text and exit at any time with ctrl + D.\n");

    while (1) {
        int currentChar = getchar();
        if (currentChar == EOF) {
            break; // Exit the loop on EOF
        }

        // Cast str[i] to void to suppress the warning
        (void)str[i];

        switch (currentChar) {
        case 32:
            countspace++;
            i++;
            w += 1;
            if (prevChar == 32) {
                w -= 1; // Decrement word count if there are consecutive spaces
            }
            break;

        case 10:
            nl += 1; // increment new line
            break;
        }

        i++;
        ch++; // increment char count
        prevChar = currentChar; // Update the previous character
    }

    printf("\nYou typed %i chars, %i words, and %i new lines.\n", ch, w, nl);
    return 0;
}
	
