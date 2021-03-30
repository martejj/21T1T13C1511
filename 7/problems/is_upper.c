#include <stdio.h>

int is_upper(int ch);

int main(void) {

    int ch;
    while ((ch = getchar()) != EOF) {
        if (!is_upper(ch)) {
            putchar(ch);
        }
    }

    return 0;
}

int is_upper(int ch) {
    
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }
    
    return 0;
    
}
