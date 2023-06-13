#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** headRef,int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *headRef;
    *headRef = newNode;
}

void displayLinkedList(struct Node* head){
    struct Node* current = head;
    while (current != NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
    
}

int main(){
    struct Node* head = NULL;
    insertAtBeginning(&head,30);
    insertAtBeginning(&head,20);
    insertAtBeginning(&head,10);

    displayLinkedList(head);
    return 0;
}