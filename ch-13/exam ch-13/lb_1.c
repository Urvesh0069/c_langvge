#include<stdio.h>

int main()
{
    int r;
    int na = 0;
    printf("enter row : ");
    scanf("%d",&r);

    int a[r];
    for(int i=0; i<r; i++)
    {
        printf("value a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<r; i++)
    {
        if(na > a[i])
        {
         printf("%d ,",a[i]);
        } 
    }
}