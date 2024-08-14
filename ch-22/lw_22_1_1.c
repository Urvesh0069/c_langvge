#include<stdio.h>

struct student
{
    int id;
    char name[50];
    int age;
    char course[50];
    char city[50];
    int standard;
    char school[50];

}


int main()
{
    struct student s1;

    for (int i = 0; i < 3 ; i++)
    {
        printf("enter student details %d\n",i+1);
        printf("id: ");
        scanf("%d",&s1.id);
        printf("name: ");
        scanf("%s",s1.name);
        printf("age: ");
        scanf("%d",&s1.age);
        printf("course: ");
        scanf("%s",s1.course);
        printf("city: ");
        scanf("%s",s1.city);
        printf("standard: ");
        scanf("%d",&s1.standard);
        printf("school: ");
        scanf("%s",s1.school);
    }

    printf("students details :");
    printf("\n");

    for (int i = 0; i < 3 ; i++)
    {
        printf("id: %d\n",s1.id);
        printf("name: %s\n",s1.name);
        printf("age: %d\n",s1.age);
        printf("course: %s\n",s1.course);
        printf("city: %s\n",s1.city);
        printf("standard: %d\n",s1.standard);
        printf("school: %s\n",s1.school);
    }
}