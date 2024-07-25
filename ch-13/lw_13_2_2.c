#include<stdio.h>
int main()
{
    int r,c;
    printf("enter row : ");
    scanf("%d",&r);
    printf("enter coll : ");
    scanf("%d",&c);

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter value a: ");
            scanf("%d",&a[i][j]);

        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}