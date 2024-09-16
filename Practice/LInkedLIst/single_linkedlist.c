#include<stdio.h>
#include<stdlib.h>
typedef struct linkedlist{
    int data;
    struct linkedlist *next;
}node;
struct node *head=NULL , *temp , *new ;
void insert_at_begining();
void insert_at_end();
void insert_at_any_position();
void insert_after_an_element();
void insert_before_an_element();
void delete_at_begining();
void delete_at_end();
void delete_at_any_position();
void delete_any_element();
void length_of_the_linkedlist();
void Search_an_Element();
void display();
void display_in_reverse();
void reverse_the_linkedlist();
int main()
{
    int choice;

    while(1)
    {
        printf("\n 1.insert at begining\n 2.insert at end\n 3.insert at any position\n 4.insert after an element\n 5.insert before an element\n 6.Delete at begining\n 7.Delete at end\n 8.Delete at any position\n 9.Delete any Element\n 10.Length of the linkedlist\n 11.Search an Element\n 12.Display\n 13.Display in reveerse\n 14.Reverse the linkedlist\n 15.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert_at_begining();
            break;
        case 2:
            insert_at_end();
            break;
        case 3:
            insert_at_any_position();
            break;  
        case 4:
            insert_after_an_element();
            break;
        case 5:
           insert_before_an_element();
            break;
        case 6:
            delete_at_begining();
            break;
        case 7:
            delete_at_end();
            break;
        case 8:
            delete_at_any_position();
            break;
        case 9:
            delete_any_element();
            break;
        case 10:
            length_of_the_linkedlist();
            break;
        case 11:
            Search_an_Element();
            break;
        case 12:
            display();
            break;
        case 13:
           display_in_reverse();
            break;
        case 14:
            reverse_the_linkedlis();
            break;
        case 15:
            exit(0);
            break;
        default:
        printf("Wrong Input");
            break;
        }
    }
}
void insert_at_begining()
{
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("Memory Allocation Failed");
        return ;
    }
    else
    {
        printf("Enter the element to insert: ");
        scanf("%d",&new->data);
    }
    if(head==NULL)
    {
        head=new;
        new->next=NULL;
    } 
    else
    {
        new->next=head;
        head=new;
    }                        
}
void insert_at_end()
{
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("Memory Allocation Failed");
        return ;
    }
    else
    {
        printf("Enter the element to insert: ");
        scanf("%d",&new->data);
    }
    if(head==NULL) 
    {
        head=new;
        new->next=NULL;
    }   
    else{
        temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
        new->next=NULL;
    }                    
}
void insert_at_any_position()
{   int n,count=1,i;
    temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("Enter the position to where you want to insert an element");
    scanf("%d",&n);
    if(n>=count)
    {
        printf("wrong Position");
    }
    else
    {
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("Memory Allocation Failed");
        return ;
    }
    else
    {
        printf("Enter the element to insert: ");
        scanf("%d",&new->data);
    }
    if(n==1)
    {
    insert_at_begining();
    }
    else if(n==count+1)
    {
    insert_at_end();           
    } 
    else
    {
    temp=head;
    for(i=1;i<n;i++)
    {
        temp=temp->next;
    }
    new->next=temp->next;
    temp->next=new;
    }
    }
}
void insert_after_an_element()
{
    int n;
    printf("Enter the value after which you want to insert an element: ");
    scanf("%d",&n);

    if (head == NULL) 
    {
        printf("The list is empty.\n");
        return;
    }
    int flag=0;
    temp=head;
    while(temp->next!=NULL)
    {
        if(temp->data==n)
    {
        flag=1;
        break;
    }
        else
        {
            temp=temp->next;
        }
    }
    if(flag==0)
    {
        printf("Wrong Input");
    }
    else
    {
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("Memory Allocation Failed");
        return ;
    }
    else
    {
        printf("Enter the element to insert: ");
        scanf("%d",&new->data);
    }
    new->next=temp->next;
    temp->next=new;
    }
}
void insert_before_an_element()
{
    struct node *p=NULL;
    int n;
    printf("Enter the value before which you want to insert an element: ");
    scanf("%d",&n);

    if (head == NULL) 
    {
        printf("The list is empty.\n");
        return;
    }
    int flag=0;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==n)
    {
        flag=1;
        break;
    }
        else
        {   
            p=temp;
            temp=temp->next;
        }
    }
    if(flag==0)
    {
        printf("Wrong Input");
    }
    else if(p==NULL)
    {
        insert_at_begining();
    }
    else
    {
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("Memory Allocation Failed");
        return ;
    }
    else
    {
        printf("Enter the element to insert: ");
        scanf("%d",&new->data);
    }
    new->next=p->next;
    p->next=new;
    }
}
void delete_at_begining()
{
    if(head==NULL)
    {
        printf("Empty List");
        return ;
    }
    else
    {
        head=temp;
        head=temp->next;
        free(temp);
        printf("One Element Deleted");
    }
}
void delete_at_end()
{  
    if(head==NULL)
    {
        printf("Empty List");
        return;
    }
    else
    {
    head=temp;
    struct node *p=NULL;
    while (temp->next!=NULL)
    { 
        p=temp;
        temp=temp->next;
    }
    if(head==temp)
    {
        head=NULL;
        free(temp);
    }
    else
    {
        p->next=NULL;
        free(temp);
        printf("One Element Deleted");
    }
}
}
void delete_at_any_position()
{
    if (head == NULL) 
    {
        printf("The list is empty.\n");
        return;
    }
    else
    {
    int n,count=1,i=1;
    temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("Enter the position to where you want to delete an element");
    scanf("%d",&n);
    if(n<1 || n>=count)
    {
        printf("wrong Position");
    }
    else if(n==1)
    {
        delete_at_begining();
    }
    else
    {
    while (i<n)
    { 
        p=temp;
        temp=temp->next;
        i++;
    }
    p->next=temp->next;
    free(temp);
    printf("One Item Deleted");
    }
    }
}
void delete_any_element()
{
 if (head == NULL) 
    {
        printf("The list is empty.\n");
        return;
    }
    else
    {
    struct node *p=NULL;
    int n;
    printf("Enter the element which you want to delete: ");
    scanf("%d",&n);
    int flag=0;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==n)
    {
        flag=1;
        break;
    }
        else
        {p=temp;  
        temp=temp->next;
        }
    }
    if(flag==0)
    {
        printf("Wrong Input");
    }

    else
    {   if (head->next==NULL)
        {
            head=NULL;
            free(temp);
            printf("One item Deleted");          
        }
        else
        {
            p->next=temp->next;
            free(temp);
            printf("One item Deleted");
        }
    }
    }   
}
void length_of_the_linkedlist()
{   if(head==NULL)
    {
        printf("The linked list is empty");
    }  
    else
    {
    int count=1;
    temp=head;
    while (temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("There are %d elements in the linked list",count);
    } 
}
void Search_an_Element()
{
    temp=head;
    if(head==NULL)
    {
        printf("Empty List");
    }
    else
    {
        int n,flag=0,i=1;
        printf("Enter  a element to search: ");
        scanf("%d",&n);
        while(temp!=NULL)
        {
            if(temp->data==n)
            {
                flag=1;
                printf("The Element is found at %d position",i);
                break;
                return ;
            }
            else
            {
                temp=temp->next;
                i++;
            }
        }
        if(flag==0)
        {
            printf("The item is not found");
        }
    }
}
void display()
{
    if(head==NULL)
    {
        printf("Empty List");
    }
    else
    {
        while (temp!=NULL)
        {
            printf("%d -> ",temp->data);
            temp=temp->next;
        }
    }
}
void display_in_reverse()
{

}