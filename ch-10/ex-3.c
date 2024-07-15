#include <stdio.h>

int main()
{
    int number,first,last;
    printf("Enter a number : ");
    scanf("%d", &number);

    last = number%10;
    printf("%d",last);

    first = number/100;
    printf("\n%d",first);

}