#include<stdio.h>

int main()
{
    char small='a';

    do{
        printf("%c ", small);
        small=small+4;
    }while(small <= 'z');

}

