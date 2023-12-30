/*Extend the program of exercise 6 in such a way that the frequency of number 3 is shown
in words. E.g.: Number three appears two times. Only print the frequency when it is smaller than three.If the frequency is three or larger,
then print : "The number three appears more than two times.*/

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
            break;
        }
    }

    switch (threeCount) {
    case 0:
        printf("You typed %i chars and zero threes.\n", ch);
        break;
    case 1:
        printf("You typed %i chars and one three.\n", ch);
        break;
    case 2:
        printf("You typed %i chars and two threes.\n", ch);
        break;
    default:
        printf("You typed %i chars and more than two threes.\n", ch);
        break;
    }

    return 0;
}

