#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,total;
	clrscr();

	printf("value x :");
	scanf("%d",&x);

	printf("value y :");
	scanf("%d",&y);

	total= (x*x) - (2*x*y) + (y*y);

	printf("total :%d",total);

	getch();

}







