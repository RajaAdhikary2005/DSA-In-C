#include <stdio.h>
void print_array(int a[], int n);
int l_search(int a[], int n, int key);
int main()
{
    int a[100], n, key, result;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    print_array(a, n);
    printf("\nEnter the element to search: ");
    scanf("%d", &key);
    result = l_search(a, n, key);

    if (result == -1)
    {
        printf("Item is not found.");
    }
    else
    {
        printf("Item is found at the %d th position", result);
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
int l_search(int a[], int n, int key)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            return i + 1;
            break;
        }
    }
    if (flag == 0)
    {
        return -1;
    }
}