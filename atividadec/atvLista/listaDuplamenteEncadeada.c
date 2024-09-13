#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

typedef struct Node {
    int data;
    Node *prev;
    Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
} List;

Node *createNode(int data){
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL){ 
        printf("Allocation error\n");
        return NULL; 
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

List* createList() {
    List *newList = malloc(sizeof(List));
    if(newList == NULL) {
        printf("Allocation error\n");
        return NULL;
    }
    newList->head = NULL;
    newList->tail = NULL;
    return newList;
}

void insertInFinal(List* newList, int data){
    Node* newNode = createNode(data);
    if (newNode == NULL) { 
        printf("Allocation error\n");
        return; 
    }
    if (newList->head == NULL){
        newList->head = newNode;
        newList->tail = newNode;
    } else { 
        newList->tail->next = newNode;
        newNode->prev = newList->tail;
        newList->tail = newNode; 
    }
}

void freeList(List* newList) {
    if (newList == NULL) {
        return; 
    }
    Node* current = newList->head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp); 
    }
    free(newList); 
}

void printList(List* list) {
    if (list == NULL || list->head == NULL) {
        printf("Lista vazia\n");
        return;
    }

    Node* current = list->head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n"); 
}

int main(){

    List* myList = createList();
    insertInFinal(myList, 10);
    printList(myList);
    insertInFinal(myList, 40);
    printList(myList);
    freeList(myList);
  
    return 0;
}
