#include<stdio.h>
void print_array(int a[],int n);
void insertion_sort(int a[],int n);
int main()
{
    int a[100],n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    insertion_sort(a,n);
    return 0;
}

void insertion_sort(int a[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
    printf("Enter the element: ");
    scanf("%d",&temp);
    int j=i-1;
    while (j>=0 && a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
    }
    print_array(a,n);
}
void print_array(int a[],int n)
{
    printf("The sorted array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}