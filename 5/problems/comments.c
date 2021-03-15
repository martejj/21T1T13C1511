// Author: Dean Wunder
// d.wunder@unsw.edu.au
// 2020-05-04
// A arbitrary calculator app designed to help students
// understand variable length input scanning before assignment 1.

#include <stdio.h>

#define SQUARE_COMMAND 1
#define POWER_COMMAND  2

int main (void) {

    int command;
    printf("Enter instruction: ");
    while (scanf("%d", &command) == 1) {
        if (command == SQUARE_COMMAND) {
            int num;
            scanf("%d", &num);
            printf("%d\n", num * num);
        } else if (command == POWER_COMMAND) {
            int base, power;
            scanf("%d %d", &base, &power);
            int i = 0;
            int result = 1;
            while (i < power) {
                result *= base;
                i++;
            }
            printf("%d\n", result);
        }
        printf("Enter instruction: ");
    }

    return 0;
}