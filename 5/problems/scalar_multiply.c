#include <stdio.h>

void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar);

void print_matrix(int rows, int columns, int matrix[rows][columns]);

int main(void) {
    int matrix[4][3] =  {{1, 2, 3},
                        {4, 5, 6}, 
                        {6, 5, 4},
                        {3, 2, 1}};
    scalar_multiply(4, 3, matrix, 10);               
    print_matrix(4, 3 , matrix);
    
    return 0;
}

void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < columns) {
            // Visit every index in the 2d
            matrix[i][j] = matrix[i][j] * scalar;
            j++;
        }
        i++;
    }
}

void print_matrix(int rows, int columns, int matrix[rows][columns]) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < columns) {
            printf("%d, ", matrix[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
