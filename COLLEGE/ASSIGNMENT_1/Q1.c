#include <stdio.h>

void printMatrix(int rows, int cols, int a[rows][cols]) {
    printf("Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

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

    printMatrix(rows, cols, a);

    return 0;
}
