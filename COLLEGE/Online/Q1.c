#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
void display();
void count();
void search(int key);
void create(int n);

struct node *head = NULL, *newnode, *temp;

int main() {
    int n, choice, key;

    printf("Enter the limit of the linked list: ");
    scanf("%d", &n);

    create(n);

    while(1) {
        printf("\nEnter your choice: \n1 to Search\n2 to Count\n3 to Display\n0 to Exit \n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter the element to search: ");
                scanf("%d", &key);
                search(key);
                break;
            case 2:
                count();
                break;
            case 3:
                display();
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void create(int n) {
    for(int i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
            temp = head;
        } else {
            temp->next = newnode;
            temp = temp->next;
        }
    }
}

void search(int key) {
    temp = head;
    int flag = 0, i = 1;

    while(temp != NULL) {
        if(temp->data == key) {
            printf("Element %d found at posiition %d.\n", key, i);
            flag = 1;
            break;
        }
        temp = temp->next;
        i++;
    }

    if(flag==0) {
        printf("Element %d not found in the list.\n", key);
    }
}

void count() {
    temp = head;
    int count = 0;

    while(temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("Total number of elements in the list: %d\n", count);
}

void display() {
    temp = head;
    printf("Elements in the list: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}