#include <stdio.h>
void print_array(int a[], int n);
void selection_sort(int a[], int n);
int main()
{
    int a[100], n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The unsorted array: ");
    print_array(a, n);
    printf("\nThe sorted array: ");
    selection_sort(a, n);
}
void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}
void selection_sort(int a[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        if (min != i)
        {
            int temp;
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    print_array(a, n);
}