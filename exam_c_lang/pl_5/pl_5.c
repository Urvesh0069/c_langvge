#include <stdio.h>
struct book
{
    char title[50];
    char author[50];
    int price;
};

int main()
{
    int n;

    printf("Enter the number of books: ");
    scanf("%d", &n);

     struct book b[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nBook %d Details:\n", i + 1);
        printf("Enter the title of the book: ");
        scanf("%s", &b[i].title);
        printf("Enter the author of the book: ");
        scanf("%s", &b[i].author);
        printf("Enter the price of the book: ");
        scanf("%d", &b[i].price);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("Book %d Details:\n", i + 1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Price: %d\n", b[i].price);
        printf("\n");
    }
}
