//
//
//

#include <stdio.h>

int main(void) {
    
    int n = 0;
    printf("What is your n: ");
    scanf("%d", &n);
    
    int y = 0;
    while (y < n) {
        int x = 0;
        while (x < n) {
            if (x <= y) {
                printf("*");            
            } else {
                printf("-");
            }
            x++;
        }
        
        printf("\n");
        y++;
    }
    
    return 0;
}
