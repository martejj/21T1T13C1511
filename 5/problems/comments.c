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
    
    // Scans in commands until EOF is reached
    while (scanf("%d", &command) == 1) {
        
        if (command == SQUARE_COMMAND) {
            // Scans in number and prints its square
            int num;
            scanf("%d", &num);
            printf("%d\n", num * num);
        } else if (command == POWER_COMMAND) {
        
            // Stores the base and the power
            int base, power;
            scanf("%d %d", &base, &power);
            // initialise i to be 0
            int i = 0;
            int result = 1;
            // loop while i is less than power
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
