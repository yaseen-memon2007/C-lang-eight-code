 #include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {

    struct Book books[3] = {
        {.title = "C Programming", .author = "Dennis Ritchie", .price = 1200.50},
        {.title = "Python Basics", .author = "John Smith", .price = 950.00},
        {.title = "Data Structures", .author = "Mark Allen", .price = 1500.75}
    };

    int i;

    printf("Book Details:\n\n");

    for (i = 0; i < 3; i++) {
        printf("Book %d\n", i + 1);
        printf("Title : %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price : %.2f\n\n", books[i].price);
    }

    return 0;
}