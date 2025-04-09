#include <stdio.h>

int main() {
    int m, n, p, i, j, k;

    // Input sizes
    printf("Enter number of rows for Matrix A: ");
    scanf("%d", &m);
    printf("Enter number of columns for Matrix A (and rows for Matrix B): ");
    scanf("%d", &n);
    printf("Enter number of columns for Matrix B: ");
    scanf("%d", &p);

    int A[m][n], B[n][p], product[m][p];

    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < m; ++i) {
        for(j = 0; j < n; ++j) {
            printf("A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < n; ++i) {
        for(j = 0; j < p; ++j) {
            printf("B[%d][%d]: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    // Initializing product matrix to 0
    for(i = 0; i < m; ++i) {
        for(j = 0; j < p; ++j) {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i < m; ++i) {
        for(j = 0; j < p; ++j) {
            for(k = 0; k < n; ++k) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result
    printf("\nProduct of the matrices:\n");
    for(i = 0; i < m; ++i) {
        for(j = 0; j < p; ++j) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
