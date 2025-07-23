#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(){

    int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Array must shiuld be sorted.
    
    int find = 9; //  Element to find

    int mid, initial = 0, final = N - 1;
    bool flag = false;
    

    while(initial <= final){
        mid = (initial + final) / 2;

        if(arr[mid] == find){
            printf("Element found at position of : %d", mid + 1);
            flag = true;
            break;
        }else if(arr[mid] > find){
            final = mid - 1;
        }else{
            initial = mid + 1;
        }
    }

    if(!flag){
        printf("\nElement Not Found In Array.");
    }

    return 0;
}