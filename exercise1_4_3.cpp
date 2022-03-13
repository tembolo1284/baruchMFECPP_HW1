/*Do exercise 1 again, but change your solution so that the switch-case statement is used instead of the if blocks.*/
	
#include <iostream>

int main() {
    int str[150] = { 0 };
    int i = 0, ch = 0, w = 0, nl = 0, countspace = 0;;
    printf("Enter any text and exit at any time with ctrl + Z or ctrl + D.\n");

    while (str[i] != 26) {
        str[i] = getchar();
        if (str[i] == EOF) {
            break;
        }

        switch (str[i]) {
        case 32:
            countspace++;
            i++;
            w += 1;
            if (countspace > 1) {
            }   //do nothing we don't add a new word for consec spaces
            else {
                w += 1; //increment word count
            }
        case 10:
            nl += 1; //increment new line
        }
        i++;
        ch++; //increment char count
    }
        printf("You typed %i chars, %i words, and %i new lines.", ch, w, nl);
        return 0;
}

