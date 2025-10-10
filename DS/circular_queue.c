#include <stdio.h>
#define MAX_SIZE 5

int f = -1, r = -1;
int cirque[MAX_SIZE];

void enqueue() {
    int n;
    if ((r + 1) % MAX_SIZE == f) {
        printf("Queue is full\n");
        return;
    }

    printf("Enter the number to be inserted: ");
    scanf("%d", &n);

    if (r == -1 && f == -1) {
        r = f = 0;
    } else {
        r = (r + 1) % MAX_SIZE;
    }
    cirque[r] = n;
    printf("%d inserted successfully.\n", n);
}

void dequeue() {
    if (f == -1) {
        printf("Queue is empty\n");
    } else if (f == r) {
        printf("Deleted element is %d\n", cirque[f]);
        f = r = -1;
    } else {
        printf("Deleted element is %d\n", cirque[f]);
        f = (f + 1) % MAX_SIZE;
    }
}

void display() {
    if (f == -1) {
        printf("Queue is empty\n");
        return;
    }

    int i = f;
    printf("Queue elements: ");
    while (1) {
        printf("%d ", cirque[i]);
        if (i == r)
            break;
        i = (i + 1) % MAX_SIZE;
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter 1-4.\n");
        }
    }
}
