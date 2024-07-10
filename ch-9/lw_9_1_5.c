#include<stdio.h>

int main()
{
    int start,end;
    printf("start year : ");
    scanf("%d",&start);
    printf("end year :");
    scanf("%d",&end);

    while (start <= end)
    {
        if(start % 4 == 0)
        {
            printf("\nleap year: %d",start);
        }
            start++;
    }
    
}