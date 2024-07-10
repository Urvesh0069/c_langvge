#include<stdio.h>

int main()
{
    int n;

    printf("enter n :");
    scanf("%d",&n);

    while (1 <= n)
    {  if(n % 2 == 1)
        { 
       printf("%d",n);
        }
        n--;
    }
    
}
