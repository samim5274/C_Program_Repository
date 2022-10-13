
#include <stdio.h>
#define max_size 1000

int main()
{
    int arr[max_size];
    int i, size, count = 0;

    printf("Enter array size: ");
    scanf("%d",&size);

    printf("Enter array element: ");
    for (i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }


    for(i=0; i<size; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }

    printf("Total even number : %d\n",count);

    return 0;
}
