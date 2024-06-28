#include<stdio.h>
#include<conio.h>
main()
{	int a=20,b=10,c;
	clrscr();

	printf("value x :%d\n",a);
	printf("value y :%d\n",b);

	c=a;
	a=b;
	b=c;

	printf("value a :%d\nvalue b :%d",a,b);

	getch();
}