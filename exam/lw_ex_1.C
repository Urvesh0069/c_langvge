#include<stdio.h>
#include<conio.h>
main()
{
	float f,c,a=9,b=5,d=32;
	clrscr();
	printf("temprature c :");
	scanf("%f",&c);

	f=(a/b)*c+d;

	printf("temprature f :%.2f",f);
	getch();

}