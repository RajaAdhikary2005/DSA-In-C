#include<stdio.h>
void print_array(int a[],int n);
void quick_sort(int a[],int lb,int ub);
int partition(int a[],int lb,int ub);
void swap(int a[],int i,int j);
int main()
{
    int a[100],n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the element: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The unsorted array is: ");
    print_array(a,n);
    quick_sort(a,0,n-1);
    printf("The sorted array is: ");
    print_array(a,n);
    return 0;
}
void print_array(int a[],int n)
{
    for (int i = 0; i <n; i++)
    {
        printf("%d  ",a[i]);
    }
    
}
void quick_sort(int a[],int lb,int ub)
{   int loc;
    if(lb<ub)
    {
       loc=partition(a,lb,ub);
       quick_sort(a,lb,loc-1);
       quick_sort(a,loc+1,ub);
    }
}
int partition(int a[],int lb,int ub)
{   int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(a,start,end);
         }
    }
    swap(a,lb,end);
    
    return end;
}
void swap(int a[],int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}