#include <stdlib.h>
#include <stdio.h>

typedef struct Node Node;

typedef struct Node{
    int data;
    Node *next;
} Node;

Node *createNode(int data)
{
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL)
    {
        fprintf(stderr, "Alocation error\n");
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertInFinal(Node **head, int data){
    Node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printList(Node *head){
    Node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    Node *head = NULL;
    insertInFinal(&head, 10);
    insertInFinal(&head, 40);
    printList(head);
    return 0;
}
