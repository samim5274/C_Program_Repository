#include <stdio.h>

int main()

{
    int i,j,row,col;
    int a[10][10],b[10][10],c[10][10];

    printf("Enter row = ");
    scanf("%d",&row);

    printf("Enter col = ");
    scanf("%d",&col);

    //input matrix a
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Enter A Matrix value = [%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    //input matrix b
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Enter B Matrix value = [%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    //output matrix a
    printf("A = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    //output matrix b
    printf("B = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }

    //sum of two matrix

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
        }
    }
    printf("\n");

    //print c matrix
    printf("A - B = ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
        printf("\t");
    }

}
