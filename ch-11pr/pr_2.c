#include <stdio.h>

int main()
{
    int k = 11;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
}