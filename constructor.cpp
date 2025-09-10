#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
    int speed;

    // Default constructor using member initializer list
    Car() : brand("Unknown"), model("Unknown"), year(2000), speed(0) {
        cout << "Default Car constructor called!" << endl;
    }

    // Parameterized constructor 1
    Car(string b, string m, int y) : brand(b), model(m), year(y), speed(0) {
        cout << "Parameterized Car constructor (brand, model, year) called!" << endl;
    }

    // Parameterized constructor 2 (full customization)
    Car(string b, string m, int y, int s) : brand(b), model(m), year(y), speed(s) {
        cout << "Parameterized Car constructor (brand, model, year, speed) called!" << endl;
    }

    void displayInfo()  {
        cout << "Brand: " << brand
             << ", Model: " << model
             << ", Year: " << year
             << ", Speed: " << speed << " km/h" << endl;
    }
};
int main() {
    Car defaultCar;
    defaultCar.displayInfo();

    Car semiCustomCar("Honda", "Civic", 2023);
    semiCustomCar.displayInfo();

    Car fullCustomCar("Tesla", "Model S", 2024, 120);
    fullCustomCar.displayInfo();

    return 0;
}