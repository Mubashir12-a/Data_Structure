#include <stdio.h>

int Traverse(int array[], int size);
void Insertion(int array[], int *size);
void Deletion(int array[], int *size);

int main()
{

    // Ask For Array:

    int arr[100];
    int size;

    printf("Enter The Size of Array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter Element-%d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Traverse:
    printf("Traverse\n");
    Traverse(arr, size);

    // Insertion:

    printf("Insert Element\n");
    Insertion(arr, &size);
    Traverse(arr, size);

    // Deletion:

    printf("Delete Element\n");
    Deletion(arr, &size);
    Traverse(arr, size);

    return 0;
}

// Methods To Do:
// 1. Traverse:

int Traverse(int array[], int size)
{
    printf("Elements Of Array Are : \n[\t");

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }

    printf("]\n");

    return 0;
}

// 2. Insertion:

void Insertion(int array[], int *size)
{
    int Pos, Val;

    printf("Enter The Value : ");
    scanf("%d", &Val);

    printf("Enter The Position (Index) : ");
    scanf("%d", &Pos);

    if (Pos < 0 || Pos > (*size))
    {
        printf("\nInvalid Position\n");
    }
    else
    {
        for (int i = *size; i > Pos - 1; i--)
        {
            array[i + 1] = array[i];
        }

        array[Pos] = Val;

        *size += 1;
    }
}

// 3. Deletion:

void Deletion(int array[], int *size)
{

    int Val;

    printf("\nEnter Element to delete : ");
    scanf("%d", &Val);

    for (int i = 0; i < (*size); i++)
    {
        if (array[i] == Val)
        {

            for (int j = i; j < (*size); j++)
            {
                array[j] = array[j + 1];
            }

            (*size) -= 1;
            i -= 1;
        }
    }
}