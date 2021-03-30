#include <stdio.h>

#define MAX_LENGTH 100

int isUpper(int ch);
int isLower(int ch);

int main(void) {
    char string[MAX_LENGTH];
    
    fgets(string, MAX_LENGTH, stdin);
    
    int i = 0;
    while (string[i] != '\0') {
        
        if (i%2) {
            
            if (isUpper(string[i])) {
            
                string[i] = string[i] + 32;
                
            } else if (isLower(string[i])) {
            
                string[i] = string[i] - 32;
                     
            }
            
        }
    
        i++;
    }
    
    printf("%s", string);
    
}

int isUpper(int ch) {
    
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }
    
    return 0;
    
}

int isLower(int ch) {
    
    if (ch >= 'a' && ch <= 'z') {
        return 1;
    }
    
    return 0;
    
}
