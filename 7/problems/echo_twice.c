#include <stdio.h>

#define MAX_LINE 128

int main(void) {
    
    char string[MAX_LINE];
    
    char *result = fgets(string, MAX_LINE, stdin);
    
    while (result != NULL) {
        fputs(string, stdin);
        fputs(string, stdin);
        result = fgets(string, MAX_LINE, stdin);
    }
    return 0;
}
