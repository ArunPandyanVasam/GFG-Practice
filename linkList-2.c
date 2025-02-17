
#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
}Node;


Node *createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    return  newNode;
}


int main(void)
{
    printf("\n");
    Node *first = createNode(18);
    first->next = createNode(45);
    first->next->next = createNode(106);

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