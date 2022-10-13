#include <stdio.h>

int main()
{
    int i,j,k;
    float r,rr,r2,r3,r4;
    char name[100];

    printf("Enter Name: ");
    scanf("%s",& name);
    printf("Enter Money: ");
    scanf("%d",& j);
    printf("Enter Salary: ");
    scanf("%d",& k);
    printf("Enter Total Sale: ");
    scanf("%d",& i);

    r = (float) 115 * i;
    r2 = r / 100 ;
    rr = r2 - i;
    printf("Sale dividends: %f" , rr);
    r2 = rr + j;
    r3 = r2 + k;
    printf("\nTotal Amount: %f" , r3);

    return 0;

}
