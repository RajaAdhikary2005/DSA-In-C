#include <stdio.h>

void add(int rows, int cols, int a[rows][cols], int b[rows][cols]) {
    int sum[rows][cols];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
        printf("Sum of matrices:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void sub(int rows, int cols, int a[rows][cols], int b[rows][cols]) {
    int diff[rows][cols];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
     printf("Difference of matrices:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", diff[i][j]);
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

    int a[rows][cols], b[rows][cols];

    // Input matrices
    printf("Enter elements of the first matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Perform addition and subtraction
    add(rows, cols, a, b);
    sub(rows, cols, a, b);


    return 0;
}
