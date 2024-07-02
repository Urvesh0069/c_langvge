#include<stdio.h>

int main()
{
    int a,b,c;

    printf("add number a :");
    scanf("%d",&a);
    printf("add number b :");
    scanf("%d",&b);
    printf("add number c :");
    scanf("%d",&c);

    if(a < b)
    {   if(a < c){
            printf("a is small number");
        }
        else{
            printf("c is small number");
        }

    }
    else
    {   if(b < c){
            printf("b is small number");
        }
        else{
            printf("c is small number");
        }

    }

}