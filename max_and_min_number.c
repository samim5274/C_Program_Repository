#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size];
    int i,max, min, size;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    printf("Enter element of array: ");

    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    max =arr[0];
    min = arr[0];

    for(i=0; i<size; i++)
    {
        //if current element is greater than max.
        if (arr[i] > max)
        {
            max = arr[i];
        }

        //if current element is smaller than min
        if (arr[i] < min)
        {
            min = arr[i];
        }

    }

    printf("Maximum element: %d \n",max);
    printf("Minimum element: %d \n",min);

    return 0;

}
