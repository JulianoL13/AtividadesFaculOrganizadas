#ifndef IMPLEMENTACAO_H
#define IMPLEMENTACAO_H

typedef struct Node {
    int data;
    struct Node* next;
}Node;
Node *newNode(int data);
void append(struct Node** head, int data);
void insertionSort(struct Node** head) ;
void printList(struct Node* head);
void freeList(struct Node *head);

#endif
