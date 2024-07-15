#include <stdio.h>

int main()
{
    int digit;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &digit);

    int temp=digit;

    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    
    printf("Number of digits in %d: %d\n", digit, count);
    
}