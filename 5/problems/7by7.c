
#include <stdio.h>

#define SIZE 7

int main(void) {
    
    int array[SIZE][SIZE] = {{1, 2, 867, 4, 5, 6, 7},    
                             {2, 2, 123, 4, 5, 6, 7},
                             {3, 2, 542, 4, 5, 6, 7},
                             {4, 2, 543, 4, 5, 6, 7},
                             {5, 2, 645, 4, 5, 6, 7},
                             {6, 2, 765, 4, 5, 6, 7},
                             {7, 2, 876, 4, 5, 6, 7}};
    int row, column;

    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            printf("%d, ", array[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
