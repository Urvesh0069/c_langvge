#include <stdio.h>

int main()
{
    char name[15];
    printf("Enter your name: ");
    scanf("%[^\n]",&name);

    for(int i = 0; i < 15; i++)
    {
        if(name[i] >= 65 && name[i] <= 90)
        {
            name[i] += 32;
        }
        else if(name[i] >= 97 && name[i] <= 122)
        {
            name[i] -= 32;
        }
    }
    printf("your name is: %s",name);
}