#include<stdio.h>
void print_array(int a[],int n);
void merge_sort(int a[],int lb,int ub);
void merge(int a[],int lb,int mid,int ub);
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
    merge_sort(a,0,n-1);
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
void merge_sort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid,int ub)
{int b[100];
int i=lb,j=mid+1,k=lb;
while(i<=mid && j<=ub)
{
    if(a[i]<=a[j])
    {
        b[k]=a[i];
        i++;
    }
    else
    {
        b[k]=a[j];
        j++;
    }
    k++;

}
if(i>mid)
{
    while (j<=ub)
    {
        b[k]=a[j];
        j++;
        k++;
    }  
}
if(j>ub)
{
    while (i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }  
}
for(k=lb;k<=ub;k++)
{
    a[k]=b[k];
}
}