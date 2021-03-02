#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(void) {
    
    if (10 < 20 == TRUE) {
        printf("That was true\n");
    }

    return 0;
}
