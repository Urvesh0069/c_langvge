#include<stdio.h> 
 
int main()
{
    int r,c;
    printf("enter row : ");
    scanf("%d",&r);
    printf("enter coll :");
    scanf("%d",&c);

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter value a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(i == j)
            {
                printf("%d ",a[i][j]);
            }
            else
            {
                printf("_ ");
            }
            
        }
        printf("\n");
        
    }
    

}