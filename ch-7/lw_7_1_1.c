#include <stdio.h>
int main()
{
    int a, b;

    printf("enter number a :");
    scanf("%d", &a);

    printf("enter number b :");
    scanf("%d", &b);

    if (a < b)
    {
        printf(" a is min.. number.");
    }
    else
    {
        printf(" b is min.. number.");
    }
}