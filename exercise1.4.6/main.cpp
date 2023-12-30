/*Create a C - program that counts how many times each of the numbers 0 - 4 have been
typed.Use a switch - case construction.Use default to count the number of other
characters.The input will be halted with^ Z(EOF).EOF means End - of - File and is
defined in <stdio.h>.Thus, the constant EOF can be used in a condition(test if EOF hasbeen typed).
Print the amount of times a certain number has been typed.*/

#include <stdio.h>

int main() {
    int c, ch = 0, zeroCount = 0, oneCount = 0, twoCount = 0, threeCount = 0, fourCount = 0;

    printf("Enter text. To exit at any time you can enter CTRL + D and then enter depending on your system. Have fun!\n");

    while (1) {
        c = getchar();
        if (c == EOF) {
            break;
        }

        switch (c) {
        case 48: // case for 0
            zeroCount += 1;
            break;
        case 49: // case for 1
            oneCount += 1;
            break;
        case 50: // case for 2
            twoCount += 1;
            break;
        case 51: // case for 3
            threeCount += 1;
            break;
        case 52: // case for 4
            fourCount += 1;
            break;
        default:
            ch += 1;
        }
    }

    printf("You typed %i chars.\n", ch);
    printf("0: %i times\n", zeroCount);
    printf("1: %i times\n", oneCount);
    printf("2: %i times\n", twoCount);
    printf("3: %i times\n", threeCount);
    printf("4: %i times\n", fourCount);

    return 0;
}

