#include<stdio.h>

int main(){

    int a,b,c,d;
    
    printf("enter a number :");
    scanf("%d",&a);

    printf("enter b number :");
    scanf("%d",&b);

    printf("enter c number :");
    scanf("%d",&c);

    printf("enter d number :");
    scanf("%d",&d);

    if(a > b)
    {   if(a > c)
        {
            if(a > d){
                printf("a is big number ");
            }
            else{
                printf("d is big number ");
            }
        }
        else
        {   if(c > d){
                printf("c is big number ");
            }
            else{
                printf("d is big number ");
            } 
            
        }

    }
    else
    {   if(b > c)
        {
            if(b > d){
                printf("b id big number ");
            }
            else{
                printf("d is big number ");
            }
        }
        else
        {
            if(c > d){
                printf("c is big number ");
            }
            else{
                printf("d is big number ");
            }
        }
    }
}
