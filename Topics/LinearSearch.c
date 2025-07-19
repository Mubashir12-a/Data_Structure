#include <stdio.h>
#include <stdbool.h>
#define N 10

int main(){

    int arr[N] = {1, 3, 5, 8, 6, 25, 2, 9, 7, 10};


    printf("Given Array Is \n");

    for(int i = 0; i < N; i++){
        printf("%d \t", arr[i]);
    }

    int find;
    bool flag = false;

    printf("\nEnter Element To Search in array : ");
    scanf("%d", &find);

    for(int i = 0; i < N; i++){
        if(arr[i] == find){
            printf("\nElement Found on index of %d & Position %d \n", i, i + 1);
            flag = true;
            break;
        }else{
            flag = false;
        }
    }

    if(!flag){
        printf("\nElement Not found!");
    }

    return 0;
}