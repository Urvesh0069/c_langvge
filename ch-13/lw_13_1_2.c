#include<stdio.h>

int main() 
{   
    int a;
    float sum = 0.0;
    printf("Enter size array: ");
    scanf("%d",&a);

    int arr[a];

    for(int i = 0; i < a; i++ )
    {
        printf("Enter value a[%d]: ", i);
        scanf("%d",&arr[i]);

        sum = sum + arr[i] / a;
    }
    printf("Sum of all elements: %f", sum);
}