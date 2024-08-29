#include <stdio.h>

void multiply(int rows1, int cols1, int a[rows1][cols1], int rows2, int cols2, int b[rows2][cols2], int product[rows1][cols2]) {
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols2; j++) {
            product[i][j] = 0;
            for(int k = 0; k < cols1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void print(int rows, int cols, int matrix[rows][cols]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    // Input first matrix size
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input second matrix size
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if(cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int a[rows1][cols1], b[rows2][cols2], product[rows1][cols2];

    // Input first matrix
    printf("Enter elements of the first matrix:\n");
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of the second matrix:\n");
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply matrices
    multiply(rows1, cols1, a, rows2, cols2, b, product);

    // Print product
    printf("Product of matrices:\n");
    print(rows1, cols2, product);

    return 0;
}
