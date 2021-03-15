#include <stdio.h>

int main(void) {
    
    int x = 10;
    
    int *a = &x;
    
    int b = *a;
    
    printf("%d\n", x);
    
    printf("%p\n", a);
    
    printf("%d\n", b);
    
    int a = 0;
    int *ptr_to_a = &a;
    
    scanff("%d", &a);
    
}
