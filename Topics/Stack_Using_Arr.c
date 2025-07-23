#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N  100


bool IsEmpty();
void PushStack(int val);
void PopStack();
void Traverse();
void PeekStack();
void ClearStack();


int arr[N], Top = -1, Bottom = -1;

int main(){
    
    PushStack(10);
    PushStack(20);
    PushStack(30);
    Traverse();
    
    PopStack();
    Traverse();

    PopStack();
    PopStack();
    Traverse();

    PopStack();
    Traverse();

    PushStack(10);
    PushStack(20);
    PushStack(30);
    Traverse();
    
    PeekStack();
    
    ClearStack();
    Traverse();
    
    return 0;
}


void PushStack(int val){
    if(Top + 1 < N){
        arr[Top + 1] = val;
        Top++;
    }else{
        printf("Stack OverFlow\n");
    }
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

void PopStack(){
    if(!IsEmpty()){
        Top--;
    }else{
        printf("Stack UnderFlow\n");
    }
}

bool IsEmpty(){
    if(Top == Bottom){
        return true;
    }else{
        return false;
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
    Top = Bottom;
    printf("Stack Reset Done.\n");
}