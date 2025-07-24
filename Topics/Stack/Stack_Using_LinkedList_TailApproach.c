#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void PushNodeStack(int val);
void PopNodeStack();
void PeekStack();
void Traverse();
bool IsEmpty();

struct Node {
    int data;
    struct Node *next;
} *head = NULL;


int main(){
    
    PushNodeStack(10);
    PushNodeStack(20);
    Traverse();
    
    PopNodeStack();
    Traverse();

    PushNodeStack(40);
    PushNodeStack(50);
    Traverse();
    
    PeekStack();

    PopNodeStack();
    PopNodeStack();
    Traverse();

    // printf("\n%d\n", IsEmpty());
    
    
    return 0;
}


void PushNodeStack(int val){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = val;
    newNode -> next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }

    struct Node *current = head;

    while(current -> next != NULL){
        current = current -> next;
    }

    current -> next = newNode;
};

void PopNodeStack(){
    if(head == NULL){
        printf("\nStack Empty\n");
        return;
    }

    if(head -> next == NULL){
        free(head);
        head = NULL;
        return;
    }

    struct Node *temp = head;

    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }

    free(temp -> next);
    temp -> next = NULL;
}

void Traverse(){
    struct Node *temp = head;

    if(IsEmpty()){
        printf("\nStack Is Empty.\n");
        return;
    }

    printf("\n");

    while(temp != NULL){
        printf("---[ %d | %p ]---", temp -> data, temp -> next);
        temp = temp -> next;
    }
    
    printf("\n");
}

void PeekStack(){
    struct Node *temp = head;

    if(IsEmpty()){
        printf("\nStack Is Empty.\n");
        return;
    }

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    printf("\nTop Node Is : ---[ %d | %p ]---\n", temp -> data, temp -> next);
}

bool IsEmpty(){
    if(head == NULL){
        return true;
    }else{
        return false;
    }
}
