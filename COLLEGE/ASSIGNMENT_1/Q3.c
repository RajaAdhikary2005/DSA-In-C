#include <stdio.h>

void tMatrix(int rows, int cols, int a[rows][cols]) {
    int t[cols][rows];

    // Compute the transpose of the matrix
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            t[j][i] = a[i][j];
        }
    }

    // Print the transposed matrix
    printf("Transpose of the matrix:\n");
    for(int i = 0; i < cols; i++) { // Loop over transposed dimensions
        for(int j = 0; j < rows; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input matrix size
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the matrix after knowing the dimensions
    int a[rows][cols];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose the matrix
    tMatrix(rows, cols, a);

    return 0;
} 