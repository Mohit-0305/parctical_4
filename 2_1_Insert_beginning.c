// Practical 4
// Inserting Element at Beginning

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *s, *p, *q;
    char ch;

    p = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the first Element in Linklist: ");
    scanf("%d", &p->data);
    s = p;

    do {
        q = (struct node *)malloc(sizeof(struct node));
        printf("Enter the next Element: ");
        scanf("%d", &q->data);
        p->next = q;
        p = q;
        
        printf("Do you want to add next element (y/n): ");
        // Space before %c to avoid reading leftover newline characters
        scanf(" %c", &ch);
        printf("\n");

    } while (ch == 'Y' || ch == 'y');

    p->next = NULL;

    // Inserting a new node at the beginning
    struct node *a;
    a = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter new node data to insert at beginning: ");
    scanf("%d", &a->data);
    a->next = s;
    s = a;

    // Printing the linked list
    printf("\nNow your linked list contains: ");
    while (s != NULL) {
        printf(" %d ", s->data);
        s = s->next;
    }
    printf("\n");

    return 0;
}

