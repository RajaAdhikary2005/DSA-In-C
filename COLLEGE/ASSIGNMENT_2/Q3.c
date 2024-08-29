#include <stdio.h>
/*Function to implement a selection sort algorithm*/
//function for swap
void swap(int *xp, int *yp)
{
    int temp;
    temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void selectionSort(int a[], int n)
{
    for(int i=0; i<n-1;i++)
    {
        // i index value is our minimumn element
        int min = i; //0 1 ---- 5
        for(int j=i+1;j<n;j++) //j=1 1<6
        {
            //condition to update the value of min
            if(a[j]<a[min]) //a[1]<a[0] 4<7 yes
            {
                min=j; //1
            }
        }
        //swap logic
        if(min!=i) // 5!=0 yes
        {
            swap(&a[i],&a[min]);
        }
    }
}
int main()
{
    int a[100];
    int n;
    int i;
    printf("enter the limit: ");
    scanf("%d",&n);
    printf("Enter The Elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    // print the array
    selectionSort(a, n);
    // printf("/////////////////////////////////////\n");
    printf("The sorted array:\n");
    // print the sort array
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}