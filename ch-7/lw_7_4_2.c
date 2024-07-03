#include <stdio.h>
#define p printf
#define s scanf

int main()
{
    int a, b, c, d, e;

    p("Enter the value of a, b, c, d, and e: ");
    s("%d %d %d %d %d", &a, &b, &c, &d, &e);

    (a < b)
        ? (a < c)
              ? (a < d)
                    ? (a < e)
                          ? p("a is small number")
                          : p("e is small number")
                : (d < e)
                    ? p("d is small number")
                    : p("e is small number")
          : (c < d)
              ? p("c is small number")
              : p("d is small number")
    : (b < c)
        ? (b < d)
              ? (b < e)
                    ? p("b is small number")
                    : p("e is small number")
          : (d < e)
              ? p("d is small number")
              : p("e is small number")
    : (c < d)
        ? (c < e)
              ? p("c is small number")
              : p("e is small number")
    : (b < e)
        ? p("b is small number")
        : p("e is small number");
}