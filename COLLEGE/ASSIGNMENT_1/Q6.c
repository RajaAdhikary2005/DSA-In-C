#include <stdio.h>

void scalarMultiply(int rows, int cols, int a[rows][cols], int scalar) {
    int result[rows][cols];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] * scalar;
        }
    }
       printf("Result of scalar multiplication:\n");
        for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", result [i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, scalar;

    // Input matrix size
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols];

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input scalar
    printf("Enter the scalar to multiply: ");
    scanf("%d", &scalar);

    // Perform scalar multiplication
    scalarMultiply(rows, cols, a, scalar);


    return 0;
}
