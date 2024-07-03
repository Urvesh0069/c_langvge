#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int a, b, c, d;
    p("enter a number : ");
    s("%d", &a);
    p("enter b number : ");
    s("%d", &b);
    p("enter c number : ");
    s("%d", &c);
    p("enter d number : ");
    s("%d", &d);

    (a > b)
        ? (a > c)
              ? (a > d)
                    ? p("a is the largest")
                    : p("d is the largest")
          : (c > d)
              ? p("c is the largest")
              : p("d is the largest")
    : (b > c)
        ? (b > d)
              ? p("b is the largest")
              : p("d is the largest")
    : (c > d)
        ? p("c is the largest")
        : p("d is the largest");
}