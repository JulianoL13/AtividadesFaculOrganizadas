#include "implementacao.h"
#include <stdio.h>
#include <stdlib.h>

Node *newNode(int data) {
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

void append(struct Node **head, int data) {
  struct Node *new_node = newNode(data);

  if (*head == NULL) {
    *head = new_node;
    return;
  }

  struct Node *last = *head;
  while (last->next != NULL) {
    last = last->next;
  }

  last->next = new_node;
}

void insertionSort(struct Node **head) {
  struct Node *sorted = NULL;
  struct Node *current = *head;
  while (current != NULL) {
    struct Node *next = current->next;
    struct Node *prev = NULL;
    struct Node *temp = sorted;
    while (temp != NULL && temp->data < current->data) {
      prev = temp;
      temp = temp->next;
    }
    if (prev == NULL) {
      current->next = sorted;
      sorted = current;
    } else {
      current->next = temp;
      prev->next = current;
    }
    current = next;
  }
  *head = sorted;
}

void printList(struct Node *head) {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d  ", temp->data);
    temp = temp->next;
  }
}

void freeList(struct Node *head) {
  struct Node *temp = head;
  struct Node *next = NULL;

  while (temp != NULL) {
    next = temp->next;
    free(temp);
    temp = next;
  }
}