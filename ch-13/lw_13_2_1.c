#include<stdio.h>
int main()
{
    int r,c;
    printf("enter row : ");
    scanf("%d",&r);
    printf("enter coll : ");
    scanf("%d",&c);
    
    int a[r][c];
    int ave,sum=0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("enter value a[%d][%d]: ",i,j );
            scanf("%d",&a[i][j]);

            sum = sum+a[i][j];
            
        }
        
    }
    printf("%d",sum);
    ave = sum / (r * c);
    printf("\n%d",ave);

   
}