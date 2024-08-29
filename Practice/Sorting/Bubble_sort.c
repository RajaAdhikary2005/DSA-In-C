#include<stdio.h>
void print_array(int a[],int n);
void bubble_sort(int a[],int n);
int main()
{
    int a[100],n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The unsorted array: ");
    print_array(a,n);
    printf("\nThe sorted array: ");
    bubble_sort(a,n);
}
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }   
}
void bubble_sort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<(n-1)-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    print_array(a,n);
}