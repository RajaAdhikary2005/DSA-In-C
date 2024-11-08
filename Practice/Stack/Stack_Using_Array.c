#include <stdio.h>
#include <stdlib.h>
#define max 10
void push();
void pop();
void display();
int a[max];
int top = -1;
int main()
{
    while (1)
    {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.Exit\n\n");
        int ch;
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice ");
            break;
        }
    }
    
}
void push()
{
    int x;
    if(top==max-1)
    {
        printf("\nStack is full");
    }
    else
    {   
        int x;
        printf("\nEnter the element to be pushed: ");
        scanf("%d",&x);
        top++;
        a[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nStack is Empty");
    }
    else
    {   
        int temp=a[top];
        top--;
        printf("\nDeleted Element is: %d",temp);
    }
}
void  display()
{
    if(top==-1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        int i;
        for(i=top;i>=0;i--)
        {
            printf("%d  ",a[i]);
        }
    }
}


