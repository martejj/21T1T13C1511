#include <stdio.h>

void sum_nums(int a, int b, int *sum);

int main(void) {
    
    int a = 10;
    int b = 20;
    int sum = 0;
    
    sum_nums(a, b, &sum);

    return 0;
}

void sum_nums(int a, int b, int *sum) {\
    *sum = a + b; 
    
    // setting
    array[i] = 10;
    
    // (Arrays are just pointers)
    
    // getting 
    int x = array[i];
    
    // setting
    *sum = 8;
    
    // getting
    int x = *sum;
  // x = 8
}


