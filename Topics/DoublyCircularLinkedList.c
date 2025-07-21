#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

int main(){

    struct Node *node_1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node_2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node_3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node_4 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node_5 = (struct Node*)malloc(sizeof(struct Node));

    node_1 -> data = 10;
    node_1 -> next = node_2;
    node_1 -> prev = node_5;

    node_2 -> data = 20;
    node_2 -> next = node_3;
    node_2 -> prev = node_1;

    node_3 -> data = 30;
    node_3 -> next = node_4;
    node_3 -> prev = node_2;

    node_4 -> data = 40;
    node_4 -> next = node_5;
    node_4 -> prev = node_3;

    node_5 -> data = 50;
    node_5 -> next = node_1;
    node_5 -> prev = node_4;


    // Forward traversal:

    struct Node *head = node_1;

    printf("\n------------Forward traversal---------\n");

    do{
        printf("[%p | %d | %p]\n", head -> prev, head -> data, head -> next);
        head = head -> next;
    }while(head != node_1);

    // Reverse Traversal:

    struct Node *head_rev = node_5;

    printf("\n------------Reverse traversal---------\n");

    do{
        printf("[%p | %d | %p]\n", head_rev -> prev, head_rev -> data, head_rev -> next);
        head_rev = head_rev -> prev;
    }while(head_rev != node_5);

    return 0;
}