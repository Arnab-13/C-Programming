#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols], transpose[cols][rows];

    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for(i = 0; i < cols; ++i) {
        for(j = 0; j < rows; ++j) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
