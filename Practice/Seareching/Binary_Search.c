#include<Stdio.h>
void print_array(int a[],int n);
int b_search(int a[],int n,int key);
int main()
{
    int a[100],n,key,result;
    printf("Enter the Limit: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is: ");
    print_array(a,n);
    printf("\nEnter the element to search: ");
    scanf("%d",&key);
    result=b_search(a,n,key);
    if(result==-1)
    {
        printf("Item is not found");
    }
    else
    {
        printf("Item is found at %d th position",result);
    }
    return 0;
}
void print_array(int a[], int n)
{
    printf("The array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}
int b_search(int a[],int n,int key)
{
    int l=0;
    int u=n-1;
    int mid=(l+u)/2;
    int flag=0;

for(int i=0;i<n;i++)
{
    mid=(l+u)/2;
    if(a[mid]==key)
    {
        flag=1;
        return mid+1;
        break;
    }
    else if (a[mid]<key)
    {
        l=mid+1;
    }
    else
    {
        u=mid-1;
    }
}
if(flag==0)
{
    return -1;
}
}