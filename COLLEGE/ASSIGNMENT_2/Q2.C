#include <stdio.h>
/*Function to implement a insertion sort algorithm*/
void insertionSort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = a[i];
        int j = i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
//trversal algorithm
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[100];
    int n;
    printf("enter the limit: ");
    scanf("%d",&n);
    printf("Enter The Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int i;
    insertionSort(a, n);
    // printf("/////////////////////////////////////\n");
    printf("The sorted array:\n");
    // print the sort array
    printArray(a, n);
    return 0;
}