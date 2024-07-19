#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int s = i; s <= 4; s++)
        {
            printf(" ");
        }
        for (int s = 4; s >= i; s--)
        {
            printf(" ");
        }
        for (int k = i; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}