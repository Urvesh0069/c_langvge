#include<stdio.h>

int main()
{
    int r,c,rowsum,colsum;
    printf("enter row :");
    scanf("%d",&r);
    printf("enter column :");
    scanf("%d",&c);

    int a[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("enter value a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i < r ; i++)
    {
        for(int j=0; j < c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int R,C;
    printf("Enter row for sum : ");
    scanf("%d",&R);
    printf("Enter column for sum : ");
    scanf("%d",&C);

    rowsum = 0;
    for(int i = 0; i < r; i++)
    {
        rowsum = rowsum + a[R][i];
    }
    printf("Sum of row is : %d",rowsum);

    colsum = 0;
    for(int i = 0; i < c; i++)
    {
        colsum = colsum + a[i][C];
    }
    printf("\nSum of column is : %d",colsum);
}