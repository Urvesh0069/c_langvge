#include <stdio.h>
int main()
{
    int a;

    printf("enter number a :");
    scanf("%d", &a);

    if (a > 0)
    {
        printf(" a is positive number");
    }

    else if (a == 0)
    {
        printf("a is neutral number");
    }

    else
    {
        printf("a is nagtive number");
    }
}