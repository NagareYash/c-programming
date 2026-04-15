#include <stdio.h>
#include <math.h>

typedef struct {
    char title[50];
    char author[50];
    float price;
    int year;
} Book;

void cheaperBook(Book b1, Book b2) {
    float diff = fabs(b1.price - b2.price);

    if (b1.price < b2.price) {
        printf("\"%s\" is cheaper by $%.2f\n", b1.title, diff);
    } else if (b2.price < b1.price) {
        printf("\"%s\" is cheaper by $%.2f\n", b2.title, diff);
    } else {
        printf("Both books are the same price.\n");
    }
}

int main() {
    Book b1 = {
        .title = "The C Programming Language",
        .author = "Kernighan & Ritchie",
        .price = 45.99f,
        .year = 1988
    };

    Book b2 = {
        .title = "C: A Reference Manual",
        .author = "Harbison & Steele",
        .price = 65.50f,
        .year = 2002
    };

    printf("Book 1: \"%s\" by %s ($%.2f, %d)\n", b1.title, b1.author, b1.price, b1.year);
    printf("Book 2: \"%s\" by %s ($%.2f, %d)\n", b2.title, b2.author, b2.price, b2.year);
    printf("\n");

    cheaperBook(b1, b2);

    return 0;
}