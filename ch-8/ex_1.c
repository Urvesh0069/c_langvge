#include <stdio.h>
#define p printf
#define s scanf

int main()
{
    int m;
    char g;

    p("enter your mark :");
    s("%d", &m);

    (m >= 85 && m <= 100)
        ? g = 'A'
    : (m >= 70 && m <= 84)
        ? g = 'B'
    : (m >= 60 && m <= 69)
        ? g = 'C'
    : (m >= 40 && m <= 59)
        ? g = 'D'
    : (m >= 33 && m <= 39)
        ? g = 'E'
    : (m >= 0 && m <= 32)
        ? g = 'F'
        : p("invelide input..");
    p("grade is : %c \t", g);

    switch (g)
    {
    case 'A':
        p("Excellent work\t");
        break;
    case 'B':
        p("Well done\t");
        break;
    case 'C':
        p("Good job\t");
        break;
    case 'D':
        p("You passed but you could do better\t");
        break;
    case 'E':
        p("You passed but you could do better\t");
        break;
    case 'F':
        p("Sorry you failed\t");
        break;
    default:
        p("invelied input\t");
    }

    if (g == 'F')
    {
        p("you are not eligible for the next level");
    }
    else
    {
        p("you are eligible for the next level");
    }
}