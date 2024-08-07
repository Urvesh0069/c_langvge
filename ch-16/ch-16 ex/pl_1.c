#include <stdio.h>
#include <string.h>

int main()
{
    char name1[10],name2[10];
    int l = 0;
    int cmp = 0;

    printf("Enter your name: ");
    scanf("%s",&name1);

    for(int i = 0; name1[i] != NULL; i++)
    {
        l++;
    }
    l-=1;
    for(int i = 0; i < l; i++)
    {
        name2[i] = name1[l-i];
    }
    for(int i = 0; i < l; i++)
    {
        if(name1[i] != name2[i])
        {
            cmp++;
        }
    }
    if(cmp==0)
    {
        printf("Name is a palindrome\n");
    }
    else
    {
        printf("Name is not a palindrome\n");
    }

}