#include <stdio.h>

void calculateSum(int rows, int cols, int matrix[rows][cols], int rowSum[rows], int colSum[cols]) {
    for(int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for(int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    for(int j = 0; j < cols; j++) {
        colSum[j] = 0;
        for(int i = 0; i < rows; i++) {
            colSum[j] += matrix[i][j];
        }
    }
}

void printSum(int rows, int cols, int rowSum[rows], int colSum[cols]) {
    printf("Sum of each row:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    printf("Sum of each column:\n");
    for(int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
}

int main() {
    int rows, cols;

    // Input matrix size
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols], rowSum[rows], colSum[cols];

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of rows and columns
    calculateSum(rows, cols, matrix, rowSum, colSum);

    // Print the sum of rows and columns
    printSum(rows, cols, rowSum, colSum);

    return 0;
}
