#include <stdio.h>

int main(void) {
   
    printf("Enter start:");
    int start = 0;
    scanf("%d", &start);
   
    printf("Enter finish:");
    int finish = 0;
    scanf("%d", &finish);
    
    int i = start;
    while (i <= finish) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
        i += 1;
    }

    return 0;
}
