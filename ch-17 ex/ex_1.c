#include "function.c"

int main()
{  
    int p;
    do
    {
        printf("press 1 for +\n");
        printf("press 2 for -\n");
        printf("press 3 for *\n");
        printf("press 4 for /\n");
        printf("press 5 for %\n");
        printf("press 0 for exit\n");
        int a = getint("a");
        int b = getint("b");
        p = getint("prosses");
        switch (p)
        {
        case 1:
            printf("%d + %d : %d\n", a, b,getsum(a,b));
            break;
        case 2:
            printf("%d - %d : %d\n", a, b,getsub(a,b));
            break;
        case 3:
            printf("%d * %d : %d\n", a, b,getmul(a,b));
            break;
        case 4:
            printf("%d / %d : %d\n", a, b,getdiv(a,b));
            break;
        case 5:
            printf("%d % %d : %d\n", a, b,getmod(a,b));
            break;
        case 0:
            printf("thanks !");
            break;
        default :
            printf("Invalid operation\n");
        }

    } while (p!=0);

}