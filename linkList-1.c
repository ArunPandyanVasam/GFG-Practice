
#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
}Node;


int main(void)
{
    printf("\n");
    Node *first = (Node*)malloc(sizeof(Node));
    first->data = 18;

    Node *second = (Node*)malloc(sizeof(Node));
    second->data = 45;

    Node *third = (Node*)malloc(sizeof(Node));
    third->data = 106;

    first->next = second;
    second->next = third;
    third->next = NULL;

    printf("Linked List: ");
    Node* temp = first;
    while (temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    



    printf("\n");
    return 0;
}