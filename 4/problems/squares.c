// Harrison1

#include <stdio.h>

#define ARRAY_LENGTH 5

int main(void) {

    int numbers[ARRAY_LENGTH] = {0, 1, 2, 3, 4};    
    
    int i = 0; 
    while (i < ARRAY_LENGTH) {
    
        numbers[i] = numbers[i]*numbers[i];
        i++;
    }
    
    // Write some code here such that
    // numbers = {0, 1, 4, 9, 16}
    
    i = 0;
    while (i < ARRAY_LENGTH) {
        printf("%d\n", numbers[i]);
        i++;
    }
    
    return 0;
}
