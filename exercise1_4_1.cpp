/* Write a C-program that asks for text input from the keyboard. The output of this program should be the amount of
characters, the amount of words and the amount of newlines that have been typed. Multiple consecutive spaces should not be counted as
multiple words.Reading keys from the keyboard is possible by using the function getchar(). The reading of characters from
the keyboard can be stopped when the shutdown-code ^D (CTRL + D) is entered. ^D has the ASCII-value 4 (see forum discusson on this exercise). Use a while loop*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int str[150] = { 0 };
    int i = 0, ch = 0, w = 0, nl = 0, countspace = 0;;
    printf("Enter any text and exit at any time with ctrl + Z or ctrl + D.\n");

    while (str[i] != 26) {
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
    printf("You typed %i chars, %i words, and %i new lines.", ch, w, nl);
    return 0;
}
