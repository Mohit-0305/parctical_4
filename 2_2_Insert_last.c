// Practical 4
//Inserting Element at Last in Linklist

#include<stdio.h> 
#include<stdlib.h> 

struct node { 
    int data; 
    struct node *next; 
}; 

int main() {
    struct node *p, *q, *s, *first; 
    char ch; 
    
    p = (struct node *)malloc(sizeof(struct node)); 
    printf("\nEnter the first Element in Linklist: "); 
    scanf("%d", &p->data); 
    s = p; 
    first = s;  // first keeps track of the start of the list

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

    // Insert a node at the end 
    struct node *a; 
    a = (struct node *)malloc(sizeof(struct node)); 
    printf("\nEnter node data to insert at end: "); 
    scanf("%d", &a->data); 
    
    s = first;  // Reset s to the start of the list
    while (s->next != NULL) { 
        s = s->next; 
    } 
    s->next = a; 
    a->next = NULL; 

    s = first;
    printf("\nNow your linked list contains: "); 
    while (s != NULL) {
        printf(" %d ", s->data); 
        s = s->next; 
    } 
    printf("\n");

    return 0;
}
