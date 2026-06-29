 #include <stdio.h>

struct Car {
    char make[30];
    char model[30];
    int year;
    char color[20];
};

void printCar(struct Car car) {
    printf("The car is a %d %s %s in %s color.\n",
           car.year, car.make, car.model, car.color);
}

int main() {

    struct Car car1 = {
        "Toyota",
        "Corolla",
        2022,
        "White"
    };

    printCar(car1);

    return 0;
}