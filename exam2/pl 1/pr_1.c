#include <stdio.h>

int main()
{
    FILE *p1 = fopen("file1.txt", "w");
    FILE *p2 = fopen("file2.txt", "w");

    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(p1, "%d\n", i);
        }
        else
        {
            fprintf(p2, "%d\n", i);
        }
    }

    fclose(p1);
    fclose(p2);
}