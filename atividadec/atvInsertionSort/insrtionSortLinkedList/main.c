#include "implementacao.h"
#include <stdio.h>

int main() {
    struct Node* head = NULL; 

    append(&head, 5);
    append(&head, 20);
    append(&head, 4);
    append(&head, 3);
    append(&head, 30);

    printf("Lista original: \n");
    printList(head);

    insertionSort(&head);

    printf("\nLista ordenada: \n");
    printList(head);

    return 0;
}