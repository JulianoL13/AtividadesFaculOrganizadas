#include "implementacao.h"
#include <stdio.h>
#include <stdlib.h>





struct Node* newNode(int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void append(struct Node** head_ref, int data) {
    struct Node* new_node = newNode(data);


    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    struct Node* last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }

  
    last->next = new_node;
}


void insertionSort(struct Node** head_ref) {
  
    struct Node* sorted = NULL;
  
    struct Node* current = *head_ref;

   
    while (current != NULL) {
       
        struct Node* next = current->next;

        
        struct Node* prev = NULL;
        struct Node* temp = sorted;
        while (temp != NULL && temp->data < current->data) {
            prev = temp;
            temp = temp->next;
        }

        current->next = temp;
        if (prev == NULL) {
            sorted = current; 
        } else {
            prev->next = current;
        }

        current = next;
    }

    
    *head_ref = sorted;
}


void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}