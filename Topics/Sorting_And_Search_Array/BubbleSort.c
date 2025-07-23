#include <stdio.h>
#include <stdbool.h>

#define N 9

int main(){

    int arr[N] = {2, 5, 8, 1, 3, 4, 6, 7, 9};
    int temp;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        printf("%d \t", arr[i]);
    }
    
    
    return 0;
}