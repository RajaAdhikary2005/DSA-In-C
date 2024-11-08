#include <stdio.h>
#include <stdlib.h>

#define MAX 5 

typedef struct {
    int queue[MAX];
    int front, rear;
} Queue;


void initQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}


void insert(Queue *q, int value) {
    if (q->rear == MAX - 1) {
        printf("Queue is full\n");
        return;
    }
    if (q->front == -1) q->front = 0; // Set front to 0 on first insert
    q->rear++;
    q->queue[q->rear] = value;
    printf("Inserted %d\n", value);
}

void del(Queue *q) {
    if (q->front == -1 || q->front > q->rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted %d\n", q->queue[q->front]);
    q->front++;
    
    if (q->front > q->rear) {
        q->front = q->rear = -1;
    }
}


void display(Queue *q) {
    if (q->front == -1 || q->front > q->rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->queue[i]);
    }
    printf("\n");
}

int main() {
    Queue q;
    int choice, value;
    initQueue(&q);

    while (1) {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(&q, value);
                break;
            case 2:
                del(&q);
                break;
            case 3:
                display(&q);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
