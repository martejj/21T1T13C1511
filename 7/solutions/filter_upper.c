#include <stdio.h>

int isUpper(int ch);

int main(void) {
    
    int ch;
    while((ch = getchar()) != EOF) {
        if (!isUpper(ch)) {
            putchar(ch);
        }
    }
    putchar('\n');
    
    return 0;
    
}

int isUpper(int ch) {
    
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }
    
    return 0;
    
}
