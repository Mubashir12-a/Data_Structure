#include <stdio.h>
#include <stdbool.h>

#define N 9

int main(){

    int arr[N] = {2, 5, 8, 1, 3, 4, 6, 7, 9};
    int min;
    int index;
    int temp;
    
    for(int i = 0; i < N; i++){
        min = arr[i];
        index = i;
        
        for(int j = i + 1; j < N; j++){
            if(min > arr[j]){
                min = arr[j];
                index = j;
            }
        }
        
        if(index != i){
            temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
    
    for(int i = 0; i < N; i++){
        printf("%d \t", arr[i]);
    }
    
    
    return 0;
}