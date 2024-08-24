#include <stdio.h>

int main()
{
    int p;
    int a, b;
    do
    {
        printf("press 1 for +\n");
        printf("press 2 for -\n");
        printf("press 3 for *\n");
        printf("press 4 for /\n");
        printf("press 0 for exit\n");

        printf("Enter your choice: ");
        scanf("%d", &p);

        printf("Press enter to first value\n");
        scanf("%d", &a);
        printf("Press enter to second value\n");
        scanf("%d", &b);
        
        switch (p)
        {
        case 1:
            printf("%d + %d : %d\n", a, b, a + b);
            break;
        case 2:
            printf("%d - %d : %d\n", a, b, a - b);
            break;
        case 3:
            printf("%d * %d : %d\n", a, b, a * b);
            break;
        case 4:
            printf("%d / %d : %d\n", a, b, a / b);
            break;
        case 0:
            printf("thanks !");
            break;
        default:
            printf("Invalid operation\n");
        }

    } while (p != 0);
}
