#include <stdio.h>

int user()
{
    int n;

    printf("enter array length: ");
    scanf("%d", &n);
    return n;
}

int reveras_sum()
{

    int n = user();
    int sum = 0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element of array : (%d) ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("Reversed array: \n");
    
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("sum of all elements of array : %d ", sum);
}