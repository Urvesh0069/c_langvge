#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 2; s <= i; s++)
        {
            printf(" ");
        }
        for (int j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}