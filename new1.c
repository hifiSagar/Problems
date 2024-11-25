#include <stdio.h>
#include <stdlib.h>

void main() {
    struct node {
        int data;
        struct node *next;
    };

    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1; // Initialize choice to 1 to start the loop
    int count = 0;

    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) { // Check if memory allocation was successful
            printf("Memory allocation failed\n");
            return;
        }

        printf("Enter the data\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (0,1)\n");
        scanf("%d", &choice);
    }

    temp = head;
    printf("The linked list elements are:\n");
    while (temp != 0) {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nTotal nodes: %d\n", count);
}
