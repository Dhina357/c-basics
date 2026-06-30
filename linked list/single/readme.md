### Linked List Implementation in C



```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char *data;
    struct node *nextNode;
} *head = NULL;

void append(char *name) {
    // 1. create memory for the node 
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    
    // 2. initialize the values to the node memory 
    newnode->data = name;
    newnode->nextNode = NULL;
    
    // 3. connection between them 
    if (head == NULL) {
        head = newnode;
    } else {
        struct node *lastNode = head;
        while (lastNode->nextNode != NULL) {
            lastNode = lastNode->nextNode;
        }
        lastNode->nextNode = newnode;
    }
}

void display() {
    if (head == NULL) return;
    struct node *temp = head;
    while (temp->nextNode != NULL) {
        printf("%s ", temp->data);
        temp = temp->nextNode;
    }
    printf("%s\n", temp->data);
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        char *name = (char *)malloc(100 + 1);
        scanf("%s", name);
        append(name);
    }
    
    display();
    return 0;
}
```


1. Insert a new node at beginning
2. Insert a new node at the end
3. Insert a new node at the given position
4. Delete at beginning
5. Delete at end
6. Delete the given position
7. Search an element
8. Sort the list
9. Middle element of a list
10. Reverse a list
