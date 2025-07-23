// Delete an Element From an Array as per User Given Value:

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int arr[100];
    int size, val;
    bool flag = false;

    // Ask for no.of elements to add inside an array which will be stored In (size);

    printf("Enter no.of Elements : ");
    scanf("%d", &size);

    // Ask each element through For loop:

    printf("\nEnter Elements: \n");

    for(int i = 0; i < size; i++){
        printf("Element-%d : ", i+1);
        scanf("%d", &arr[i]);
    }

    // Display All Elements Given by User: 

    printf("Array Contains : [ ");

    for(int i = 0; i < size; i++){
        printf(" %d ", arr[i]);
    }

    printf(" ]");


    printf("\n");

    // Delete Value on Position:

    // 1. Take Value Input from user and store in (val):

    printf("For Deletion Enter Value : ");
    scanf("%d", &val);

    // 2. Check if Value is inside Array -> Delete else Display a message:

    for(int i = 0; i < size; i++){
        if(arr[i] == val){
            for(int j = i; j < size; j++){
                arr[j] = arr[j + 1];
            }
            size--;
            flag = true;
            break;
        }
    }

    if(!flag){
        printf("Value Not Found In Array\n");
    }

    // 3. Display Elements After Deletion:

    printf("Array Contains : [ ");

    for(int i = 0; i < size; i++){      
        printf(" %d ", arr[i]);
    }

    printf(" ]");

    return 0;
}