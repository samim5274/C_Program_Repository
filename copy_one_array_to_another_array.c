
#include <stdio.h>
#define max_size 1000

int main()
{
    int source[max_size], dest[max_size];
    int i, size;

    printf("Enter array size: ");
    scanf("%d", &size);


    for(i=0; i<size; i++)
    {
        printf("Enter element of source array: ");
        scanf("%d", &source[i]);
    }

    for (i=0; i<size; i++)
    {
        dest[i] = source[i];
    }

    printf("\n Element of source array: ");
    for(i=0; i<size; i++)
    {
        printf("%d \t", source[i]);
    }

    printf("\n Element of dest array :");
    for(i=0; i<size; i++)
    {
        printf("%d \t", dest[i]);
    }

    return 0;
}
