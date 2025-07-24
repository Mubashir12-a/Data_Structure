#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool IsEmpty();
void Traverse();
void PushStack(int val);
void PopStack();
void PeekStack();
void ClearStack();

int Top = -1, N = 0, Bottom = -1;
int *arr;

int main(){

    PushStack(10);
    Traverse();

    PushStack(20);
    PushStack(30);
    PushStack(40);
    Traverse();

    PopStack();
    Traverse();

    PeekStack();

    ClearStack();
    Traverse();

    PushStack(100);
    PushStack(200);
    PushStack(300);
    Traverse();


    return 0;
}

void PushStack(int val){
    N++;
    Top++;

    arr = realloc(arr, N * sizeof(int));

    if(arr == NULL){
        printf("Memory Allocation Failed\n");
        exit(1);
    }

    arr[Top] = val;
}

void Traverse(){
    if(!IsEmpty()){
        printf("Array : ");

        for(int i = 0; i <= Top; i++){
            printf("%d\t", arr[i]);
        }

        printf("\n");
    }else{
        printf("Stack Is Empty\n");
    }
}

bool IsEmpty(){
    if(Top == Bottom){
        return true;
    }else{
        return false;
    }
}

void PopStack(){
    if(!IsEmpty()){
        N--;
        Top--;

        arr = realloc(arr, N * sizeof(int));
    }else{
        printf("Stack Is Empty\n");
    }
}

void PeekStack(){
    if(Top != Bottom){
        printf("Top Element is : %d \n", arr[Top]);
    }else{
        printf("Stack is Empty\n");
    }
}

void ClearStack(){
    N = 0;
    Top = Bottom;

    free(arr);
    arr = NULL;

    printf("Stack Reset Done.\n");
}