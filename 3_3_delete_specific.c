// Practical 4
// Deleting Element from a specific position in Linklist

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *s, *p, *q, *first;
    char ch;
    int key;

    p = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the first Element in Linklist: ");
    scanf("%d", &p->data);
    s = p;
    first = s;

    do {
        q = (struct node *)malloc(sizeof(struct node));
        printf("Enter the next Element: ");
        scanf("%d", &q->data);
        p->next = q;
        p = q;
        printf("Do you want to add next element (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');

    p->next = NULL;

    printf("Enter data of node to delete: ");
    scanf("%d", &key);

    if (first == NULL) {
        printf("The list is empty.\n");
        return 0;
    }

    if (first->data == key) {
        s = first;
        first = first->next;
        free(s);
    } else {
        s = first;
        while (s != NULL && s->data != key) {
            p = s;
            s = s->next;
        }
        
        if (s != NULL) {
            p->next = s->next;
            free(s);
        } else {
            printf("Node with data %d not found.\n", key);
            return 0;
        }
    }

    s = first;
    printf("\nAfter deleting the node, the linked list contains: ");
    while (s != NULL) {
        printf(" %d ", s->data);
        s = s->next;
    }
    printf("\n");

    return 0;
}
