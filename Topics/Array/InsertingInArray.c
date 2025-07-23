/*
    Insert an element in a array as per user position (pos) and value (val);
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[100];
    int size, pos, val;

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

    // Insert Value on Position:

    // 1. Take Value Input from user and store in (val):

    printf("For Insertion Enter Value : ");
    scanf("%d", &val);

    // 2. Take Position Input from user and store in (pos) --> Note: Position is not as per index:

    printf("On which Position : ");
    scanf("%d", &pos);

    if(pos < 1 || pos > size + 1){
        printf("\nInvalid Position\n\tPlease Enter Position Between 1 to %d", size + 1);
        exit(0);
    }

    // 3. Logic For Insertion:

    for(int i = size + 1; i > pos - 1; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = val;

    /*
        Dry-Run:

        let array size = 5; pos = 3, val = 100;
        array = [ 10, 20, 30, 40, 50 ]

        i = size + 1 ==> i = 5 + 1 ==> i = 6 ---------- loop iteration - 01
            if(i > pos) ==> if(6 > 3) {
                arr[i] = arr[i - 1];
                -- arr[6] = arr[5] ==> arr[6] = 50 ------ [10, 20, 30, 40, 50,  [50] ]
            }
        i-- ==> 6 - 1 ==> 5


        i = 5 ---------- loop iteration - 02
            if(i > pos) ==> if(5 > 3) {
                arr[i] = arr[i - 1];
                -- arr[5] = arr[4] ==> arr[5] = 40 ------ [10, 20, 30, 40, [40], [50] ]
            }
        i-- ==> 5 - 1 ==> 4
    

        i = 4 ---------- loop iteration - 03
            if(i > pos) ==> if(4 > 3) {
                arr[i] = arr[i - 1];
                -- arr[4] = arr[3] ==> arr[4] = 30 ------ [10, 20, 30, [30], [40], [50] ]
            }
        i-- ==> 4 - 1 ==> 3


        i = 3 ---------- loop iteration - 04 (last)
            if(i > pos) ==> if(3 > 3) -- condition fails so: 
                arr[pos - 1] = val --- arr[3 - 1] ---- arr[2] = 100 ------- [10, 20, [100], [30], [40], [50]]
    
    */

    // 4. Display Array after Insertion : 

    printf("Array Contains : [ ");

    for(int i = 0; i < size + 1; i++){      // size + 1 because after insertion an element was added so size is increased by 1 ( size + 1);
        printf(" %d ", arr[i]);
    }

    printf(" ]");

    return 0;
}