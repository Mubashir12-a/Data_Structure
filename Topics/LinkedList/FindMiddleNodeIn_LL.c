#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *CreateNode(struct Node *head, int val){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = val;
    newNode -> next = NULL;

    if(head == NULL){
        return newNode;
    }

    struct Node *current = head;

    while(current -> next != NULL){
        current = current -> next;
    }

    current -> next = newNode;

    return head;
};

void Traverse(struct Node *head){
    printf("\n");
    while(head != NULL){
        printf("----{ %d | %p }------", head -> data, head -> next);
        head = head -> next;
    }
};

void FindMiddleNode(struct Node *head){
    struct Node *Slow = head, *Fast = head;

    while(Fast != NULL && Fast -> next != NULL){
        Slow = Slow -> next;
        Fast = Fast -> next -> next;
    }

    printf("\nMiddle Node Of Linked List is : { %d | %p }\n", Slow -> data, Slow -> next);
};

int main(){

    struct Node *head = NULL;
    
    head = CreateNode(head, 10);
    Traverse(head);
    head = CreateNode(head, 20);
    head = CreateNode(head, 30);
    head = CreateNode(head, 40);
    head = CreateNode(head, 50);
    head = CreateNode(head, 60);
    head = CreateNode(head, 70);
    head = CreateNode(head, 80);
    head = CreateNode(head, 90);
    head = CreateNode(head, 100);
    Traverse(head);

    FindMiddleNode(head);
    

    return  0;
}