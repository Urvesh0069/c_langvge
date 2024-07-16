#include<stdio.h>

int main()
{
    char ch = 'A';
    for(int i = 1; i <= 5; i++) 
    {
        for(int j = i; j >= 1; j--)
        {
            printf("%c ",ch + j - 1);
        }
        printf("\n");
    }
}