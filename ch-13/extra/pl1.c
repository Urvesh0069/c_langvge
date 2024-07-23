
// array 1 AND array 2 marj array 3

// array (1 to 10) 


#include<stdio.h>

int main()
{
    int n1, n2, n3;
    printf("enter size a: ");
    scanf("%d",&n1);

    int a[n1];
    for(int i = 0; i < n1; i++)
    {
        printf("enter value a[%d]:", i);
        scanf("%d", &a[i]);
    }

    printf("enter size b: ");
    scanf("%d",&n2);

    int b[n2];
    for(int i = 0; i < n2; i++)
    {
        printf("enter value b[%d]:", i);
        scanf("%d", &b[i]);
    }

    n3 = n1 + n2;

    int c[n3];

    for(int i = 0; i < n1; i++)
    {
        c[i] = a[i];

    }
    for(int i = n1; i < n3; i++)
    {
        c[i] = b[i - n1];
    }

    for(int i = 0; i < n3; i++)
    {   

        printf("%d ,", c[i]);  
        
    }

    for(int i = 0; i < n3; i++)
    {
        for(int j = i + 1; j < n3; j++)
        {
            if(c[i] > c[j])
            {
                c[i] = c[i] + c[j];
                c[j] = c[i] - c[j];
                c[i] = c[i] - c[j];
            }
        }
    }
    printf("\n");
     for(int i = 0; i < n3; i++)
    {   
        
        printf("%d ,", c[i]);  
        
    }

     
}