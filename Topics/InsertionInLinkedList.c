#include <stdio.h>
#include <stdlib.h>


// Node Structure:

struct Node {
    int data;
    struct Node *next;
};

// Insert Node At Begining:

struct Node* InsertFirstNode(int NodeData, struct Node *head){
    struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode -> data = NodeData;
    NewNode -> next = head;

    return NewNode;
}

// Insert Node At Last: 

struct Node* InsertLastNode(int NodeData, struct Node *head){
    struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode -> data = NodeData;
    NewNode -> next = NULL;
    
    if(head == NULL){
        return NewNode;
    }
    
    struct Node *temp = head;
    
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    
    temp -> next = NewNode;
    
    return head;
}


// To Find Length Of Linked List:

int FindNodeLength(struct Node *head){
    int count = 0;
    struct Node *temp = head;

    while(temp != NULL){
        count++;
        temp = temp -> next;
    }

    return count;
}


// Insert At Position:

struct Node* InsertAtPosition(int NodeData, struct Node *head, int Position){
    struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode -> data = NodeData;
    NewNode -> next = NULL;

    if(Position == 1){
        return InsertFirstNode(NodeData, head);
    }

    if(Position > FindNodeLength(head)){
        return InsertLastNode(NodeData, head);
    }

    int i = 1;

    struct Node *temp = head;

    while(temp != NULL && i < Position - 1){
        i++;
        temp = temp -> next;
    }

    NewNode -> next = temp -> next;
    temp -> next = NewNode;

    return head;
}



// Traversal:

struct Node* Traverse(struct Node *head){
    printf("\n\n");

    struct Node *temp = head;

    printf("Node");

    while(temp != NULL){
        printf("------[%d | %x]", temp -> data, temp -> next);
        temp = temp -> next;
    }
}

// Main Function:

int main(){

    struct Node *node_1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node_2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node_3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node_4 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node_5 = (struct Node*)malloc(sizeof(struct Node));

    node_1 -> data = 10;
    node_1 -> next = node_2;

    node_2 -> data = 20;
    node_2 -> next = node_3;

    node_3 -> data = 30;
    node_3 -> next = node_4;

    node_4 -> data = 40;
    node_4 -> next = node_5;

    node_5 -> data = 50;
    node_5 -> next = NULL;


    // create reference head Node:

    struct Node *head = node_1;

    // Insert At begining:
    head = InsertFirstNode(5, head);

    // Traversal:
    Traverse(head);

    // Insert At Last:
    head = InsertLastNode(100, head);

    // Traversal:
    Traverse(head);

    // Length Of Linked List : 
    int Len = FindNodeLength(head);

    printf("\n%d\n", Len);

    // Add Node On Position:
    head = InsertAtPosition(200, head, 2);

    // Traverse :
    Traverse(head);


    return 0;
}