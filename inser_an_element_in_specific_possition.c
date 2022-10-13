#include <stdio.h>
#define max_size 1000

int main()
{

    int arr[max_size];
    int i, size, num, pos;

    printf("Enter array size: ");
    scanf("%d", &size);


    for(i=0; i<size; i++)
    {
        printf("Enter element of array: ");
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert array: ");
    scanf("%d", &num);

    printf("Enter element possition in array: ");
    scanf("%d", &pos);

    if (pos > size+1 || pos <= 0)
    {
        printf("Invalid possition! Please enter possition 1 to %d", size);
    }
    else
        {
            for(i=size; i>=pos; i--)
            {
                arr[i] = arr[i-1];
            }

            arr[pos-1] = num;
            size++;

            printf("Array elements after insertion: ");
            for (i=0; i<size; i++)
            {
                printf("%d \t", arr[i]);
            }
        }



    return 0;
}
