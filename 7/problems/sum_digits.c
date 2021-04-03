#include <stdio.h>

int is_digit(int ch);

int main(void) {
    int sum = 0;
    int num = 0;
    int ch;
    while ((ch = getchar()) != EOF) {
        if (is_digit(ch)) {
            num++;
            // Know anytime the loop goes here, ch is a digit.
            sum += ch - '0';
        }
    }

    
    printf("You entered %d digits that summed to %d!", num, sum);
    return 0;
}

int is_digit(int ch) {
    
    if (ch >= '0' && ch <= '9') {
        return 1;
    }
    
    return 0;
    
}
