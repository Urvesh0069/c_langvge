#include<stdio.h>

int main()
{
    int r,c,large = 0;
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
     for(int j = 0; j < r; j++)
    {
        for(int i = 0; i < c; i++)
        {
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
}