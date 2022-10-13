#include <stdio.h>
#define MAX 1000


int main()
{
    int arr[MAX];
    int i,n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Ender %d elements in the array: ", n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n Elements in array are: " );

    for (i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
