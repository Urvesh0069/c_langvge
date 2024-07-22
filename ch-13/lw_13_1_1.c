#include<stdio.h>

int main() 
{   
    int a;
    printf("Enter size array: ");
    scanf("%d",&a);

    int arr[a];
     int langth = a;

    for(int i = 0; i < a; i++ )
    {
        printf("Enter value a[%d]: ", i);
        scanf("%d",&arr[i]);
    }
    printf("value langth %d",langth);
}