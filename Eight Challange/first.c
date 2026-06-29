 #include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book book;

    printf("Enter Book Title: ");
    fgets(book.title, sizeof(book.title), stdin);

    printf("Enter Author Name: ");
    fgets(book.author, sizeof(book.author), stdin);

    printf("Enter Book Price: ");
    scanf("%f", &book.price);

    printf("\n----- Book Details -----\n");
    printf("Title : %s", book.title);
    printf("Author: %s", book.author);
    printf("Price : %.2f\n", book.price);

    return 0;
}