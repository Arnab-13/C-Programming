#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input size of the matrices
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], difference[rows][cols];

    // Input elements of first matrix
    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            printf("Matrix1[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of second matrix
    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            printf("Matrix2[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Subtracting the matrices
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Displaying the result
    printf("\nSubtraction of the two matrices (Matrix1 - Matrix2):\n");
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}
