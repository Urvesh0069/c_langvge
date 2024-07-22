#include<stdio.h>

int main() 
{
    int n;

    printf("enter a size : ");
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
    {
        printf("velue of a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    int b[n];
    for(int i = 0; i < n; i++)
    {
        printf("velue of b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    int c[n];
    for(int i = 0; i < n; i++)
    {
        c[n] = a[i] + b[i];
        printf("c = a[%d] and b[%d] : %d\n", a[i], b[i], c[n]);
    }
}