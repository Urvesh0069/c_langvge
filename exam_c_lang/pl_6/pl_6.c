#include <stdio.h>

int main()
{
    FILE *p1 = fopen("file1.txt", "w");

    int n;
    printf("enter employee number : ");
    scanf("%d", &n);

    char name[1000];
    char role[1000];
    int employee_number;

    for (int i = 0; i < n; i++)
    {
        printf("Enter employee details no : %d\n", i + 1);
        printf("employee name : ");
        scanf("%s", name);
        printf("employee role : ");
        scanf("%s", role);
        printf("employee number : ");
        scanf("%d", employee_number);

        fprintf(p, "name= %s, role = %s\n", name, role);
    }

    fclose(p1);
}
