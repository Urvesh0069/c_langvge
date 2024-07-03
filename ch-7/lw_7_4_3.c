#include <stdio.h>
#define p printf
#define s scanf

int main()
{
    int a, b, c, d, e, f;

    p("enter number of a :");
    s("%d", &a);
    p("enter number of b :");
    s("%d", &b);
    p("enter number of c :");
    s("%d", &c);
    p("enter number of d :");
    s("%d", &d);
    p("enter number of e :");
    s("%d", &e);
    p("enter number of f :");
    s("%d", &f);

    (a > b)
        ? (a > c)
              ? (a > d)
                    ? (a > e)
                          ? (a > f)
                                ? p("largest number is a")
                                : p("largest number is f")
                      : (e > f)
                          ? p("largest number is e")
                          : p("largest number is f")
                : (d > e)
                    ? (d > f)
                          ? p("largest number is d")
                          : p("largest number is f")
                : (e > f)
                    ? p("largest number is e")
                    : p("largest number is f")
          : (c > d)
              ? (c > e)
                    ? (c > f)
                          ? p("largest number is c")
                          : p("largest number is f")
                : (e > f)
                    ? p("largest number is e")
                    : p("largest number is f")
          : (d > e)
              ? (d > f)
                    ? p("largest number is d")
                    : p("largest number is f")
          : (e > f)
              ? p("largest number is e")
              : p("largest number is f")
    : (b > c)
        ? (b > d)
              ? (b > e)
                    ? (b > f)
                          ? p("largest number is b")
                          : p("largest number is f")
                : (e > f)
                    ? p("largest number is e")
                    : p("largest number is f")
          : (d > e)
              ? (d > f)
                    ? p("largest number is d")
                    : p("largest number is f")
          : (e > f)
              ? p("largest number is e")
              : p("largest number is f")
    : (c > d)
        ? (c > e)
              ? (c > f)
                    ? p("largest number is c")
                    : p("largest number is f")
          : (e > f)
              ? p("largest number is e")
              : p("largest number is f")
    : (d > e)
        ? (d > f)
              ? p("largest number is d")
              : p("largest number is f")
    : (e > f)
        ? p("largest number is e")
        : p("largest number is f");
}
