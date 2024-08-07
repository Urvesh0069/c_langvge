#include <stdio.h>
 
int user()
{   
    int a,b;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);
    return a,b;
  
    int call;
    printf("press 1 for + :");
    printf("press 2 for - :");
    printf("press 3 for * :");
    printf("press 4 for / :");
    printf("press 5 for % :");
    printf("press 0 for exit :");
    scanf("%d",&call);

    switch (call)
    {
    case '1' :
        printf("%d + %d : %d", a, b,a+b);
        break;
    case '2' :
        printf("%d - %d : %d", a, b,a-b);
        break;
    case '3' :
        printf("%d * %d : %d", a, b,a*b);
        break;
    case '4' :
        printf("%d / %d : %d", a, b,a/b);
        break;
    case '5' :
        printf("%d % %d : %d", a, b,a%b);
        break;
    case '0' :
        break;
    default  :
        break;
    }


}
































// int main()
// {
//     int m;
//     char g;

//     p("enter your mark :");
//     s("%d", &m);

//     (m >= 85 && m <= 100)
//         ? g = 'A'
//     : (m >= 70 && m <= 84)
//         ? g = 'B'
//     : (m >= 60 && m <= 69)
//         ? g = 'C'
//     : (m >= 40 && m <= 59)
//         ? g = 'D'
//     : (m >= 33 && m <= 39)
//         ? g = 'E'
//     : (m >= 0 && m <= 32)
//         ? g = 'F'
//         : p("invelide input..");
//     p("grade is : %c \t", g);

//     switch (g)
//     {
//     case 'A':
//         p("Excellent work\t");
//         break;
//     case 'B':
//         p("Well done\t");
//         break;
//     case 'C':
//         p("Good job\t");
//         break;
//     case 'D':
//         p("You passed but you could do better\t");
//         break;
//     case 'E':
//         p("You passed but you could do better\t");
//         break;
//     case 'F':
//         p("Sorry you failed\t");
//         break;
//     default:
//         p("invelied input\t");
//     }

//     if (g == 'F')
//     {
//         p("you are not eligible for the next level");
//     }
//     else
//     {
//         p("you are eligible for the next level");
//     }
// }