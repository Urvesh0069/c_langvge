#include<stdio.h>

void cube()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    printf("cube value %d : cube = %d",a,a*a*a);
}
int main()
{
    cube();
}