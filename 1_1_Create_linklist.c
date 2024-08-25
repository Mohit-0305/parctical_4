// Practical 4
// Creating a Linklist

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *a, *b, *c, *d;
    a = (struct node *)malloc(sizeof(struct node));
    a->data = 1;
    a->next = NULL;
   
    b = (struct node *)malloc(sizeof(struct node));
    b->data = 2;
    b->next = NULL;
   
    c = (struct node *)malloc(sizeof(struct node));
    c->data = 3;
    c->next = NULL;
   
    d = (struct node *)malloc(sizeof(struct node));
    d->data = 4;
    d->next = NULL;
   
    a->next = b;
    b->next = c;
    c->next = d;
    // Printing the linked list
    struct node *temp = a;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
   
    // Freeing the allocated memory
    free(a);
    free(b);
    free(c);
    free(d);
    return 0;
}