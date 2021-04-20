#include <stdio.h>

int main(void) {
    
    int n = 20;
    int *p, *q;
    
    p = &n;
    q = p;
    printf("%d", *q);
    *p = 25;
    printf(", %d", n);
    *q = 39;
    printf(", %d\n", *p);
    
}
