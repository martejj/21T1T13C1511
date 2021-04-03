#include <stdio.h>

// Generally bad idea to return pointers (well talk later about it)

int *max(int *a, int *b);

int main(void) {
    int x = 15;
    int y = 10;
    
    int *greater = &x;
}

int *max(int *a, int *b) {
    // int * > int *
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}
