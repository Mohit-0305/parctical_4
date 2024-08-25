// Practical 4
// Deleting Element for last position

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *s, *p, *q, *first;
    char ch;

    // Create the first node
    p = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the first Element in Linklist: ");
    scanf("%d", &p->data);
    s = p;
    first = s;  // first keeps track of the start of the list

    // Create the rest of the list
    do {
        q = (struct node *)malloc(sizeof(struct node));
        printf("Enter the next Element: ");
        scanf("%d", &q->data);
        p->next = q;
        p = q;
        printf("Do you want to add next element (y/n): ");
        // Space before %c to consume any leftover newline
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');

    p->next = NULL;

    // Check if the list is empty
    if (first == NULL) {
        printf("Underflow: The list is empty.\n");
        return 0;
    }

    // Deleting the last node
    s = first;
    if (s->next == NULL) {
        // There's only one node in the list
        free(s);
        first = NULL;
    } else {
        // Traverse to the second-last node
        while (s->next->next != NULL) {
            s = s->next;
        }
        p = s->next;  // p is the last node
        s->next = NULL;  // Disconnect the last node
        free(p);  // Free the memory of the last node
    }

    // Print the linked list after deletion
    s = first;
    printf("\nAfter deleting the last node, the linked list contains: ");
    while (s != NULL) {
        printf(" %d ", s->data);
        s = s->next;
    }
    printf("\n");

    return 0;
}
