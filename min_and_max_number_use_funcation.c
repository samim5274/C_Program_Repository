#include <stdio.h>

int max(int num1, int num2);
int min(int num1, int num2);


int main()
{
    int num1, num2, maximum, minimum;

    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);

    maximum = max(num1, num2);
    minimum = min(num1, num2);

    printf("\nMaximum number is = %d\n",maximum );
    printf("Minimum number is = %d", minimum);

    return 0;
}

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int min(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
