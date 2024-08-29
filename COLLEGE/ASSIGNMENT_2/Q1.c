#include <stdio.h>
//un optimized bubble sort
void bubblesort(int a[], int n)
{
	int i,j;
    for (i = 0; i < n - 1; i++) // no of passes
    {
        for (j = 0; j < ((n - 1) - i); j++)        // no of comparison
        {
            if (a[j] > a[j + 1]) // logic of comparison
            {
                // swap
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    // int a[] = {15, 16, 6, 8, 5};
    int a[100];
    int n ;
    int i;
    printf("enter the limit: ");
    scanf("%d",&n);
    printf("Enter The Elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    //bubblesort(a, n);
    // printf("/////////////////////////////////////\n");
    bubblesort(a, n);
    printf("The sorted array:\n");
    // print the sort array
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}