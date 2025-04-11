#include <stdio.h>
// #include <conio.h>

int main(){
    int arr[50];
    int size;

    printf("Enter Number of Elements Of Array (Maximum 50) : ");
    scanf("%d", &size);

    if(size > 0 && size < 50){
        for(int i = 0; i < size; i++){
            printf("Enter Element - %d : ", i + 1);
            scanf("%d", &arr[i]);
        }
    }

    for(int i = 0; i < size; i++){
        printf("\nElement - %d : %d", i + 1,  arr[i]);
    }
}