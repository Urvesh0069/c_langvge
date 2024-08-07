#include<stdio.h>
 
int size()
{   
    int n;
    printf("enter size of array : ");
    scanf("%d", &n);
    return n;
}

int arraymax()
{
    int n = size();
    int l=0;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("enter elements of array %d: ",i);
        scanf("%d", &arr[i]);

        if(arr[i] > l)
        {
            l = arr[i];
        }
    }
    return l;
    
}