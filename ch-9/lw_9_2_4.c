#include<stdio.h>

int main()
{
    int a=0,b=1,c;
    printf("enter n :");
    scanf("%d",&c);

    for (int i = 0;i <= c; i++ )
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;

    }
    
}