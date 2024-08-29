#include <stdio.h>

int equal(int rows, int cols, int A[rows][cols], int B[rows][cols]) {
    int flag = 0; // Flag variable to indicate if matrices are equal

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(A[i][j] != B[i][j]) {
                flag = 1; // Matrices are not equal
                break;
            }
        }
        
    }
     if(flag==0){
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }
    return 0;
}

int main() {
    int rows, cols;

    // Input matrix size
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int A[rows][cols], B[rows][cols];

    // Input first matrix
    printf("Enter elements of the first matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of the second matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check if matrices are equal
    equal(rows, cols, A, B);
   

    return 0;
}
