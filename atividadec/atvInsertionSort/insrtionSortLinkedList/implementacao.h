#ifndef IMPLEMENTACAO_H
#define IMPLEMENTACAO_H

typedef struct Node {
    int data;
    struct Node* next;
}Node;
void append(struct Node** head_ref, int data);
void insertionSort(struct Node** head_ref) ;
void printList(struct Node* head);

#endif
