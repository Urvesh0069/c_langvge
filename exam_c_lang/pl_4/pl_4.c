#include <stdio.h>

int main()
{
    int n;

    printf("enter array length: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr[n];
    int **ptr2;

    ptr[n] = arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element of array : (%d) ", i + 1);
        scanf("%d", &ptr[i]);
    }

    printf("orignal array of: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    printf("\narray cubes of: \n");
    for (int i = 0; i < n; i++)
    {
        ptr[i] = (*ptr[i]) * (*ptr[i]) * (*ptr[i]);
        printf("%d ", ptr[i]);
    }
}
