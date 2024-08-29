#include <stdio.h>

void MaxMin(int rows, int cols, int a[rows][cols])
{
    int max = a[0][0];
    int min = a[0][0];
    int maxRow = 0;
    int maxCol = 0;
    int minRow = 0;
    int minCol = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                maxRow = i;
                maxCol = j;
            }
            if (a[i][j] < min)
            {
                min = a[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
     printf("Max element: %d at position [%d][%d]\n", max, maxRow+1, maxCol+1);
    printf("Min element: %d at position [%d][%d]\n", min, minRow+1, minCol+1);
}


int main()
{
    int rows, cols;

    // Input matrix size
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols];

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find max and min elements
    MaxMin(rows, cols, a);;

    return 0;
}
