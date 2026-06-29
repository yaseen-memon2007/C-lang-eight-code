 #include <stdio.h>

struct Car {
    char make[30];
    char model[30];
    int year;
    char color[20];
};

int main() {

    struct Car car1 = {
        "Toyota",
        "Corolla",
        2022,
        "White"
    };

    printf("Car Details:\n");
    printf("Make  : %s\n", car1.make);
    printf("Model : %s\n", car1.model);
    printf("Year  : %d\n", car1.year);
    printf("Color : %s\n", car1.color);

    return 0;
}