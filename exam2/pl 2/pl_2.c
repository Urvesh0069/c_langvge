#include <stdio.h>

struct student
{
    char name[50];
    int roll_no;
    int sub1;
    int sub2;
    int sub3;
    int total;
    float pr;
};

int main()
{
    struct student s[5];

    // input file
    for (int i = 0; i < 2; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", &s[i].name);
        printf("enter roll number :");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks in chemistry: ");
        scanf("%d", &s[i].sub1);
        printf("Enter marks in methematics :");
        scanf("%d", &s[i].sub2);
        printf("Enter marks in physics :");
        scanf("%d", &s[i].sub3);
        s[i].total = (s[i].sub1 + s[i].sub2 + s[i].sub3);
        s[i].pr = (float)s[i].total / 3;
    }

    // output file
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        printf("%s ", s[i].name);
        printf("(%d)\n", s[i].roll_no);
        printf("chemistry %d\n", s[i].sub1);
        printf("methematics %d\n", s[i].sub2);
        printf("physics %d\n", s[i].sub3);
        printf("total : %d / 300 \n", s[i].total);
        printf("percent : %.2f \n", s[i].pr);
        printf("\n \n");
    }
}