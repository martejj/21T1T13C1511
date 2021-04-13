#include <stdio.h>

int main(int argc, char *argv[]) {

    int i = 1;
    
    while (i < argc) {
    
        char *string = argv[i];
        
        int j = 0;
        
        while (string[j] != '\0') {
            
            if (string[j] >= 'A' && string[j] <= 'Z') {
                putchar(string[j] + 32);
            } else {
                putchar(string[j]);
            }
            
            j++;
        }
        putchar(' ');
        
        i++;
    }
    putchar('\n');

    return 0;

}
