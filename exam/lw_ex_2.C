#include<stdio.h>
#include<conio.h>
main()
{
	float salary,hra,da,ta,grosssalary;
	clrscr();

	printf("salary : ");
	scanf("%f",&salary);

	hra=salary*0.10;
	da =salary*0.05;
	ta =salary*0.08;

	grosssalary=salary+hra+da+ta;

	printf("gross salary :%.2f",grosssalary);


	getch();

}
