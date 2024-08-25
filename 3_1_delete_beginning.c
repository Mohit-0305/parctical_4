// Practical 4
// Deleting Element from first position

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
    
    // Check for underflow (empty list)
    if (first == NULL) {
        printf("Underflow: The list is empty.\n");
        return 0;
    }
    
    // Deleting the first node
    s = first;
    first = first->next;
    free(s);
    s = first;
    
    // Printing the linked list after deletion
    printf("\n\nafter deleting the first node, the linked list contains: ");
    while (s != NULL) {
        printf(" %d ", s->data);
        s = s->next;
    }
    printf("\n");

    return 0;
}
