#include <stdio.h>

#define MAX_LINE 128

int main(void) {
    
    char string[MAX_LINE];
    
    fgets(string, MAX_LINE, stdin);
    fputs(string, stdin);
    fputs(string, stdin);
    
    return 0;
}
