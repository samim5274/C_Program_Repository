#include <stdio.h>
#define max_size 1000

int main()
{
    int arr[max_size];
    int i, size, even, odd;

    printf("Enter array size: ");
    scanf("%d",&size);

    printf("Enter array element: ");
    for (i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    even = 0;
    odd = 0;

    for(i=0; i<size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even number : %d\n", even);
    printf("Total odd number : %d", odd);

    return 0;
}
