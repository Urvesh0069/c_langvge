#include<stdio.h>
#include<conio.h>
main()
{	int a=20,b=10;
	clrscr();

	printf("value a :%d\nvalue b :%d\n",a,b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("value a :%d\nvalue b :%d",a,b);
	getch();

}