#include <stdio.h>
#define max 1000

int main()
{
    int arr[max];
    int i,n,sum=0;

    printf("Enter size of the array: ");
    scanf("%d",&n);

    printf("Enter %d element of the array: ",n);
    for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        printf("sum of all element of array = %d ", sum);

    return 0;
}
