#include<stdio.h>
#include<stdlib.h>
#define max 10
void enqueue();
void dequeue();
void display();
int a[max];
int front =-1,rear=-1;
int main ()
{   
    while (1)
    {
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    int ch;
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("Invalid  choice");

        break;
    }
    }
}
void enqueue()
{
    if(rear==max-1)
    {
        printf("Queue is Full");
    }
    else
    {   
        int x;
        printf("Enter the element to be inserted: ");
        scanf("%d",&x);
        if(front==-1 && rear==-1)
        {
        front=rear=0;
        a[rear]=x;
        }
        else
        {
            rear++;
            a[rear]=x;
        }
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        int temp;
        temp=a[front];
        printf("Deleted Item is: %d",temp);
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front++;
        }
    }
}
void display()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");
    }
    else
        {
        int i;
        for (i=front;i<=rear;i++)
        {
         printf("%d ",a[i]);
        }
        }
}
