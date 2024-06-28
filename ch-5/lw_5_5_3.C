#include<stdio.h>
#include<conio.h>
main()
{	float x,y,total;
	clrscr();

	printf("value x :");
	scanf("%f",&x);

	printf("value y :");
	scanf("%f",&y);

	total=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);

	printf("total :%.1f",total);

	getch();

}