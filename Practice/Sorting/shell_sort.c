#include<stdio.h>
void print_array(int a[],int n);
void shell_sort(int a[],int n);
void swap(int a[],int i, int j);
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
    shell_sort(a,n);
    print_array(a,n);
}
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }   
}
void shell_sort(int a[],int n)
{
    for(int gap=n/2;gap>=1;gap=gap/2)
    {
        for(int j=gap;j<n;j++)
        {
            for (int i=j-gap;i>=0;i=i-gap)
            {
                if(a[i]<=a[i+gap])
                {
                    break;
                }
                else
                {
                    swap(a,i,i+gap);
                }
            }
            
        }
    }
}
void swap(int a[],int i, int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}