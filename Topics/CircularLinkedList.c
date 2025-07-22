#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

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
    node_5 -> next = node_1;

    struct Node *head = node_1;

    do{
        printf("[%d | %p]\n", head -> data, (void *)head -> next);
        head = head -> next;
    }while(head != node_1);


    return 0;
}